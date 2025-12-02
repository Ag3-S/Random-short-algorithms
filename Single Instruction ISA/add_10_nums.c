#include <stdio.h>
// The main aim of this program isn't to add the numbers (as it might seem at first) but to implement the addition using only the single instruction, that is sbn

// Trying addition for first 10 numbers using sbn
void sbn( int* a, int* b);
    

int main(){
    int temp;
    int one =1, index=10, sum=0;
    _1 : sbn(&temp, &temp);
    if (temp<0 )
        goto _2;
    _2 : sbn(&temp, &index);
    if (temp<0 )
        goto _3;

    _3 : sbn(&sum, &temp);
    if (sum<0)
        goto _4;

    _4 : sbn(&index, &one);
    if (index < 0)
        goto _exit;

    _5 : sbn(&temp, &temp);
    if (temp < 0)
        goto _6;

    _6 : sbn(&temp, &one);
    if (temp < 0)
        goto _1;

    _exit : printf("Sum is %d", sum);


    return 0;
}

void sbn( int* a, int* b){
    *a = *a - *b;
    return;
}
