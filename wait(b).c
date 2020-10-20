/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 

void waitexample() 
{ 
    int stat; 

    // This status 1 is reported by WEXITSTATUS 
    if (fork() == 0) 
        exit(1); 
    else
        wait(&stat); 
    if (WIFEXITED(stat)) 
        printf("Exit status: %d\n", WEXITSTATUS(stat)); 
    else if (WIFSIGNALED(stat)) 
        psignal(WTERMSIG(stat), "Exit signal"); 
} 

// Driver code 
int main() 
{ 
    waitexample(); 
    return 0; 
} 