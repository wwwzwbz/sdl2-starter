
def findSons(dad):
    sons = []
    global packages
    global pack
    for p in packages:
        if dad in pack[p]:
            sons.append(p)
    
    return sons

def getFirst():
    global pack
    global indegree
    global packages
    k = 0
    for p in packages:
        if indegree[p] == 0:
            if k == 0:
                result = p
                k += 1
            elif p < result:
                result = p
    return result


def updateNumOfZero():
    global numOfZero
    numOfZero = 0
    for p in packages:
        if indegree[p] == 0:
            numOfZero += 1

def updateGraph(delete):
    global pack
    global indegree
    for s in findSons(delete):
        indegree[s] -= 1
    indegree[delete] = -1
    packages.remove(deleted)

j = True
while (True):
    if not j:
        print("\n")
    
    n = (int)(input())

    if (n == 0):
        break

    packages = []
    ans = []
    pack = {}
    indegree = {}
    for i in range (0, n):
        info = input().split()
        name = info[0]
        packages.append(name)
        info = info[1:]
        info.sort()
        #print(info)
        pack[name] = info
    
    #print(pack)
    #print(n)
    packages.sort()
    numOfZero = 0
    for p in packages:
        indegree[p] = len(pack[p])
        if len(pack[p]) == 0:
            numOfZero += 1
    # indegree is the number of deps
    #print(indegree)
    #SystemExit()

    if (numOfZero == 0):
        print("cannot be ordered", end="")
        j = False
        continue
    
    while(numOfZero != 0):
        deleted = getFirst()
        #print(deleted)
        ans.append(deleted)
        updateGraph(deleted)
        updateNumOfZero()
    
    if (len(ans) != n):
        print("cannot be ordered", end="")
        j = False
    else:
        #print("-------------------------")
        for item in ans:
            
            if (item == ans[len(ans) - 1]):
                print(item, end="")
            else:
                print(item)
            
            #print(item)
        j = False
