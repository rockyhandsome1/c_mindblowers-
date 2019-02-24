#include <stdio.h>
void triangle(int);
main()
{
	int n;
    	printf("Enter number:");
    	scanf("%d",&n);
    	triangle(n);
        /*output will be in the following format
              #
              #*#
              #*#*#
              #*#*#
              #*#
              #
        */
}
void triangle(int n)
{
	int i,j,l=1,temp;
        for(i=1;i<=n;i++)
    	{
    		for(j=1;j<=i;j++)
    		{
    			printf("%d",l);
    			l++;
    			if(j==i)
    			break;
    			else
    			printf("*");
    		}
    		
    		printf("\n");
    	}
    	l-=n;
    	temp=l;
    	for(i=n;i>=1;i--)
    	{
    		for(j=1;j<=i;j++)
    		{
    			printf("%d",temp);
    			temp++;
    			if(j==i)
    			break;
    			else
    			printf("*");
    		}
    		
    		printf("\n");
    		l-=(i-1);
    		temp=l;
    	}
    }
