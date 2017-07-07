#include <stdlib.h>
#include <stdio.h>

void printName();

int main ()
{
    void printName();
    printf("hello world!\n");

    return 0;
}


void printName()
{
    char name[20] = {0};
    printf("Type your name:");
    scanf("%s", name);
}