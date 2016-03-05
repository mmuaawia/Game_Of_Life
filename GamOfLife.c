#include <stdio.h>
#include <stdlib.h>
int max ( int a, int b )
    { return (a >= b ? a : b);}

int min ( int a, int b )
    { return (a <= b ? a : b);}


void display(int numRows, int numCols, int p[][30] )
{
    int i,j;
    for (i = 0; i< numRows;i++)
    {
        for ( j = 0;j< numCols;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}

void neighbour(int numRows,int numCols,int p[][30] )
{
    int latest[30][30];
    int i,j;
    for (i = 0; i< numRows;i++)
    {
        for ( j = 0;j< numCols;j++)
        {
            int alive = 0 ;
            int kk, gg;
            for(kk = max(0, i-1) ; kk <= min(numRows-1 , i+1); kk++)
            {
                for(gg = max(0, j-1) ; gg <= min(numCols-1 , j+1); gg++)
                {
                  if (p[kk][gg] == 1)
                  {
                      alive++;
                  }
                }
            }
        if ((p[i][j] == 0 && alive == 3))
        {
            latest[i][j] = 1;
        }
        else if ((p[i][j] == 1 && alive < 3))
        {
            latest[i][j] = 0;
        }
        else if ((p[i][j] == 1 && alive > 4))
        {
            latest[i][j] = 0;
        }
        else
        {
            latest[i][j] = p[i][j];
        }
        }
       // printf("\n");
    }
    int o, d;
     for (o = 0; o< numRows;o++)
    {
        for ( d = 0;d< numCols;d++)
        {
           // printf("%d ",p[i][j]);
            p[o][d] = latest[o][d];
        }
        //printf("\n");
    }
    //printf("%d", latest[1][2]);
   // p = latest;s
   // return p;
}


void main()
{

    int r,c;
    int numbers;
    scanf("%d%d%d", &r, &c, &numbers);
    int arr[30][30];
    int** arrUp;
    int rows;
    int columns;
    for (rows = 0 ; rows < r; rows++)
    {
        for (columns = 0 ; columns < c; columns++)
        {
            scanf("%d", &arr[rows][columns]);
        //    printf()
        }

    }
    int qq;
    for (qq = 0; qq < numbers ; qq ++)
    {
    neighbour( r, c, arr);

    display( r, c, arr);
    printf("%s\n", "-----");
    }
    }

