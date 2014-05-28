#include <stdio.h>


int reverse(int a)
{
    int b;
int c=0;
while(a)
{
   
    b=a%10;
    c*=10;
    c+=b;
    a/=10;
}
    
    
return c;    
}
int main()
{   int g,d,e,f;
    scanf("%d",&g);
    while(g)
    {
        scanf("%d %d",&d,&e);
        f=reverse(d)+reverse(e);
        printf("%d\n",reverse(f));
        g--;
        
    }
    
     
    return 0;
}


