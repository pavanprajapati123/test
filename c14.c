#include<stdio.h>
int main(){
    int day;
    int choice;
    printf("enter the days:");
    scanf("%d",&day);
    switch(day){
        case 1: printf("\nenter the monday");
        break;
        case 2: printf("\nenter the tuesday");
        break;
        case 3:  printf("\nenter the wednesday");
        break;
        case 4: printf("\nenter the thursday");
        break;
        case 5: printf("\nenter the friday");
        break;
        case 6: printf ("\nenter the saturday");
        break;
        case 7:printf("\nenter the sunday");
        break;
        default: printf("invalid day");
        break;


    }  
    return 0;

}