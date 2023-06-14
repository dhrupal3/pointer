#include<stdio.h>

main()
{
	int a,b,c,n;
	int *i,*j;
	
	printf("Enter Your A Value = ");
	scanf("%d",&a);
	
	printf("Enter Your B Value = ");
	scanf("%d",&b);
	
	i=&a;
	j=&b;
	
	n=*j;
	*j=*i;
	*i=n;
	
	printf("%d\n",a);
	printf("%d\n",b);
}
