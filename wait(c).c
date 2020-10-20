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
    int i, stat; 
    pid_t pid[5]; 
    for (i=0; i<5; i++) 
    { 
        if ((pid[i] = fork()) == 0) 
        { 
            sleep(1); 
            exit(100 + i); 
        } 
    } 

    // Using waitpid() and printing exit status 
    // of children. 
    for (i=0; i<5; i++) 
    { 
        pid_t cpid = waitpid(pid[i], &stat, 0); 
        if (WIFEXITED(stat)) 
            printf("Child %d terminated with status: %d\n", 
                    cpid, WEXITSTATUS(stat)); 
        } 
} 

// Driver code 
int main() 
{ 
    waitexample(); 
    return 0; 
} 