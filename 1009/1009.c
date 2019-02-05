#include<stdio.h>
void multy(int polyexp1[],double polycoe1[],int polyexp2[],double polycoe2[],int n,int m)
{
    double coe;
    int exp,k=1;
    double COE[n*m];
    int EXP[n*m];
    COE[0]=polycoe1[0]*polycoe2[0];
    EXP[0]=polyexp1[0]+polyexp2[0];
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            coe=polycoe1[i]*polycoe2[j];
            exp=polyexp1[i]+polyexp2[j];
            //printf("%d %.1lf ",exp,coe);
            int match=0;
            for(int g=0; g<k; g++)
            {
                if (EXP[g]==exp)
                {
                    COE[g]+=coe;
                    match=1;
                    //printf("123\n");
                    break;
                }
            }
             if(match==0)
                {
                    EXP[k]=exp;
                    COE[k]=coe;
                    k++;
                    //printf("456\n");
                }
        }
    }
    COE[0]/=2;
    printf("%d",k);
    for(int g=0; g<k; g++)
    {
        printf(" %d %.1f",EXP[g],COE[g]);
    }
}
int main()
{
    int K1,K2,i=0;
    scanf("%d",&K1);
    double polycoe1[K1];
    int polyexp1[K1];
    while(i<K1)
    {
        scanf("%d %lf",&polyexp1[i],&polycoe1[i]);
        i++;
    }
    i=0;
    scanf("%d",&K2);
    double polycoe2[K2];
    int polyexp2[K2];
    while(i<K2)
    {
        scanf("%d %lf",&polyexp2[i],&polycoe2[i]);
        i++;
    }
//    for(int g=0; g<K1; g++)
//    {
//        printf("%d %.1lf ",polyexp1[g],polycoe1[g]);
//    }
//    printf("\n");
//    for(int g=0; g<K2; g++)
//    {
//        printf("%d %.1lf ",polyexp2[g],polycoe2[g]);
//    }
    multy(polyexp1,polycoe1,polyexp2,polycoe2,K1,K2);
    return 0;
}
