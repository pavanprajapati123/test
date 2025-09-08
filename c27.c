#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
  while(n%2==0){
    printf("num is even");
    break;
  } 
  while (n%2!=0)
  {  printf("number is odd");
    break;
  }
/// second condition
  if(n%2==0){
    printf("even number");
  }else{
    printf("odd number");
  }
 return 0;
  }
}
 


