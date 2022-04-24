#include<stdio.h>

void length(char s1[])
{
    int i;
    for(i=1;s1[i]!='\0';i++);
    printf ("\nthe length of string is %d\n",i);
}
void copy(char s1[])
{
     int i,j;
     char s2[20];
     for(i=1;s1[i]!='\0';i++);
     for(j=0;j<=i;j++)
     {
         s2[j]=s1[j];
     }
     printf ("\n The string copy in s2 is %s\n",s2);   
}
void upper(char s1[])
{
      int i,j;
     for(i=1;s1[i]!='\0';i++);
     for(j=0;j<=i;j++)
     {
         if(s1[j]>='a'&&s1[j]<='z')
         {
             s1[j]=s1[j]-32;
         }
     }
     printf ("\n The upper case string is %s\n",s1);   
}
void merg(char s1[],char s2[])
{
      int p,i,j,k;
     for(i=1;s1[i]!='\0';i++);
     for(k=1;s1[k]!='\0';k++);
     for(j=i,p=0;j<=i+k;j++,p++)
     {
       s1[j]=s2[p];
     }
     printf ("\n The string concat is %s\n",s1)  ;
}
void strcheck(char s1[],char s2[])
{
    int i,j,k,l;
    for(i=1;s2[i]!='\0';i++);
    l=i;
    for(i=0;s1[l+i-1];i++)
    {
        k=i;
        for(j=0;j<=l-1;j++)
        {
            if(s1[k]!=s2[j])
            {
                break;
            }
            k++;
        }
        if(j==l)
        {
            printf ("The string is found \n");
        }
    }     
    if(j!=l) 
    {
        printf ("The string not found\n");
    } 
    
}

int main()
{
    char s1[20],s2[20];
    int choice;
    do{
        printf("1]length of string\n");
        printf("2]copy string\n");
        printf ("3]convert to uppercase\n");
        printf("4]string concat\n");
        printf("5]find occurs of string\n");
        printf ("6]exit\n");
        printf ("Enter the choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:printf("Enter the string\n");
                         scanf("%s",s1);
                        length(s1);
                        break;
            case 2:printf("Enter the string\n");
                        scanf("%s",s1);
                        copy(s1);
                        break;
             case 3:printf("Enter the string\n");
                        scanf("%s",s1);
                        upper(s1);
                        break;
          case 4:printf("Enter the string \n");
                         scanf("%s",s1);
                         printf("Enter the 2nd string\n");
                         scanf ("%s",s2);
                        merg(s1,s2);
                        break;
           case 5:printf("Enter the string \n");
                         scanf("%s",s1);
                         printf("Enter the substring \n");
                         scanf ("%s",s2);
                        strcheck(s1,s2);
                        break;       
        }
        
    }while(choice!=6);
}
