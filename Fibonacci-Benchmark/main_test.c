#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    
    int xyz = 10000;
    for (unsigned int i = 0; i<xyz;i++){
        long int Recursive = fibRec(i);
        long int Iterative = fibIte(i);

        printf("Fibonacci_Recursive(%d):%ld,Fibonacci_Iterative(%d):%ld %s\n",i,Recursive,i,Iterative,Recursive == Iterative ? "True": "False");

    }
    return 0;
}