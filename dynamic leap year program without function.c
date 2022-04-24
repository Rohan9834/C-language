#include<stdio.h>
#include<stdlib.h>
void display(int *p,int n);
int main(int argc, char *argv[])
{
	int n,*ptr,i,temp,c,sum,j;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Enter the number to check\n");
	for(i=0;i<n;i++)
	{
	   scanf ("%d",(ptr+i)) ;
	}
	for(i=0;i<n;i++)
	{
	    temp=*(ptr+i);
	      if(temp%4==0&&temp%100!=0||temp%400==0)
	        {
	            printf ("the leap year is %d\n",*(ptr+i));
	        }
	}
}
