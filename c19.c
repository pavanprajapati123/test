#include<stdio.h>
int man(){
   int num=123;
   int res=0;
   while (num!=0)
   {
    int lastdigit=num%10;
    res=res*10+lastdigit;
    num=num/10;
   }
   printf("Reverse of the number is: %d",res);
   return 0;
}
   
