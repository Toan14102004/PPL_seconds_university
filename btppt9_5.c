//
//  btppt9_5.c
//  HelloWorld
//
//  Created by Guest User on 09/05/2023.
//

//#include <stdio.h>
//#include <math.h>
//int tinhgt(int k){
//    int gt=1;
//    for (int i=1;i<=k;i++){
//        gt=gt*i;
//    } return gt;
//}
//void tinh_C(int n){
//    int c[10];
//    int j;
//    for( j=0;j<=n;j++){
//        c[j]=tinhgt(n)/(tinhgt(j)*tinhgt(n-j));
//        printf ("c[%d]=%d\t",j,c[j]);
//    }
//}
//int main (){
//    int n;
//    int t;
//    int x;
//    int c[10];
//    printf ("nhap n=");
//    scanf("%d",&n);
////    printf ( "giai thua cua n=%d\n",tinhgt(n));
////   // printf ("C=%0.1f",tinh_C(n));
////    tinh_C(n);
//
//
//#include<stdio.h>
//#include<math.h>
//#define N 100
// int main ()
//{
//    int n;
//    int a[N][N],b[N][N],c[N][N];
//    printf ("nhap n=");
//    scanf ("%d",&n);
//    printf ("nhap cac gia tri x :\n");
//    for (int i=0;i<n;i++){
//        printf ("a[%d][0]=",i);
//        scanf ("%d",&a[i][0]);
//                          }
//    printf ("nhap gia tri cua f(x) :\n");
//    for (int i=0;i<n;i++){
//        printf ("b[%d][1]=",i);
//        scanf ("%d",&b[i][1]);
//                          }
//    for (int i=0;i<n;i++){
//        for (int j=0;j<=1;j++){
//            if( j==0){
//                c[i][j]=a[i][0];
//              }
//            else{
//                c[i][j]=b[i][1];
//                    }
//                            }
//                          }
////     for (int i=0;i<n;i++){
////         for (int j=0;j<=1;j++)
////             printf ("%d\t",c[i][j]);
////         printf ("\n");}
//    for (int j=2;j<=n+1;j++){
//        for (int i=j-1;i<=n;i++){
//                c[i][j]=c[i][j-1]-c[i-1][j-1];
//                                }
//                          }
//     printf ("bảng sai phân:\n");
//     printf ("\nxi\tf(xi)\n");
//     for (int i=0;i<n;i++){
//         for (int j=0;j<=n;j++)
//             printf ("%d\t",c[i][j]);
//         printf ("\n");
//     }
//}
