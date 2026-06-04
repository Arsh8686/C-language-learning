#include <stdio.h>

int main(){
    int choice;
    int factorial=1, n, prime=1;
    int first = 0, second = 1, next;
    int reverse = 0, remainder;
    int original;
    int temp, power, digit,digits = 0, sumation = 0;
    int a, b, c, d, gcd, lcm;
    float num1, num2, sum, subtraction, multiplication, division;
    do
    {
           printf("===== MINI CALCULATOR PRO =====\n"
            "\t1. Addition\n"
            "\t2. Subtraction\n"
            "\t3. Multiplication\n"
            "\t4. Division\n"
            "\t5. Factorial\n"
            "\t6. Check prime number\n"
            "\t7. Fibonacci series\n"
            "\t8. Reverse number\n"
            "\t9. Check Palindrome Number\n"
            "\t10. Check Armstrong Number\n"
            "\t11. Greatest Common Divisor\n"
            "\t12. Least Common Multiple\n"
            "\t13. Exit\n");
        printf("Enter the choice(1,2,3,4,5,6,7,8,9,10,11,12,13): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter num1: ");
            scanf("%f", &num1);
            printf("Enter num2: ");
            scanf("%f", &num2);
            sum = num1+num2;
            printf("\nThe sum of num1 = %.2f & num2 = %.2f is = %.2f\n", num1, num2, sum);
            break;
        case 2:
            printf("Enter num1: ");
            scanf("%f", &num1);
            printf("Enter num2: ");
            scanf("%f", &num2);
            subtraction = num1-num2;
            printf("\nThe subtraction of num1 = %.2f & num2 = %.2f is = %.2f\n", num1, num2, subtraction);
            break;
        case 3:
            printf("Enter num1: ");
            scanf("%f", &num1);
            printf("Enter num2: ");
            scanf("%f", &num2);
            multiplication = num1*num2;
            printf("\nThe multiplication of num1 = %.2f & num2 = %.2f is = %.2f\n", num1, num2, multiplication);
            break;
        case 4:
            printf("Enter num1: ");
            scanf("%f", &num1);
            printf("Enter num2: ");
            scanf("%f", &num2);
            if(num2 != 0){
                division = num1/num2;
                printf("The division of num1 = %.2f & num2 = %.2f is = %.2f\n", num1, num2, division);
            }
            else{
                printf("Invalid input\n");
            }
            break;
        case 5:
            printf("Enter n: ");
            scanf("%d", &n);
            if(n > 12)
                {
                    printf("Number too large for int factorial\n");
                    break;
                }
            if(n>=0 && n<=12){
                factorial =1;
                for(int i = 1; i<=n; ++i){
                    factorial *= i;
                }
                printf("The Factorial of n is = %d\n", factorial);
            }
            else{
                printf("Invalid Input\n");
            }
            break;
        case 6:
            printf("Enter number: ");
            scanf("%d", &n);

            prime = 1;

            if(n<=1){
                prime = 0;
            }
            for(int i = 2; i < n; i++){
                if(n%i == 0){
                    prime = 0;
                    break;
                }
            }
            
            if(prime){
                printf("%d is a prime number\n", n);
            }
            else{
                printf("%d is not a prime number\n", n);
            }
            break;
        case 7:
            first = 0;
            second = 1;
            
            do{
                printf("Enter the number of terms: ");
                scanf("%d", &n);
                if(n<=0){
                    printf("Please enter a positive number greater than 0");
                }
            } while(n<=0);

            printf("Fibonacci series: ");
            
            int i = 1;
            
            while (i<=n)
            {
                if(i == 1){
                    printf("%d ", first);
                }
                else if(i == 2){
                    printf("%d ", second);
                }
                else{
                    next = first+second;
                    printf("%d ", next);
                    first = second;
                    second = next;
                }
                ++i;
            }
            printf("\n");
            break;
        case 8:
            printf("Enter number: ");
            scanf("%d", &n);
            if(n < 0)
                {
                    printf("Invalid Input\n");
                    break;
                }
            if(n == 0)
                {
                    printf("Reversed number is: 0\n");
                    break;
                }
            reverse = 0;
            if(n>0){

                while(n!=0){
                    remainder = n%10;
                    reverse = reverse * 10 + remainder;
                    n /= 10;
                }
            }

            printf("Reversed number is: %d\n", reverse);
            break;
        case 9:
            printf("Enter number: ");
            scanf("%d", &n);

            if(n < 0)
            {
                printf("Invalid Input\n");
                break;
            }
            original = n;
            reverse = 0;
            
            while(n!=0){
                remainder = n%10;
                reverse = reverse * 10 + remainder;
                n /= 10;
            }

            if(original == reverse){
                printf("%d is a Palindrome Number\n", original);
            }
            else{
                printf("%d is not a Palindrome Number\n", original);
            }
            break;
        case 10:
            printf("Enter number: ");
            scanf("%d", &n);

            if(n == 0)
                {
                    printf("0 is an Armstrong number\n");
                    break;
                }
            if(n < 0)
                {
                    printf("Invalid Input\n");
                    break;
                }
            original = n;
            temp = n;
            digits = 0;
            sumation = 0;
            if(n>0){

                while (temp != 0)
                {
                    digits++;
                    temp /= 10;
                }
    
                temp = n;
    
                while(temp != 0){
                    digit = temp%10;
    
                    power = 1;
                    for(int i = 0;i < digits;++i){
                        power *= digit;
                    }
    
                    sumation += power;
                    temp /=10;
                }
    
                if(sumation == original){
                    printf("%d is an Armstrong number\n", original);
                }
                else{
                    printf("%d is not an Armstrong number\n", original);
                }
            }
            break;
        case 11:
            printf("Enter 4 Numbers: ");
            scanf("%d %d %d %d", &a, &b, &c, &d);
            gcd = 1;

            if(a == 0 || b == 0 || c == 0 || d == 0)
                {
                    printf("Numbers cannot be zero\n");
                    break;
                }

            for(int i = 1; i<=a && i<=b && i<=c && i<=d;i++){
                if(a%i == 0 && b%i == 0 && c%i == 0 && d%i == 0){
                    gcd = i;
                }
            }
            printf("GCD of %d, %d, %d, %d, is = %d\n", a, b, c, d, gcd);
            break;
        case 12:
            printf("Enter 4 Numbers: ");
            scanf("%d %d %d %d", &a, &b, &c, &d);

            if(a == 0 || b == 0 || c == 0 || d == 0)
                {
                    printf("Numbers cannot be zero\n");
                    break;
                }

            for(int i = 1; ; i++){
                if(i%a == 0 && i%b == 0 && i%c == 0 && i%d == 0){
                    lcm = i;
                    break;
                }    
            }
            printf("LCM of %d, %d, %d, %d, is = %d\n", a, b, c, d, lcm);
            break;
        case 13:
            printf("You have successfully exit");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 13);
    
    return 0;

}