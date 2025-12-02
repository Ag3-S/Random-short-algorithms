#include <stdio.h>
// Factorial of a number 
//After a lot of debugging and iterations this is the final logic using only sbn! goto PS;
//PS : goto statements are surely confusing. 

void sbn( int* a, int* b);
    

int main(){
    int number, factorial = 0, current = 1, temp = 0, sLtemp = 0, current_temp = 0, current_copy = 0, minusone = -1, sum=0;
    printf("Enter the number :");
    scanf("%d", &number);

    _0 : sbn(&number, &minusone);
    if (number<0 )
        goto _1;
    
    _1 : sbn(&temp, &current);
    if (temp<0 )
        goto _2;
        
    _2 : sbn(&sLtemp, &current);
    if (sLtemp<0 )
        goto _8;

    _3 : sbn(&sLtemp, &sLtemp);
    if (sLtemp<0)
        goto _4;

    _4 : sbn(&sLtemp, &minusone);
    if (current < 0)
        goto _5;

    _5 : sbn(&sLtemp, &current);
    if (sLtemp < 0)
        goto _6;

    _6 : sbn(&temp, &temp);
    if (temp < 0)
        goto _7;

    _7 : sbn(&temp, &factorial);
    if (temp<0)
        goto _8;

    _8 : sbn(&factorial, &temp);
    if (factorial < 0)
        goto _9;

    _9 : sbn(&sLtemp, &minusone);
    if (sLtemp < 0)
        goto _8;

    _10 : sbn(&current, &minusone);
    if (current < 0)
        goto _11;

    _11 : sbn(&current_copy, &current_copy);
    if (current_copy < 0)
        goto _12;

    _12 : sbn(&current_copy, &current);
    if (current_copy < 0)
        goto _13;

    _13 : sbn(&current_temp, &current_temp);
    if (current_temp < 0)
        goto _14;

    _14 : sbn(&current_temp, &current_copy);
    if (current_temp < 0)
        goto _15;

        
    _15 : sbn(&current_temp, &number);
    if (current_temp < 0)
        goto _3;

    _exit : printf("\nFactorial is %d", factorial);


    return 0;
}

void sbn( int* a, int* b){
    *a = *a - *b;
    return;
}
