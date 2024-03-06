#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 

    int pid=fork();        /* fork a process */
    if(pid==0){
          printf("This is the child process, with PID: %d\n", getpid());
    }
    
    else{
       printf("This is the parent process, with PID: %d\n", getpid());
    }
    printf("Hello world!\n");       /* the child and parent will execute every line of code after the fork (each separately)*/

    return 0; 
} 

