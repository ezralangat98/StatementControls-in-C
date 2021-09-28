#include<stdio.h> 

int main()
{
  //Declaring variable  
  int grade;
  
  printf("Enter your Grade: ");
  scanf("%d",&grade);

  switch(grade<101)
  {
    case 1:
      if (grade>=95)
        printf("A+");
      else
        printf("Fail");
    break;
    case 2:
      if (grade>=85)
        printf("A");
      else
        printf("Fail");
      break;
    case 3:
      if (grade>=75)
        printf("B");
      else
        printf("Fail");
      break;
    case 4:
      if (grade>=65)
        printf("C");
      else
        printf("Fail");
      break;
     case 5:
      if (grade>=64 && grade >=0)
        printf("Fail");
      else
        printf("Invalid");
      break;
    default:
      printf("Invalid");
  }
}