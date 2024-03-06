#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int pid=fork();
    
    //create a child process
    if(pid==0){
        
        printf("Inside child process %d\n", getpid());
        //terminate child process
        exit(0);
    }else if(pid>0){
        //parent process
        printf("Inside parent process %d\n",getpid
        ());
        
        //waiting for its children to get executed
        int result=wait(NULL);
        printf("Child process %d terminated successfully!\n", result);
        
    }else{
        printf("fork failed!");
        
    }
    return 0;
}