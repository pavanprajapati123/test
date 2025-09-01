#include <stdio.h>
int main(){
    int choice;
    float a,b,result;
    printf ("1.add\n 2.subtract\n 3.multiply\n 4.division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter the two number:");
    scanf("%f %f",&a,&b);
    switch (choice){

    case 1:
        result=a+b;
         printf("\nadd=%.2f",result);
        break;
        
    case 2:
        result=a-b;
         printf("\nsubtract=%.2f",result);
        break;
       
    case 3:
        result=a*b;
         printf("\nmultiply=%.2f",result);
        break;
    case 4:
        if(b !=0){
        result=a/b;
        printf("\ndivision=%.2f",result);
        }else{
            printf("\ndivision is not allowed(divide by zero).");
        }
        break;
    default:
        printf ("\n invalid choice!");
        break;
    }
    return 0;
}