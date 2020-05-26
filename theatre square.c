#include<stdio.h>
#include<math.h>

int main()
{

    double l,b,le,br,a,n,m;
    scanf("%lf %lf %lf",&n,&m,&a);
    printf("%lf %lf %lf\n",n,m,a);

    le=n/a;
    l=ceil(le);
    printf("%lf  %lf\n",l,le);

    br=m/a;
    b=ceil(br);
    printf("%lf  %lf\n",b,br);

    printf("%lf",l*b);
    return 0;
}
