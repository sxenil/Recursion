#include <stdio.h>
void sum (int n, int s){
    if (n==0){
        printf ("Sum= %d", s);
        return;
    }

    sum(n-1,s+n);

}

int main (){
    
    int n;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    sum (5,0);
    return 0;

}