//To implement Multiprogramming with a variable number of tasks(MVT)
#include<stdio.h>
main()
{
	int mm,np,ps[100],rm[100],am=0,flag=0,i,j;
	printf("Enter the memory size");
	scanf("%d",&mm);
	printf("Enter no of processes");
	scanf("%d",&np);
	for(i=0;(i<np)&&(am<mm);i++)
	{
		printf("Enter the size of p[%d]:",i+1);
		scanf("%d",&ps[i]);
		am=am+ps[i];
		if(am>=mm)
		{
			flag=1;
			break;
		}
		rm[i]=mm-am;
	}
	j=i;
	printf("Process\tsize\trm\n");
	for(i=0;i<j;i++)
	printf("%d\t%d\t%d\n",i+1,ps[i],rm[i]);
	if(flag==1)
	printf("Memory is unavailable");
	getch();
}
