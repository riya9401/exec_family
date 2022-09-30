#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("you are in file_2\n");
    printf("PID of file_2 is %d\n",getpid());
    printf("file_2 ends");
    return 0;
}