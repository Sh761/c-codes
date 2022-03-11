#include<stdio.h>
int main()
{
	/* 2D array declaration*/
   int arr[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for arr[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   // displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", arr[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   
   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 2; j++)
		{
            if (i%2 == 0 && j%2 == 0)
			{
                printf("Enter value to insert at position (%d, %d) : ", i+1, j+1);
                scanf("%d", &arr[i][j]);
            }
        }
    }
    
    //displaying new array

	printf("Resultant Array\n ");
	for (int i = 0; i < 3; i++)
	{
        
        printf("\n");
        for (int j = 0; j < 2; j++)
		{
            printf("%d ", arr[i][j]);
            if(j==2)
			{
            printf("\n");
			}
            
        }
    	
        
    }
    
    // maximum element in the array
    int max;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (arr[i][j] >= max){
                max = arr[i][j];
            }
        }
    }
    printf("\nMaximum element of array is %d \n", max);
    
    int min;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (arr[i][j] <= min){
                min = arr[i][j];
            }
        }
    }
    printf("Minimum element of array is %d \n", min);


    
    
}
