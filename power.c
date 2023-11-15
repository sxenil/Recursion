#include <stdio.h>
void power (int a, int b){
    if (b==0){
        printf ("Result: %d", power);
        return;
    }
    power(a,b)=a*power(a,b-1);
}

int main (){

    int a, b;

    printf ("Enter a number: ");
    scanf ("%d", &a);

    printf ("Enter a number: ");
    scanf ("%d", &b);

    power(a,b);
    return 0;
}