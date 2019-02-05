#include<stdio.h>
int main()
{
    int request,i=0,cur_f,last_f=0,total_time=0;
    scanf("%d",&request);
    while(i++<request)
    {
        scanf("%d",&cur_f);
        if((cur_f-last_f)>0)
            total_time=total_time+(cur_f-last_f)*6+5;
        else if((cur_f-last_f)<0)
            total_time=total_time+(last_f-cur_f)*4+5;
        else
            total_time=total_time+5;
        last_f=cur_f;
    }
    printf("%d",total_time);
    return 0;
}
