#include<stdio.h>
void maxsublinear(int a[], int n)
{
    int i,curSum = 0,maxSum = 0;
    int begin = 0,fb=0,end = 0;
    for (i = 0; i < n; i++)
    {
        curSum = curSum + a[i];
        if (curSum > maxSum)
        {
            maxSum = curSum;
            fb=begin;
            end = i;
        }
        if (curSum < 0)
        {
            curSum = 0;
            begin =( i + 1 >= n ? i : i + 1);
        }
    }
    printf("%d %d %d",maxSum,fb,end);
}
int main(){
    int a,i=0;
    scanf("%d",&a);
    int sque[a];
    while(i<a){
        scanf("%d",&sque[i]);
        i++;
    }
   maxsublinear(sque,a);
}
