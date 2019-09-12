#include <stdio.h>
 
	int main()
{
	long long int a;
	int j,k,l,count=0,N,b;
	scanf("%d",&N);
	char A[10],B[5];
	for (int t = 0; t < N; ++t)
	{
		count=0;
		//cin>>B>>A;
		
		scanf("%lld",&a);
		scanf("%d",&b);
		for (int i = 9; i >=0; i--)
		{
			A[i]=a%10;
			a/=10;
		}
		for (int i = 4; i >=0;i--)
		{
			B[i]=b%10;
			b/=10;
		}
		for (k = 0; k < 10;)
		{
			l=k;
			for (j = 0; j<5&&l<10;)
			{
				if (B[j]==A[l])
				{
					j++;
					l++;
				}
				else
				{
					break;
				}
			}
			
			if(j==5)
			{
				count++;
			}
			k++;
		}
		//cout<<count<<"\n";
		//printf("%d\n",count);	
		if (count>0)
			{
				printf("1\n");
			}	
		else
		{
			printf("0\n");
		}	
 
	}
	return 0;
}
  
