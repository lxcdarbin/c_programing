#include<stdio.h>

int main() {
    int numa,numb,gcd;

    printf("Enter your first number here: ");
    scanf("%d",&numa);
    printf("Enter your secound number here: ");
    scanf("%d", &numb);

  for (int i = 1; i < numa*numb; i++)
  {
    if (numa%i==0 && numb%i==0)
    {
         gcd=i;
    }
    
  }
  
printf("the gcs is  %d", gcd);
   
        
    
    return 0;
}