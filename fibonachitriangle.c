#include <stdio.h>
int main(){
    int row=0;
    printf("\nenter number of rows ");
    scanf("%d",&row);
    int count=1;
    int num1=0,num2=1;
    int buffer=0;
    //printf("1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < count; j++)
        {
           printf("%d ",num2);
           buffer=num1+num2;
           num1=num2;
           num2=buffer;
        }
        printf("\n");
        count++;
        
    }
    


    return 0;
}