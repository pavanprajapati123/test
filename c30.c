
// #include<stdio.h>
// int main() {
//     for(int i=0; i<4; i++){

//        for(int j=0; j<=i; j++){
//            printf("*");
//        }for(int k=3; k>i; k--)
//        {
//            printf(" ");
//        } for(int p=3; p>i; p--)
//        {
//            printf(" ");
//        } for(int z=0; z<=i; z++)
//        {
//            printf("*");
//        } for(int l=3; l>i; l--){
//               printf(" ");
//          } 
//               printf("*");
//        }
//          printf("\n");

//     }
  

        
    
// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==1 || i==n || j==1|| j==n){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int n;
    printf(" prime number from 0 to 100:\n");
    for(n=0; n<=100;n++){
        int is_prime = 1;
        for(int i=2; i<n; i++){
            if(n%i==0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime && n>1){
            printf("%d\n", n);
        }
    }
    return 0;
}
