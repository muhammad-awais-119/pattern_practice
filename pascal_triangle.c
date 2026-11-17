#include <stdio.h>
int main (){
   int row =0;
    printf("\nenter number of rows");
    scanf("%d",&row);
    int array_2D[row][row+1];
    array_2D[0][0]=1;
    array_2D[1][0]=1;
    array_2D[1][1]=1;
    int count=3,space=row-1;
    for (int i = 2; i < row; i++)
    {
        for (int j = 0; j < count ; j++)
        {
            if (j==0)
            {
                array_2D[i][j]=1;
            }
            else if (j==count-1)
            {
                array_2D[i][j]=1;
            }
            else
            {
                array_2D[i][j]=array_2D[i-1][j]+array_2D[i-1][j-1];
            }
        }
        count=count+1;
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
            printf("%3d ",array_2D[i][j]);
        }
        printf("\n");
        count++;
        
        
    }
    
    


}