#include <stdio.h>
int decreasing (int n){
    if (n==1){ //base case
        return 1;
    }
        
    printf ("%d\n", n);
        
    return decreasing(n-1);
}

int main (){

    int n;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    decreasing(n);

    return 0;

}