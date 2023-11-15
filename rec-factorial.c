#include <stdio.h>
int factorial(int n){
    
    if (n==1){ //base case
        return 1;
    }
        
    return n*factorial(n-1);
        
}

int main (){

    int n;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    int a= factorial(n);

    printf ("The factorial is: %d", a);

    return 0;

}