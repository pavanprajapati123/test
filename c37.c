#include<stdio.h>
int main(){
    // int arr[5]={1,-2,3,-4,6};
    // int i,max=arr[0];
    // for(i=0; i<5; i++){
    //     if(arr[i]>max){
    //         max =arr[i];
    //     }
    // }
    // printf("%d",max);
    // return 0;
    // int arr[5]={-8,2,-3,4,9};
    // int maxsum=0;
    // for(int i=0; i<5;i++){
    //     int cursum=0;
    //     for(int j=1;j<5;j++){
    //         cursum=cursum+arr[j];
    //         if(cursum>maxsum){

    //         }
    //     }
    // }
    // printf("%d",maxsum);
    // return 0;
    
    
//     return 0;
// }
int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[6];
    for(int i=0;i<3;i++){
        c[i]=a[i]+b[i];
    }
    for(int i=0;i<6;i++){
        printf("%d ",c[i]);
        
    }
    return 0;
}

