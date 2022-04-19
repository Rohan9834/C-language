#include<stdio.h>
void display(int *p,int n);
int main()
{
    int a[10],i, n, *p;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    printf("elements are \treverse are\n");
    display(p,n);
}
void display(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int m=*(p+i);
        int rev=0,num;
        while(m>0)
        {
            num=m%10;
            rev=10*rev+num;
            m=m/10;
        }
        printf("%d \t\t%d\n",*(p+i),rev);
    }
}
