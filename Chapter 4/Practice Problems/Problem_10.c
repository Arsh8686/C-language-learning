// 10. Implement 9 using other types of loops.

#include <stdio.h>

int main(){
    int n, prime = 1, i = 2;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n<=1){
        prime = 0;
    }

    /* for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            prime = 0;
            break;
        }
        
    } */

    /* while(i < n){
        if (n%i == 0)
        {
            prime = 0;
            break;
        }
        ++i;
    } */

    do
    {
        if (i !=n && n%i == 0)
        {
            prime = 0;
            break;
        }
        ++i;
    } while (i<n);
    

    if(prime){
        printf("This number is a prime number");
    }
    else{
        printf("This number is not a prime number");
    }
    
    return 0;
}