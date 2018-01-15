#include<stdio.h>
#define ctr 16
void find_sort(char a[][ctr],int num)/*通过函数传递二维数组
可以用二维数组名作为实参或者形参，在被调用
函数中对形参数组定义时可以指定所有维数的大
小，也可以省略第一维的大小说明 ,二者都是合法
而且等价，但是不能把第二维或者更高维的大小省略
 或者char **a  形参声明为指针的指针。*/
{
    double first=9999.99,end=0;int k;
    //who unlock
    for(int i =1; i<num*3; i+=3)
    {
       double temp=((a[i][0]-'0')*10+(a[i][1]-'0'))*100+(a[i][3]-'0')*10+(a[i][4]-'0')+((a[i][6]-'0')*10+(a[i][7]-'0'))/60;
        //思路 给小时 分 秒 赋予不同权重
        if(temp<=first){first=temp;k=i/3;}
    }
    printf("%s",a[k*3]);
    //who lock
    for(int i =2; i<num*3; i+=3)
    {
         int temp=((a[i][0]-'0')*10+(a[i][1]-'0'))*100+(a[i][3]-'0')*10+(a[i][4]-'0')+((a[i][6]-'0')*10+(a[i][7]-'0'))/60;
        if(temp>=end){end=temp;k=i/3;}
    }
    printf(" %s",a[k*3]);
}
int main()
{
    int num,i=0;
    scanf("%d",&num);
    char Records[num*3][ctr];
    while(i<(num*3))
    {
        scanf("%s",Records[i]);
        i++;
    }
    find_sort(Records,num);
    return 0;
}
