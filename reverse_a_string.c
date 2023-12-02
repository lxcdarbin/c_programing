#include<stdio.h>
#include<string.h>
int main() {
    char name[20];
    printf("Enter your name here:");
    scanf("%s", &name);
    int len=0;
    while (name[len] != '\0')
    {
       len++;
    }
    printf("The length of the string is :  %d\n",len);
    for (int i = 0; i < len/2; i++)
    {
        int tempt = name[i];
        name[i] = name[len-1-i];
        name[len-1-i]  = tempt;
        }
        printf("After the reverse of a string : %s", name );
    
    

return 0;
}
