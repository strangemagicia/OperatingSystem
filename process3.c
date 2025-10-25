#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
    pid_t pid;
    pid=fork();
    pid=fork();
    pid=fork();
    printf("hello work!\n");
    return 0;
}
