#include <stdio.h>
int main (){
    int row =0;
    printf("\nenter number of rows");
    scanf("%d",&row);
    char array[row][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            array[i][j]='*';
            
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" %c",array[i][j]);
            
        }
        printf("\n");
    }
    // 
    printf("\n");
    for (int i = 1; i < row-1; i++)
    {
        for (int j = 1; j < row-1; j++)
        {
            if (i==j)
            {
                ;
            }
            else
            {
                array[i][j]=' ';
            }
            
            
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" %c",array[i][j]);
            
        }
        printf("\n");
    }
    




    return 0;
}