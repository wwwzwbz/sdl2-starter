
import bisect
possible = True
oldest = ""

def getOldestDep(package, pack):
    global oldest
    if len(pack[package] ) == 0:
        return package
    
    for d in pack[package]:
        getOldestDep(d, pack)
    
    if package > oldest:
        oldest = package
    
        

def getOrder(package, ans, pack, record, building):
    global possible
    global packages
    if ((package in record) or (not possible)):
        return

    building.append(package)
    for d in pack[package]: # going through the dependencies
        #print(d)
        if d in building:
            possible = False
            return
        getOrder(d, ans, pack, record, building)
    
    building.remove(package)
    record.append(package)
    #ans.append(package)
    #ans = add(ans, package)
    ans = bisect.insort(ans, package)
    



print("hello",  end="")
print("\n")
print("world")

    

