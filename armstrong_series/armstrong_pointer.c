#include <stdio.h>
#include <conio.h>

int main(){
    int n,r,sum,t, *p, *pr;
    int s,e;

    printf("Input starting number of range: ");
    scanf("%d",&s);

    printf("Input ending number of range : ");
    scanf("%d",&e);
    
    t=n;
    p=&n;
    pr=&sum;
    

    printf("Armstrong numbers in given range are: ");
    for(n=s;n<=e;n++){
         
        sum = 0;

        while(*p!=0)
		{
		r=*p % 10;
        *p=*p/10;
        *pr=*pr+(r*r*r);
        }
        if(n==*pr)
		{
			printf("%d ",*p);
		}
        getch();
        
    }
printf("\n");
}
