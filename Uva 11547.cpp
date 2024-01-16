#include<stdio.h>
#include<math.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while (t--)
        {scanf("%d",&n);
    int r=abs(((n*567/9+7492)*235/47)-498);
    int onecol=(r/10)%10;
    printf("%d\n",onecol);}
    return 0;
}
