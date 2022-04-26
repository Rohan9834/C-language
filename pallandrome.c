#include<stdio.h>
#include<stdlib.h>
void pali(int *ptr,int n);
int main()
{
    int *ptr,i,n;
    printf("Enter the size\n");
    scanf("%d",&n);
    ptr=(int*)malloc (n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    pali(ptr,n);
}
void pali(int *ptr,int n)
{
    int i,m,rev,temp;
    for(i=0;i<n;i++)
    {
        temp=*(ptr+i);
        rev=0,m=0;
        while(temp>0)
        {
            m=temp%10;
            rev=rev*10+m;
            temp=temp/10;
        }
        if(rev==*(ptr+i))
        {
            printf ("\n%d is palindrome\n",*(ptr+i));
        }
    }
}
