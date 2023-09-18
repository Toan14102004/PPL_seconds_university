
 /* bt25_4.c
  HelloWorld

  Created by Guest User on 25/04/2023.*/

//code cach 1
//#include <stdio.h>
//#include<math.h>
//#define N 100
//void nhap(int n,float a[]){
//    for (int i=1;i<=n;i++){
//        printf ("a[%d]=",i);
//        scanf ("%f",&a[i]);
//    }
//}
//
//void xuat(int n,float a[]){
//    for(int i=1;i<=n;i++)
//        printf ("%f",a[i]);
//}
//
//void tinhw(int n, float a[],float b[]){
//  int i,j;
//    for(i=1;i<=n;i++) b[i]=1;
//   for(i=1;i<=n;i++)
//     for(j=1;j<=n;j++)
//            if(i!=j) b[i]=b[i]*(a[i]-a[j]);
//}
//
//void tinhlx(int n,float x,float a[],float b[],float c[]){
//    for (int i=1;i<=n;i++){
//        printf ("c[%d]= ",i);
//        scanf ("%f",&c[i]);
//    }
//    float Lx=0;
//    int s=1;
//    float q=0;
//    printf ("nhap gia tri x can tinh x= ");
//    scanf ("%f",&x);
//    for(int  i=1;i<=n;i++)s=s*(x-a[i]);
//    printf ("s=%d\n",s);
//    for(int j=1;j<=n;j++){
//        q+=c[j]/((x-a[j])*b[j]);
//    } printf ("q=%f\n",q);
//    printf ("ket qua L(%0.1f)=%0.1f",n,s*q);
//}
//main (){
//    int n;
//    float x;
//    float a[N],b[N],c[N];
//    printf ("nhap n= ");
//    scanf ("%d",&n);
//    nhap(n,a);
//    tinhw(n,a,b);
//    xuat(n,b);
//    tinhlx(n,x,a,b,c);
//}
//
////code cach 2
///*#include "stdio.h"
//#include <math.h>
//#define N 100
//void nhapgiatriham (int n,float a[]){
//    printf ("moi nhap cac gia tri cua f(xi) \n");
//    for (int i=1;i<=n;i++){
//        printf ("a[%d]=",i);
//        scanf ("%f",&a[i]);
//    }
//}
//
//void tinhw(int n,float b[],float c[]){
//    printf ("nhap cac gia tri xi \n");
//    for (int i=1;i<=n;i++){
//        printf("c[%d]= ",i);
//        scanf ("%f",&c[i]);
//    }
//    for (int i=1;i<=n;i++) b[i]=1;
//    for (int i=1;i<=n;i++){
//        for (int j=1;j<=n;j++){
//            if (i!=j)
//                b[i]=b[i]*(c[i]-c[j]);
//        }
//        printf ("b=%0.1f\n",b[i]);
//    }
//}
//
//main (){
//    float a[N],b[N],c[N],s[N];
//    int n;
//    float x;
//    float lx=0;
//    float S=1;
//    printf ("nhap n= ");
//    scanf ("%d",&n);
//    nhapgiatriham(n,a);
//    tinhw(n,b,c);
//    printf ("nhap gia tri x can tinh x= ");
//    scanf ("%f",&x);
//    for (int k=1;k<=n;k++) S=S*(x-c[k]);
//    for (int j=1;j<=n;j++){
//        s[j]=S/(x-c[j]);
//    }
//    for (int i=1;i<=n;i++)
//        lx=lx+(a[i]*s[i])/b[i];
//    printf ("ket qua L(%0.1d)= %0.1f\n",n,lx);
//}*/
