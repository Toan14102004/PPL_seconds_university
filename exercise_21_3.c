//BT_21_3.c
//  Created by Guest User on 21/03/2023
//phương pháp lặp Gauss-Siedel(tự sửa sai)
//#include "stdio.h"
//#include "math.h"
//const int size =100;
//void nhapMang(float a[][size],int n){
//    for(int i=1;i<=n;i++)
//        for(int j=1;j<=n+1;j++){
//            printf ("a[%d][%d]=",i,j);
//            scanf ("%f",&a[i][j]);
//        }
//}
//
//void xuatMang(float a[][size],int n){
//    for (int i=1;i<=n;i++){
//        printf ("\n");
//        for (int j=1;j<=n+1;j++)
//        {
//            printf ("%5.1f",a[i][j]);
//        }
//    } printf ("\n");
//}
//
//void change(float a[][size],float b[][size],float c[],int n)
//{
//    for (int i=1;i<=n;i++)
//        for (int j=1;j<=n;j++){
//       
//        if(j==i)
//        {
//            b[i][j]=0;
//        }
//         else b[i][j]=-a[i][j]/a[i][i];
//            
//        }
////    printf ("nhap vec to nghiem ban dau X(0):");
////            for (int i=1;i<n;i++){
////        printf ("c[%d]",i);
////        scanf ("%f",&c[i]);      }
//}
//
////float sum(float a[][size],int n)
////{ float s=0;
////    for (int i=1;i<=n;i++){
////        for (int j=1;j<=n;j++){
////            s=s+a[i][j];}
////        printf ("%fx%d",s,i);
////    }
////    return 0;    }
////
////void ruthe(float a[][size],int n)
////{
////    for (int i=1;i<=n;i++)
////    {
////        for (int j=1;j<=n;j++)
////          {
////              printf ("x%d=%f-%fx%f",i,a[i][n+1],sum(a,n));
////              printf ("\n");
////          }
////    }
////}
//
//
//main()
//{
//    float a[size][size];
//    float b[size][size];
//    float c[size];
//    int n;
//    printf ("nhap bac cua ma tran :");
//    scanf ("%d",&n); printf ("\n");
//    nhapMang(a,n);
//    xuatMang(a,n);
//    change(a,b,c,n);
//    xuatMang(b,n);
//    //ruthe(a,n);
//}
