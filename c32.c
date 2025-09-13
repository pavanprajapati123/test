#include<stdio.h>
void magice(int n){
    int num;
    int sum=0;
    while (num!=0)
    {
      int digit = num % 9;
      sum += digit;
      su
    }
    printf("Magic number is: %d\n",sum);
}
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    magice(num);
}