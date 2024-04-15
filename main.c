#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,m;
    scanf("%d",&m);
    scanf("%d",&a);
    scanf("%d",&b);
    c=m-a-b;
    if (c>=a && c>=b){
        printf("%d",c);
    } else if (a>=b && a>=c){
        printf("%d",a);
    } else {
    printf("%d",b);
    }
    return 0;
}
