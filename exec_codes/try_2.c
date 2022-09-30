#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("try_2 is executing first\n");
    printf("PID of try_2 is %d\n",getpid());
    printf("after exec system call\n");
    execl("file_2","file_2",NULL);
    printf("THIS LINE WILL NEVER EXECUTES");
    return 0;
}