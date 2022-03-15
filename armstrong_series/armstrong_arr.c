#include<stdio.h>
int main()
{
	int arr[50];
	int n, a, i, *point[50], sum, t, r;
	int s, e;
	
	for (i=0; i<n; i++)
	{
		point[i]=&arr[i];
		
	}
	
	
	printf("enter the starting number: ");
	scanf("%d", &s);
	
	printf("enter the ending number: ");
	scanf("%d", &e);
	
	
	
	
	printf("armstrong series: ");
	
	
	sum=0;
	for(n = s; n<=e; n++)
	{
		t=n;
		sum = 0;
		
		while(t != 0)
		{
			r = t%10;
			t = t/10;
			sum = sum+(r*r*r);
			
			if(sum == n)
		{
			scanf("%d ", *point[i]);
			
		}
		}
		
//		if(sum == n)
//		{
//			scanf("%d ", *point[i]);
//			
//		}
		
		
	}
	printf("\n");
	return 0;
	}
	

