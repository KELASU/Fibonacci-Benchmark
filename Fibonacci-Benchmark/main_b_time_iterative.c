#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"
double Duration (long int fib(int),int xyz){
    int beg = clock();
    for(int i =0; i<xyz; i++){
        fib(xyz);
    }
    int fin = clock();
    return(double)(fin-beg)/CLOCKS_PER_SEC;
}
int main(void){
    int xyz = 50;
    printf("Parameter: %d\n",xyz);
    printf("time:%fs\n",Duration(fibIte,xyz));
    return 0;
}