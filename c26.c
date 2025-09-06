
//// new code prints days
#include<stdio.h>
int main(){
  int day;
  printf("enter a dayes");
  scanf("%d",&day);
  switch (day)
  {
  case 1:
  printf("monday");
  break;
  case 2:
  printf("sunday");
  break;
  case 3:
  printf("tuesday");
  break;
  case 4:
  printf("wednesday");
  break;
  case 5:
  printf("thursday");
  break;
  case 6:
  printf("friday");
  break;
  case 7:
  printf("saturday");
  break;
  default:
  printf("no day");
    break;
  }

 return 0;



}