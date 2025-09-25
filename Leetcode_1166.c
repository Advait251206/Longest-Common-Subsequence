int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int strlen_custom(char *s)
{
    int len=0;
    while(s[len]!='\0')
    {
        len++;
    }
    return len;
}
int longestCommonSubsequence(char* text1,char* text2)
{
    int m=strlen_custom(text1);
    int n=strlen_custom(text2);
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(text1[i-1]==text2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}