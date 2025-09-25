#include <stdio.h>
void printLRS(char b[100][100],char x[],int i,int j)
{
    if(i==0||j==0)
    {
        return;
    }
    if(b[i][j]=='d')
    {
        printLRS(b,x,i-1,j-1);
        printf("%c",x[i-1]);
    }
    else if(b[i][j]=='u')
    {
        printLRS(b,x,i-1,j);
    }
    else
    {
        printLRS(b,x,i,j-1);
    }
}
int main()
{
    char x[]={'A','A','B','C','B','D','C'};
    int n=sizeof(x)/sizeof(x[0]);
    int c[100][100];
    char b[100][100];
    for(int i=0;i<=n;i++)
    {
        c[i][0]=0;
    }
    for(int j=0;j<=n;j++)
    {
        c[0][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==x[j-1]&&i!=j)
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='d';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='l';
            }
        }
    }
    printf("Length of LRS = %d",c[n][n]);
    printf("\nLRS = ");
    printLRS(b,x,n,n);
}