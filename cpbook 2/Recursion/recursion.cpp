#include <stdio.h>
#include <stdlib.h>
void recurse(int count)
{
    if (count == 5)
        return;
    printf("Hurray, I am Learning Recursion!\n");

    recurse(count+1);
    //return;
}
int main()
{
    recurse(1);
    return 0;
}
