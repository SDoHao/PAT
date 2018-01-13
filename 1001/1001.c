#include<stdio.h>
#include<math.h>
void fun(int x)
{
    int r=x%1000;
    if(x==0)
        return ;
    else if    (abs(x)<1000)
    {
        printf("%d",r);
        return;
    }
    fun(x/1000);
    printf(",%.3d",abs(r));
}
int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=a+b;
    if(sum==0)
    {
        printf("0");
        return 0;
    }
    fun(sum);

//        c=sum/1000;
//        d=sum%1000;
//        while(c!=0)
//        {
//            printf(",%.3d",d);
//            c=c/1000;
//            d=c%1000;
//        }
    return 0;
}


