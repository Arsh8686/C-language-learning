#include <stdio.h>

int main(){
    int choice;

    printf("1. Chocolate\n");
    printf("2. ButterScotch\n");
    printf("3. Vanilla\n");
    printf("Enter your choice(1,2,3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You choose Chocolate");
        break;
    case 2:
        printf("You choose ButterScotch");
        break;
    case 3:
        printf("You choose Vanilla");
        break;
    
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}