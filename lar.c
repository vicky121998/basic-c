#include<stdio.h>

int main(void) {
	int a[3],i=0,b;
	for(i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
    }
    b=a[0];
    for(i=1;i<3;i++)
    if(a[i]>b)
    b=a[i];
    printf("%d",b);
   return 0;
}
