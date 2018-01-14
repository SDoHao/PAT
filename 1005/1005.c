#include<stdio.h>
#define SIZE 101
int __Sum(char N[])
{
    int i = 0,n,sum=0;
    while(N[i]!='\0')
    {
        //sscanf(*****N[i++]****,"%d",&n);//把字符串s转换为整形数据并存入变量n中
        n=N[i++]-'0';
        //printf("%d\n",n);
        sum+=n;
    }
    return sum;
}
void __translate(int n){
    switch(n){
    case 0:printf("zero"); break;
    case 1:printf("one"); break;
    case 2:printf("two"); break;
    case 3:printf("three"); break;
    case 4:printf("four"); break;
    case 5:printf("five"); break;
    case 6:printf("six"); break;
    case 7:printf("seven"); break;
    case 8:printf("eight"); break;
    case 9:printf("nine"); break;
    default:printf("warning"); break;
    }
}
void __Spell(int n)
{
    int d,r;
    d=n%10;
    r=n/10;
    if(r==0)
    {
        __translate(d);
        return;
    }
    __Spell(r);
    printf(" ");
    __translate(d);
    //printf(" %d",d);
}
int main()
{
    char a[SIZE];
    int sum;
    scanf("%s",a);
    //printf("%s\n",a);
    sum=__Sum(a);
    //printf("%d",sum);
    __Spell(sum);
    return 0;
}
