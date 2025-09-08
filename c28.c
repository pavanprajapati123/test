#include<stdio.h>
int main(){
    int n;
    int i;
      printf("enter a prime number:");
        scanf("%d",&n); 
       for(int i=2; i<n;i++){
        if(n%i==0){
            printf("prime number  nahi hai");
        } else{
            printf("prime number  hai");
        }
      return 0;

    }

}