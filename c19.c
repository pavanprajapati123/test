// #include<stdio.h>
// int main(){
//    int num=123;
//    int res=0;
//    while (num!=0)
//    {
//     int lastdigi#includet=num%10;
//     res=res*10+lastdigit;
//     num=num/10;
//    }
//    printf("Reverse of the number is: %d",res);
//    return 0;
// }
   
// <stdio.h>
// int main(){
//    int n ,i,j;
//    for( i=0;i<4;i++){
//     for(j=0; j<i+1; j++){
//     printf("*");
//     }
//     printf("\n");

//    }
//    return 0;
// }
#include<stdio.h>
int main(){
   int n ,i,j;
   for( i=0;i<4;i++){ 
    for(j=0; j<i+1; j++){
    printf("*");
    }
    for(int k=1; k>=i;k--){
      for( int p=1;p<i; p++){
         printf(" ");
      }
   }
    printf("*");
    printf("\n");

   }
   return 0;
}