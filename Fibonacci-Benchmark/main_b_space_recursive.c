#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int xyz = 10000;
    printf("Ctrl+C to stop");
    printf("Parameter: %d\n",xyz);
    while (1){
        fibRec(xyz);
    }
    return 0;
}