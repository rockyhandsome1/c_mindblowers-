//you can generalize this too:)
#include <stdio.h>

int main()
{
    int i,j,k=0,l=0,f=0;
    int a[5]={2,5,5,3,7};
    int b[6]={2,2,3,5,5,7};
    int c[5];
    printf("\ncommon elements:\n");
    for(i=0;i<5;i++)
    for(j=0;j<6;j++)
    {
        if(a[i]==b[j])
        {
            for(k=0;k<5;k++)
            if(a[i]==c[k])
            f=1;
            if(f==0)
            {
                c[l]=a[i];
                l=l+1;
                break;
            }    
            
        }
        f=0;
    }
    
    for(i=0;i<l;i++)
    printf("%d ",c[i]);
    return 0;
}
