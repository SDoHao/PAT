#include<stdio.h>
#define ctr 16
void find_sort(char a[][ctr],int num)/*ͨ���������ݶ�ά����
�����ö�ά��������Ϊʵ�λ����βΣ��ڱ�����
�����ж��β����鶨��ʱ����ָ������ά���Ĵ�
С��Ҳ����ʡ�Ե�һά�Ĵ�С˵�� ,���߶��ǺϷ�
���ҵȼۣ����ǲ��ܰѵڶ�ά���߸���ά�Ĵ�Сʡ��
 ����char **a  �β�����Ϊָ���ָ�롣*/
{
    double first=9999.99,end=0;int k;
    //who unlock
    for(int i =1; i<num*3; i+=3)
    {
       double temp=((a[i][0]-'0')*10+(a[i][1]-'0'))*100+(a[i][3]-'0')*10+(a[i][4]-'0')+((a[i][6]-'0')*10+(a[i][7]-'0'))/60;
        //˼· ��Сʱ �� �� ���費ͬȨ��
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
