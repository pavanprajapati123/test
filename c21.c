// #include<stdio.h>
// int main(){ 
// int n;
//     printf("enter number");
//     scanf("%d",&n);
//     for(int i=1; i<=10; i++){
//         printf("%d\n",n*i);

//     }

// }
// prime or not prime number  
#include<stdio.h>
int main(){
    int n=6;
    int i;
    printf("enter number");
    scanf("%d",&n);
    if(n<=1){
    printf(" prime\n");
    }
    for(i=2; i<n; i++){
        if(n% i==0){
            printf("prime nahi hai\n");
            break;
        }
     } 
    if(i==0){
        printf("%d is prime",n);
    }


     
     

    
    
}
    