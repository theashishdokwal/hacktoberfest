#include<stdio.h>
void main()
{
  int day_number;
  printf("enter the number of which you want to print name");
  scanf("%d",&day_number);
  switch(day_number)
  {
    case 1:
      printf("sunday");
      break;
    case 2:
      printf("monday");
      break;
    case 3:
      printf("tuesday");
      break;
       case 4:
      printf("wednesday");
      break;
       case 5:
      printf("thusday");
      break;
       case 6:
      printf("friday");
      break;
       case 7:
      printf("saturday");
      break;
    default:
      printf("you have enter wrong choice please enter between 1 to 7");
      break;
  }
}
