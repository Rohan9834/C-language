### Hi there 👋

<!--
**Rohan9834/Rohan9834** is a ✨ _special_ ✨ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- 🔭 I’m currently working on ...
- 🌱 I’m currently learning ...
- 👯 I’m looking to collaborate on ...
- 🤔 I’m looking for help with ...
- 💬 Ask me about ...
- 📫 How to reach me: ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...
-->
#include<stdio.h>
int large(int *p,int *p1,int *p2);
int main()
{
    int a,b,c,max;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    max=large(&a,&b,&c);
    printf("The largest number is%d",max);
}
int large(int *p,int *p1,int *p2)
{
    if(*p>*p1&&*p>*p2)
    {
        return *p;
    }
    else if(*p1>*p2&&*p1>*p)
    {
        return *p1;
    }
    else 
    {
        return *p2;
    }
    
}
