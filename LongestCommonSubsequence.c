#include <stdio.h>
void printLCS(char b[100][100],char x[],int i,int j)
{
    if (i==0 || j==0)
    {
        return ;
    }
    if (b[i][j]=='d')
    {
        printLCS(b,x,i-1,j-1);
        printf("%c",x[i-1]);
    }
    else if (b[i][j]=='u')
    {
        printLCS(b,x,i-1,j);
    }
    else
    {
        printLCS(b,x,i,j-1);
    }
}
int main()
{
    char x[]={'A','G','C','C','C','T','A','A','G','G','G','C','T','A','C','C','T','A','G','C','T','T'};
    char y[]={'G','A','C','A','G','C','C','T','A','C','A','A','G','C','G','T','T','A','G','C','T','T','G'};
    int m=sizeof(x)/sizeof(x[0]);
    int n=sizeof(y)/sizeof(y[0]);
    int c[100][100];
    char b[100][100];
    for (int i=0;i<=m;i++)
    {
        c[i][0]=0;
    }
    for (int i=0;i<=n;i++)
    {
        c[0][i]=0;
    }
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='d';
            }
            else if (c[i-1][j]>=c[i][j-1])
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
    printf("Length of LCS = %d",c[m][n]);
    printf("\nLCS = ");
    printLCS(b,x,m,n);
}