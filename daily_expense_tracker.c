
#include <stdio.h>

int main()
{
    int choice, i = 0, j;
    float amount, expenses[100], total = 0;
    
    do
    {
        printf("\n===== DAILY EXPENSE TRACKER =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Total Expense\n");
        printf("4. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                if(i < 100)
                {
                    printf("Enter expense amount: ");
                    scanf("%f", &amount);
                    expenses[i] = amount;
                    i++;
                    printf("Expense added successfully!\n");
                }
                else
                {
                    printf("Expense limit reached!\n");
                }
                break;
                
            case 2:
                printf("\nYour Expenses:\n");
                for(j = 0; j < i; j++)
                {
                    printf("Expense %d: Rs. %.2f\n", j + 1, expenses[j]);
                }
                break;
                
            case 3:
                total = 0;
                for(j = 0; j < i; j++)
                {
                    total += expenses[j];
                }
                printf("Total Daily Expense: Rs. %.2f\n", total);
                break;
                
            case 4:
                printf("Thank you for using Expense Tracker!\n");
                break;
                
            default:
                printf("Invalid choice!\n");
        }
        
    } while(choice != 4);
    
    return 0;
}
