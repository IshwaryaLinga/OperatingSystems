/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
void forkexample() 
{ 
    // child process because return value zero 
    if (fork() == 0) 
        printf("Hello from Child!\n"); 

    // parent process because return value non-zero. 
    else
        printf("Hello from Parent!\n"); 
} 
int main() 
{ 
    forkexample(); 
    return 0; 
} 