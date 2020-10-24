#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

int main() {
    float distance,result;
    printf("howmany miles?\n");
    scanf("%f",&distance);

    result=distance*MIL;

    printf("%f miles is %f kilometers",distance,result);

    return 0;
}
