//
//  BT_20_3.c
//  HelloWorld
//
//  Created by Guest User on 20/03/2023.
//

/*#include <stdio.h>
#include <math.h>
float nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf ("hệ số của bậc thứ %d là ",n-1-i);
        scanf ("%d",&a[i]);
    } return 0;
}
float tinh(int x[],int n , float a)
{
    int i ;
    float f=0;
    for(i=0;i<n;i++)
    {
        f=f+x[i]*pow(a,n-1-i);
    }
    return f;
}
int main ()
{
    int n ;
    int x[10];
    float a,b,c;
    printf ("\nnhập số bậc của hàm số :");
    scanf ("%d",&n);
    n=n+1;
    nhap(x,n);
    do{
        printf ("nhập a=");
        scanf ("%f",&a);
        printf("\nnhập b=");
        scanf ("%f",&b);
    } while((tinh(x,n,a)>0) || (tinh(x,n,b)<0));
    do {
        c=(a+b)/2;
        if (tinh(x,n,c)>0)
        {
            b=c;
        }
        else {
            a=c;
        }
    } while (fabs(tinh(x,n,c))>pow(10,-5));
    printf ("nghiệm của hàm số là :%f",c);
    printf ("giá trị tại nghiệm gần đúng là : %0.6f",tinh(x,n,c));
}*/
//#include <stdio.h>
//#include <math.h>
// 
//#define eps 0.00001
//#define N 100
// 
//void nhan_matran(float a[][N], float b[][N], float c[][N], int n) {
//    for (int i = 1; i <= n; i++)
//    for (int j = 1; j <= n; j++) {
//        c[i][j] = 0;
//        for (int k = 1; k <= n; k++) {
//            c[i][j] += a[i][k]*b[k][j];
//        }
//    }
//}
// 
//int main() {
//    //freopen("input.txt", "r", stdin);
//         
//    int n;
//    float a[N][N], M1[N][N], M[N][N], B[N][N];
//    printf("\nNhap n = ");
//    scanf("%d", &n);
//     
//    printf("\nNhap ma tran: \n");
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            printf ("a[%d][%d]=",i,j);
//            scanf("%f", &a[i][j]);
//        }
//    }
//     
//    for (int k = n-1; k >= 1; k--) {
//         
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (i != k) {
//                    if (i == j) {
//                        M[i][j] = 1;
//                        M1[i][j] = 1;
//                    }
//                    else {
//                        M[i][j] = 0;
//                        M1[i][j] = 0;
//                    }
//                }
//                else {
//                    M1[i][j] = a[k+1][j];
//                    if (j == k) M[i][j] = 1.0/a[k+1][k];
//                    else M[i][j] = -a[k+1][j]/a[k+1][k];
//                }
//            }
//        }
//        nhan_matran(a, M, B, n);
//        nhan_matran(M1,B, a, n);
//    }
//     
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            printf("%6.2f", a[i][j]);
//            printf ("\t");
//        }
//        printf("\n");
//    }
//     
//    return 0;
//}
