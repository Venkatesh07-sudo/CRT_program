#include <stdio.h>
#include<limits.h>
void main()
{
    int a,b;
    a=INT_MAX;
    printf("%d\n",a);
    b=INT_MIN;
    printf("%d",b);
}
/////////////////////////////
#include <stdio.h>
#include<limits.h>
void main()
{
    float a=1.326;
    printf("%f",a);
}
/////////////////////////////
#include <stdio.h>
#include<limits.h>
void main()
{
    int a=65;
    for (a=65;a<=90;a++)
    printf("%c=%d\n",a,a);
}
//////////////////////////////
#include <stdio.h>
#include<limits.h>
void main()
{
    printf("abcd\nxyz");
}
//////////////////////////////
#include <stdio.h>
#include<limits.h>
void main()
{
    printf("abcd\rxyz");
}
//////////////////////////////
#include <stdio.h>
#include<limits.h>
void main()
{
    int i=123;
    printf("%o",i); #octadecimal#
}
//////////////////////////////
#include <stdio.h>
void main()
{
    int a;
    a=printf("hello\n");
    printf("%d",a);
}
//////////////////////////////
#include <stdio.h>

int main()
{
    int a,b,c;
    c=scanf("%d%d",&a,&b);
    printf("%d",c);
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=5,b;
    b=a++;
    printf("%d %d",a,b);
}
////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=5,b=4,c;
    c=b||a;
    printf("%d",a);
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=5678,c;
    c=!a;
    printf("%d",c);
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=5,b=6,c;
    if (a=b)
    printf("yes");
    else
    printf("no");
    printf("%d",a);
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=5,b=6,c;
    if (a=b)
    printf("yes");
    else
    printf("no");
    printf("%d",a);
}
//////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=5,b=6,c;
    c=a&b;
    printf("%d",c);
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b;
    b=sizeof(a);
    printf("%d",b);
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("%d",sizeof(a));
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=5,b;
    b=sizeof(a++);
    printf("%d\n%d",a,b);
}
/////////////////////////////
#include <stdio.h>
#include<math.h>
int main()
{
    int a=6,b=5,c;
    c=a<b?a:b;
    printf("%d",c);
}
///////////////////////////
#include <stdio.h>

int main()
{
    int a,b,ch;
    printf("enter a,b values");
    scanf("%d%d",&a,&b);
    printf("the operation to perform");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("%d",a+b);break;
        case 2:printf("%d",a-b);break;
        case 3:printf("%d",a*b);break;
        case 4:printf("%d",a/b);break;
        case 5:printf("%d",a%b);break;
        default :printf("invalid input");
    }
    }
//////////////////////////
#include <stdio.h>

int main()
{
    int a,b;
    char ch;
    scanf("%d%d",&a,&b);
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':printf("%d",a+b);break;
        case '-':printf("%d",a-b);break;
        case '*':printf("%d",a*b);break;
        case '/':printf("%d",a/b);break;
        case '%':printf("%d",a%b);break;
        
        
        default :printf("invalid input");
    }
    }

