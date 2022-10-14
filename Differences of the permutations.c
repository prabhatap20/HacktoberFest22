#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&t);
    while(t)
    {
        int sum=0,s,fact=1;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum+=n-i;
        }
        for(i=1;i<=n;i++){
            fact*=i;
        }
        s=fact*sum;
        printf("%d\n",s);
        t--;
    }
}
