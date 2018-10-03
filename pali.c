#include <stdio.h>

int main(void) {
int r,sum=0,n,t;
scanf("%d",&n);
t=n;
if(n<=1000)
{
while(n>0)
{
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}
if(t==sum)
printf("yes");
else
printf("no");

}
	else
	printf("enter within limit(1000)");
	return 0;
}
