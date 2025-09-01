#include<stdio.h>
int main(){
 int a;
 int b;
 char ch;
 printf("enter a number:");
 scanf("%d %d",&a,&b);
 switch (ch)
 {
   case '+':
   printf("%d",a+b);
   break;
   case "-":
   printf("%d",a-b);
   break;
   case "*":
   printf("%d",a*b);
   break;
   case "/":
   printf("%d",(float)a/b);
   break;
   else
   printf("");
   break;
   default:
    printf("invalid input");
 }










}
