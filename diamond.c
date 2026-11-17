#include <stdio.h>
int main (){
    int row =0;
    printf("\nenter number of rows");
    scanf("%d",&row);
    int space = row-1;
    int count=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= space; j++)
        {
            printf(" ");
        }
        space=space-1;

        for (int i = 0; i <= count; i++)
        {
            printf("*");
        }
        printf("\n");
        count=count+2;
    }
    count=count-2;
    space=space+1;
    for (int i = 0; i < row-1; i++)
    {
        space=space+1;
        for (int j = 0; j <= space; j++)
        {
            printf(" ");
        }
        
        count=count-2;
        for (int i = 0; i <= count; i++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
    
    return 0;
}