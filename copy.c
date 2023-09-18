////
////  copy.c
////  HelloWorld
////
////  Created by Guest User on 15/05/2023.
////
//
//
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//#define MAX 100
//void nhap(int a[],int n){
//    for (int i=1;i<=n;i++){
//        printf("a[%d]",i);
//        scanf ("%d",&a[i]);
//    }
//}
//
//void xuat(int a[],int n){
//    for (int i=1;i<=n;i++){
//        printf ("%d",a[i]);
//    }
//}
//
//int getRandom(int min,int max,int r){
//    return  r = min + rand() % (max + 1 - min);
//}
//
//main (){
//    int min,max;
//    int rand(void);
//    int n;
//    int r;
//    printf ("moi nhap khoang [min,max]=");
//    if(min>0&&min<max<100&&n<max-min){
//        scanf ("%d %d ",&min,&max);}
//    else printf ("chu y ! min>0,min<max<1000,n<max-min !!");
//    printf ("nhap n= ");
//    scanf ("%d",&n);
//    printf ("danh sach X la :");
//    for(int i=1;i<=n;i++){
//        printf (" %4.1d",getRandom(1,n,r));
//    }
//    printf ("danh sach Y la:");
//    //for (int i=1;i<=n;i++)
//    return 0;
//}
//////vd2: a, Khai baó cây NPTK vowis khoá kiểu kí tự
//////b, vẽ cây NTNK với thứ tự nhap : E A K B H Z
//////C, Viết hàm nhập thêm kí tự x và vào cây T
////// giải
////// a,
////struct Node {
////char Key;
////struct Node *Left;
////struct Node *Right ;
////};
////typedef struct Node *NODEPTR ;
////c,
////void insert ( char x,NODEPTR &T){
////    NODEPTR p;
////    p=(NODEPTR)malloc (sizeof(struct Node));
////    p->key=x;
////    p->left=p->Right =NULL ;
////    if (T==NULL) T=p;
////    else if (x<T->Key) insert (x,T->Left);
////    else insert (x,T->Right);
////}
//
//
//#include "stdio.h"
//#include <math.h>
//#include "stdbool.h"
//
//class phu_nu {
//    public :
//    
//}
