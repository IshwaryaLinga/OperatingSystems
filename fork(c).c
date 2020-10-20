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
    int x = 1; 

    if (fork() == 0) 
        printf("Child has x = %d\n", ++x); 
    else
        printf("Parent has x = %d\n", --x); 
} 
int main() 
{ 
    forkexample(); 
    return 0; 
} 