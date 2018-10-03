#include <stdio.h>

int main(void) {
int n,k,i,sum=0;
	scanf("%d%d",&n,&k);
	
	for(i=1;i<=n;i++)
	{
		printf("\t%d",i);
	}
		for(n=1;n<=k;n++)
		{
			sum=sum+n;
		
		}
		printf("\n%d",sum);
	return 0;
}
