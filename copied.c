#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int c,i,r,t,x[3],y[3],dsq[3];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);
		r *= r;
		for(i=0;i<3;i++)
			scanf("%d %d",&x[i],&y[i]);
		dsq[0] = (x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]);
		dsq[1] = (x[1]-x[2])*(x[1]-x[2]) + (y[1]-y[2])*(y[1]-y[2]);
		dsq[2] = (x[2]-x[0])*(x[2]-x[0]) + (y[2]-y[0])*(y[2]-y[0]);
		c = 0;
		for(i=0;i<3;i++)
			if( dsq[i] <= r )
				c++;
		if(c>1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
 
