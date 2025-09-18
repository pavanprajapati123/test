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
    int arr[5]={-8,2,-3,4,9};
    int maxsum=0;
    for(int i=0; i<5;i++){
        int cursum=0;
        for(int j=1;j<5;j++){
            cursum=cursum+arr[j];
            if(cursum>maxsum){

            }
        }
    }
    printf("%d",maxsum);
    return 0;
}
