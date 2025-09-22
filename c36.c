// #include<stdio.h>
// int main (){
//     int i, j, temp;
//     int arr[5]={5,4,3,2,1};
//     for(i=0;i<5; i++){
//         for(int j=i+1;j<5; j++){
//           if (arr[i]>arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//           }  
//         }
//     }
//     for(i=0;i<5; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }
/////
#include<stdio.h>
#include<limits.h>

 int Bsearch(){
    int arr[6]={1,2,3,4,5,6,};
    int s=0;
    int target=5;
    int end=6;
    while (s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}
int main(){
    int result=Bsearch();
    printf("%d",result);
    return 0;
}
////
#include<stdio.h>
