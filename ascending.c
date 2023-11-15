#include <stdio.h>
void ascending (int x, int n){
    if (x>n){ //base case
        return;
    }
        
    printf ("%d\n", x);
    ascending(x+1,n);
    return;
}

int main (){

    int n;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    ascending(1,n);

    return 0;

}