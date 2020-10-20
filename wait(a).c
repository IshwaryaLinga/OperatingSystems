/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 

int main() 
{ 
    if (fork()== 0) 
        printf("HC: hello from child\n"); 
    else
    { 
        printf("HP: hello from parent\n"); 
        wait(NULL); 
        printf("CT: child has terminated\n"); 
    } 

    printf("Bye\n"); 
    return 0; 
} 