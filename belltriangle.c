#include <stdio.h>
int main (){
    int row=0;
    printf("\nenter number of rows ");
    scanf("%d",&row);
    int col=row;
    int count=3;
    int space=row-1;
    int array_2D[row][col];
    array_2D[0][0]=1;
    array_2D[1][0]=1;
    array_2D[1][1]=2;

    // assining values to 2d array
    for (int i = 2; i < row; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (j==0)
            {
                array_2D[i][j]=array_2D[i-1][count-2];
            }
            else
            {
                array_2D[i][j]=array_2D[i][j-1]+array_2D[i-1][j-1];
            }
            
        }
        count++;
        
    }
    count=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space=space-1;
        for (int j = 0; j <= count; j++)
        {
            printf("%d",array_2D[i][j]);
        }
        count++;
        printf("\n");
        
        
    }
    

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         printf("%d ",array_2D[i][j]);
    //     }
        
    //     printf("\n");
    // }
    
    

    return 0;
}