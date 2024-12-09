/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Hello World ";
    char str2[] =  " World";
    
    char *result = strstr(str1,str2);
    
    if(result)
    {
        printf("Strings are found: %s",result);
    }
    else{
        printf("Strings are not found:");
        
    }
    
    
    return 0;
}