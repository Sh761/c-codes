#include<stdio.h>
int main(){
	
	int arr[50], i, n, ele, num, j, k, pos, c, sum;
	
	printf("enter the number of elements: ");
	scanf("%d", &n);
	
	
	for (i=0; i < n; i++)
	{
		printf("enter value for arr[%d]: ", i);
		scanf("%d", &arr[i]);
	
	}
	printf("\nThe array: ");
	
	for(i=0; i<n; i++) 
   {
    printf("%d ", arr[i]);
	}
	
	
	printf("enter the element to be inserted: ");
	scanf("%d", &ele);
	
	arr[n]=ele;
	
	printf("New Array: ");
	for (i=0; i<=n; i++)
	{
		printf("%d  ", arr[i]);
	}
	
	//deletion of duplicate elements
	 for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {  
            // use if statement to check duplicate element  
            if ( arr[i] == arr[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < n - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                n--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
      
      
    /* display an array after removal of the duplicate elements */  
    printf (" \n Array elements after removal of the duplicate elements: ");  
      
    // for loop to print the array  
    for ( i = 0; i < n; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    
    printf("\nEnter the location where element is supposed to be deleted\n");
   scanf("%d", &pos);

   if (pos >= n+1)
      printf("Deletion is not possible.\n");
   else
   {
      for (c = pos - 1; c < n - 1; c++)
         arr[c] = arr[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", arr[c]);
   }
	
	//sum of all elements in the array
	
	for(i=0; i<n; i++)
    {
        
        sum+=arr[i];
    }
     printf("sum of array is : %d",sum);
     
	
	

	
	


}

