// 3. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include <stdio.h>

int main(){
    int x = 2;
    int y = 3;
    int z = y;
    int k = 1;

    printf("The value is %d", 3*x/y - z+k);
    // 3*x/y - z+k
    // 6/y - z+k
    // 2 - z+k
    // -1 + 1
    // 0
    return 0;
}