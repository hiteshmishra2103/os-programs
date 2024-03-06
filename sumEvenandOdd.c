#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int sumEven(int st,int end){
int sum=0;
for(int i=st;i<=end;i++){
if(i%2==0){

sum+=i;
}
}
return sum;
}

int sumOdd(int st, int end){
int sum=0;
for(int i=st;i<=end;i++){
if(i%2!=0){
    sum+=i;
}
}

return sum;
}



int main(){
int st=1;
int end=100;

int pid=fork();

if(pid<0){
    printf("Fork failed\n");
    return 1;
}
else if(pid==0){
    //child process
    int sum=sumOdd(st, end);
    printf("sum of odd number from %d to %d by child process: %d\n", st, end, sum);
}else{
    //parent process
    int sum=sumEven(st,end);
    printf("sum of odd number from %d to %d by child process: %d\n", st, end, sum);
}
return 0;
}