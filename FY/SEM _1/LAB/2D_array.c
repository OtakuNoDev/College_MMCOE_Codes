#include<stdio.h>
int main()
{
    int i,j;
    int arr[4][3] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};
    // int arr[4][3] = { {0, 1, 2} , {3, 4, 5} , {6, 7, 8} , {9, 10, 11} };

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr[%d][%d] = %d \n",i,j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//Araara