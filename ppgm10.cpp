#include<stdio.h>
int main()
{
    int i,a,b;
    double l,u,min1,min2,diff;
    scanf("%lf %lf",&l,&u);
    a=l;
    b=u;
    min1=l-a;
    min2=u-b;
    a=a*60;
    b=b*60;
    min1=min1*100;
    min2=min2*100;
    diff=a+min1-b-min2;
    if(diff<0)
    {
    printf("%.0lf mins",-(diff));
    }
    else
    {
        printf("%.0lf mins",diff);
    }
    return 0;
}



#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int i,j,n1,n2,count=0;
	scanf("%s %s",str1,str2);
	a=strlen(str1);
	b=strlen(str2);
	if(a==b)
	{
		for(i=0;i<n1;i++)
		{
			if(str1[i]==str2[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
			
		}
		if(count==1)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
