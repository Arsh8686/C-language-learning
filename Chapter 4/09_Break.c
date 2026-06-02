#include <stdio.h>

int main(){
    for(int i=0; i<10; ++i){
        if(i==5){
            // break; Exits the loop
            continue; //  skips the particular iteration of the loop. 
        }
        printf("%d\n", i);
    }
    return 0;
}