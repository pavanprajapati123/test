#include<stdio.h>
int sum(int *x,int*y){
    *x=10;
    *y=10;
    int c=*x+*y;
    return c;
}
int main(){
    int x=5;
    int y=5;
    int data= sum(&x,&y);
    printf("%d",data);
    printf("%d",x+y);
    return 0;
    
}
//////
#include<stdio.h>

