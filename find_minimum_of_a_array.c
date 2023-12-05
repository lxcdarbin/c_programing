#include<stdio.h>
int find_min(int num[], int n);
int main (){
  int number, arr[100];
  printf("Enter here how many number you wand to enter here: ");
  scanf("%d", &number);
  printf("Enter your number here: ");
  for (int i = 0; i < number; i++)
  {
    scanf("%d", &arr[i]);
  }
  int result= find_min(arr,number);
  printf("The minimum result is: %d", result);
  
  return 0;
}
int find_min(int num[], int n){
  int min=num[0];
  for (int i = 1; i < n; i++)
  {
    if (num[i]<min)
    {
      min=num[i];
    }
    
  }
  return min;
}