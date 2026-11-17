#include <stdio.h>
int main (){
    int row =0;
    printf("\nenter number of rows");
    scanf("%d",&row);
    int count=0;
    int num=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= count; j++)
        {
            printf("%5d",num);
            num =num+1; 
        }
        printf("\n");
        count++;
        
    }
    


    return 0;
}