#include<stdio.h>
//		  5
//		4 5 4
//	  3 4 5 4 3
//	3 3 4 5 4 3 2
//1 2 3 4 5 4 3 2 1
main()
{
	int i,j,k,l;
	for(i=5;i>=1;i--)
	{
		for(l=i;l>1;l--)
		{
			printf(" ",l);
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		for(k=4;k>=i;k--)
		{
			printf("%d",k);
		}
		
		printf("\n");
	}
}