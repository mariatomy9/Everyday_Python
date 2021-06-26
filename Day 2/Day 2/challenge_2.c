#include<stdio.h>
#include<string.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        char a[n+1],b[n+1];
        scanf("%s",&a);
        strcpy(b,a);
        for(i=1;i<n;i++)
        {
            if(a[i]==a[0])
            {
                int x=1;
                while(x+i<n&&b[x]==a[x+i])
                {
                    x++;
                }
                b[x]='\0';
            }
        }
        printf("%s\n",b);
    }
}