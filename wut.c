#include <stdio.h>


#include <stdlib.h>
void test_struct();
int cmp_stu_by_age(const void* e1, const void* e2);
struct stu
{
    char name[20];
    int grade;
};


void test_struct() {
    struct stu s[3] = {{"ksjflkdsjf\n", 10}, {"efd", 20}, {"ksldjf", 30}};
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int cmp_stu_by_age(const void* e1, const void* e2) {
    return ((struct stu*)e1)->grade - ((struct stu*)e2)->grade;
}

int main(int argc, char const *argv[])
{
    test_struct();
    return 0;
}
