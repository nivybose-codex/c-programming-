#include<stdio.h>
struct cmplx
{
    float a;
    float b;
};
int main(void)
{
    struct cmplx c1,c2,c3;
    scanf("%f+j%f",&c1.a,&c1.b);
    scanf("%f+j%f",&c2.a,&c2.b);
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    printf("sum:%f+j%f",c3.a,c3.b);
    return 0;
}
