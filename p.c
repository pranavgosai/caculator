#include<stdio.h>
void addition (int a,int b)
{
    int answer;
    answer=a+b;
    printf("the value of answer is %d ",answer);
}
 void subtraction(int a, int b)
 {
  int answer;
  answer=a-b;
  printf("the value of answer is %d ",answer);

}
void multiplication(int a, int b)
 {
  int answer;
  answer=a*b;
  printf("the value of answer is %d ",answer);

}
void division(int a, int b)
 {
  int answer;
  answer=a/b;
  printf("the value of answer is %d ",answer);

}

void main()
{
    int addition1,addition2;
    printf("Enter value of num1 ");
    scanf("%d",&addition1);
    printf("Enter value of num2 ");
    scanf("%d",&addition2);
    addition(addition1,addition2);

    int subtraction1,subtraction2;
    printf("\nEnter value of num1 ");
    scanf("%d",&subtraction1);
    printf("Enter value of num2 ");
    scanf("%d",&subtraction2);
    subtraction(subtraction1,subtraction2);

     int multiplication1,multiplication2;
    printf("\nEnter value of num1 ");
    scanf("%d",&multiplication1);
    printf("Enter value of num2 ");
    scanf("%d",&multiplication2);
    multiplication(multiplication1,multiplication2);


int division1,division2;
    printf("\nEnter value of num1 ");
    scanf("%d",&division1);
    printf("Enter value of num2 ");
    scanf("%d",&division2);
    division(division1,division2);
}

