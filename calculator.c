#include<stdio.h>

//Fuctions declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int main()
{
    int choice;
    float num1, num2, result;
    
    do
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1.Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: "); 
        scanf("%d", &choice);
        if(choice>=1 && choice<=4)
        {
            printf("Enter first number:");
            scanf("%f", &num1);
            printf("Enter second number:");
            scanf("%f", &num2);
        }
        switch(choice)
        {
            case 1:
            result = add(num1, num2);
            printf("Result=%.2f\n", result);
            break;

            case 2:
            result = subtract(num1, num2);
            printf("Result=%.2f\n", result);
            break;
            
            case 3:
            result = multiply(num1, num2);
            printf("Result=%.2f\n", result);
            break;

            case 4:
            if(num2==0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = divide(num1, num2);
                printf("Result=%.2f\n", result);
            }
            break;

            case 5:
            printf("Thank you for using the calculator!\n");
            break;

            default:
            printf("Invalid choice! Please select 1 to 5.\n");
        }

    }
    while(choice!= 5);
    return 0;
}

// Functions definitions:
float add(float a, float b)
{
    return a+b;
}
float subtract(float a, float b)
{
    return a-b;
}
float multiply(float a, float b)
{
    return a*b;
}
float divide(float a, float b)
{
    return a/b;
}