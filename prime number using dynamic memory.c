#include<stdio.h>
#include<stdlib.h>
void display(int *p,int n);
int main(int argc, char *argv[])
{
	int n,*ptr,i,temp,c,j;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Enter the number to check\n");
	for(i=0;i<n;i++)
	{
	   scanf ("%d",&ptr[i]) ;
	}
	for(i=0;i<n;i++)
	{
	    temp=ptr[i];
	    j=1,c=0;
	    while(j<=temp)
	    {
	        if(temp%j==0)
	        {
	            c++;
	        }
	        j++;
	    }
	    if(c==2)
	    {
	        printf("%d\t",ptr[i]);
	    }
	    
	}
}

