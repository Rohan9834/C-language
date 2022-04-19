#include<stdio.h>
 void display(int *p,int n); 
int main()
{
    int a[10],i,n;
  
    printf("Enter the array limit :");
    scanf("%d",&n);
    printf("\nEnter the array elements :");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,n);
}
void display(int *p,int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(*(p+i)%2==0)
        {
            printf("the even number is : %d\n",*(p+i));
        }
        else{
            printf ("The odd number is : %d\n",*(p+i));
        }
    }
    
}
