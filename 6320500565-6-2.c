#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,same=0;
    scanf("%d",&n);
    if(n<4 || n>9)
        return 0;
    char a[n],b[n];
        scanf("%s %s",a,b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            same++;
        }
    }
    printf("%d %d",same,n-same);
}

