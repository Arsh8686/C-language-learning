#include <stdio.h> // this project is made after chapter 4. 

int main(){
    int choice, pin, attempts = 0, depositcount = 0, withdrawcount = 0;
    float balance = 100000, amount, totaldeposit = 0, totalwithdrawn = 0;
    
    while (attempts<3) // 3 attempt pin, card will be block after 3 unsuccessful attempts.
    {
        printf("Enter pin: ");
        scanf("%d", &pin);

        if(pin == 3645){
            do
            {
                printf("===== ATM =====\n");
                printf("1. Check Balance\n");
                printf("2. Deposit Money\n");
                printf("3. Withdraw Money\n");
                printf("4. Exit\n");
                printf("Enter the Choice 1, 2, 3, 4: ");
                scanf("%d", &choice);
    
                switch (choice)
                {
                case 1:
                    printf("Your current Balance is %.2f\n", balance);
                    break;
                case 2:
                    printf("Enter Deposit Money: "); // deposit money
                    scanf("%f", &amount);
                    if(amount>0){
                        balance += amount;
                        printf("Your current Balance is %.2f\n", balance);
                        ++depositcount; // count how many time money is deposited.
                        totaldeposit += amount; // calculate total money deposited.
                    }
                    else{
                        printf("Invalid Input\n");
                    }
                    break;
                case 3:
                    printf("Enter Withrawal Money: ");
                    scanf("%f", &amount);
                    if(amount<=balance && amount>0){
                        balance -= amount;
                        printf("Your current Balance is %.2f\n", balance);
                        ++withdrawcount; // count how many time money is withdrawn.
                        totalwithdrawn += amount; // calculate total money withdrawn.
                    }
                    else if(amount<=0){
                        printf("Invalid Input\n");
                    }
                    else{
                        printf("Insufficient Amount\n");
                    }
                    break;
                case 4:
                    printf("Total Deposited Money =  %.2f\n", totaldeposit);
                    printf("Total Withdrawn Money =  %.2f\n", totalwithdrawn);
                    printf("Total Deposit Count =  %d\n", depositcount);
                    printf("Total Withdraw Count =  %d\n", withdrawcount);
                    printf("Your Current Balance =  is %.2f\n", balance);
                    printf("You have successfully exit\n");
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
                }
    
            } while (choice != 4);
        }
        else{
            printf("You have entered wrong pin\n");
        }
        ++attempts;
        break;
        
    }

    printf("Your card is blocked try after few minutes\n");
    

    return 0;
}