/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 

    //make two process which run same 
    //program after this instruction 
    fork(); 

    printf("Hello world!\n"); 
    return 0; 
}


