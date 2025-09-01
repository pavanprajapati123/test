#include<stdio.h>
int main(){
int choice;
float num1, num2, result;
printf("enter a number: ");
scanf("%f", &num1);
printf("enter another number: ");
scanf("%f", &num2);
printf("choose an operation: 1. add 2. subtract 3. multiply 4. divide\n");
scanf("%d", &choice);
switch(choice){
    case 1: result = num1 + num2; break;
    case 2: result = num1 - num2; break;
    case 3: result = num1 * num2; break;
    case 4: result = num1 / num2; break;
    default: printf("Invalid choice\n"); return 1;
}
printf("Result: %f\n", result);
    return 0;
}