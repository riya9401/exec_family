#include<stdio.h>
#include<unistd.h>
int main()
{
    // int *p1;
    // int *p2;
    // p1 = 20;
    // p2 = 22;  
    printf("YOU ARE IN EXEC.c \n");
    execl("file","file",NULL);
    printf("after exec system call");
    return 0;
} 