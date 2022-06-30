#include <stdio.h>
main()
{
	int a[100],i,j,n,Count=0;
	printf("Enter any value:");
	scanf("%d", &n);
	printf("\nEnter %d values:",n);
	for (i=0;i<n;i++)
	{
    	scanf("%d", &a[i]);
   	}     
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
    		if(a[i]==a[j])
    		{
    			Count++;
				break;
			}
		}
	}
 	printf("\nnumber of duplicate values=%d ", Count);
}