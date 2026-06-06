#include <stdio.h>

int change(int a) { 
a = 43;  // Misnomer 
return 0; 
}

int main(){
    int b=34; 
    change(b); // The value of b remains 34
    printf("%d\n", b);
    return 0;
}