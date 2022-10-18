#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[100];
    scanf("%[^\n]s \n", name);
    printf("%s",name);
    return 0;
}
