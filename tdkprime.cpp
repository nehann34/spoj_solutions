#include <stdio.h>
#include<stdlib.h>
int prime[5000001];
int main()
{
	int t;
	int n;
	bool *a;
	int c=1;
	a=(bool *)calloc(87000008 ,sizeof(bool));
	// prime=(int *)calloc(5000001 ,sizeof(int));
	int b=87000008;
	a[0]=a[1]=0;
	for(int i=3;i*i<=b;i=i+2)
		{
			if(a[i]==0)
			{
				
				for(int j=2*i;j<=b;j=j+i)
					a[j]=1;
			}
		}
	prime[0]=2;
	for(int i=3;i<b && c<5000001;i=i+2)
	{
		
		if(a[i]==0)
			prime[c++]=i;
	}
	scanf("%d",&t);
	while(t--)
		{
			int c=0;
			scanf("%d",&n);
			printf("%d\n",prime[n-1] );

			
	}
	return 0;
}