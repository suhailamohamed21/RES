#include <stdio.h>

int main()
{
    int row, col;
    int arr[10][10], sum = 0;
    printf("Enter Number of rows and columns :\n ");
    scanf("%d %d", &row,&col);

    printf("\n Enter the Matrix Elements \n");
    for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d", &arr[i][j]);
            if (i == j)
             sum += arr[i][j];
	    }
    }
    printf("the matrix is:\n");
    for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		    printf("%d ", arr[i][j]); 
	    }
        printf("\n");
    }
    printf("sum = %d", sum);
    return 0;
}