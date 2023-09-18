/* #include <stdio.h>
#include <math.h>
#define eps 1e-6
float hamsin (float x)
{
    int i;
    float a;
    float s;
    s=0;
    a=x; i=2;
    while (fabs(a)>=eps)
    {
        s=s+a;
        a=a*(-(x*x/(i*(i+1))));
        i=i+2;
    }
    return s;
}
float hamcos (float x)
{
    int i;
    float b ;
    float s ;
    i=2; b=1;s=0;
    while (fabs(b)>=eps)
    {
        s=s+b;
        b=b*(-x*x)/(i*(i-1));
        i=i+2;
    }
    return s;
}
float tinh_e_mu_x(float x)
{
    int i;
    float s;
    float c;
    c=x;s=1;i=2;
    while (fabs(c)>=eps)
    {
        s=s+c;
        c=c*x/i;
        i=i+1;
    }
    return s;
}
float tanx(float x)
{ float s;
    if(hamcos(x)==0){
        printf ("\nvi phạm điều kiện mẫu =0");
    }
    else{
        s= hamsin(x)/hamcos(x);
    }
    return s;
}
float cotx(float x){
    float s ;
    if (hamsin(x)==0)
    {
        printf ("\nvi phạm điều kiện mẫu =0");
    }
    else {
        s=hamcos(x)/hamsin(x);
    }
    return s;
}
int main ()
{
    float x;
    printf ("\nnhap x=");
    scanf ("%f",&x);
    printf ("\nkết quả của hàm sin(x)=%0.3f",hamsin(x)) ;
    printf ("\ncheck kết quả hàm sin(x)=%0.3f",sin(x));
    printf ("\nkết quả hàm cos(x)=%0.3f",hamcos(x));
    printf ("\ncheck kết quả của hàm cos(x)=%0.3f",cos(x));
    printf ("\nkết quả của hàm e^x=%0.3f",tinh_e_mu_x(x));
    printf ("\nkết quả của hàm tan(x)=%0.3f",tanx(x));
    printf ("\ncheck kết quả của hàm tan(x)=%0.3f",tan(x));
    printf ("\nkết quả của hàm cot(x)=%0.3f",cotx(x));
    printf ("\ncheck kết quả của hàm cot(x)=%0.3f\n",1/(tan(x)));
    
} */
