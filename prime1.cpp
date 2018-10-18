#include <bits/stdc++.h>
using namespace std;


int main()
{
	

	int t,*a,*prime,c=1;
	
	int b=31623;//root of 10^9
	a=(int *)calloc(31624,sizeof(int));
	prime=(int *)calloc(3401,sizeof(int));
	a[0]=a[1]=1;
	for(int i=3;i<=b;i+=2)
	{
		if(a[i]==0)
		{

			for(int j=2*i;j<=b;j+=i)
				a[j]=1;
		}
	}
	prime[0]=2;
	for(int i=3;i<=b && c<3401;i=i+2)
	{
		
		if(a[i]==0)
			prime[c++]=i;
	}
	free(a);
	cin>>t;
	while(t--)
	{
		cout<<"1";
		int m,n,j,k,*p;
		cin>>m>>n;
		cout<<m<<" "<<n<<" "<<n-m+1;
		p=(int *)calloc(n-m+1,sizeof(int));
		cout<<"1";
		for(int i=0,j=m;i<c,j<=n;i++)
		{
			k=0;
			
			if( j%prime[i]==0)
				{
					cout<<j<<" "<<prime[i]<<" "<<j%prime[i];
					if(j==prime[i])
						{
							k++;
							while((j+prime[i]*k)<=n)
							{
								p[j-m+prime[i]*k]=1;
								k++;
							}
						}
					else
						{
							while((j+prime[i]*k)<=n)
							{
								p[j-m+prime[i]*k]=1;
								k++;
							}
						}
					j++;
				}
					
		}
						
		
		for(int i=m;i<=n;i++)
		{
			if(p[i-m]==0)
				cout<<i<<endl;
		}
		cout<<endl;
		free(p);

	}
	

	return 0;
}