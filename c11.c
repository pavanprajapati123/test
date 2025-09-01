#include<stdio.h>
int main(){
int amt,blance=1000,ch;
printf("1. check blance\n 2. deposit\n 3.withdraw\n");
printf("enter your choice:");
scanf("%d",&ch);
switch (ch){
  case 1:
    printf("\nenter atm to withdraw");
    break;
  case 2:
    printf("\nenter amt to deposit:");
    break;
  case 3:
    printf("\nenter the blance",& blance);
    break;
  default:
    printf("\nenter invalid choice");
    break;
      } 
}
