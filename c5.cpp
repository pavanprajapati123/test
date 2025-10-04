#include<stdio.h>
int main(){
 int i,j,n;
 n=5;
 for(i=0; i<n;i++){
    for(j=0;j<i;j++){
        printf(" ");
    for(j=1;j<n;j++){
    printf("*");
    }
    printf("*");
    printf("\n");
 }
 
}

return 0;
}
////
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int *p=arr;
for(int i=0;i<5;i++){
    printf("%d ",*(p+i));
}
}
#include<stdio.h>
int main(){
    int a=5;
    int b=10;
    int *p1=&a;
    int *p2=&b;
    int temp=*p1;
    printf("before swap a=%d b=%d\n",a,b);
    *p1=*p2;
    *p2=temp;
    printf("after swap a=%d b=%d\n",a,b);
    return 0;
}
#include<stdio.h>
int swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}
int main(){
    int a=5;
    int b=10;
    swap(&a,&b);
  printf("a=%d b=%d",a,b);
  return 0;


}
#include<stdio.h>
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int *p1=arr1;
    int *p2=arr2;
    for(int i=0;i<5;i++){
        printf("%d ",*(p1+i));
    }
    for(int i=0;i<5;i++){
        printf("%d ",*(p2+i));
    }
    return 0;
}