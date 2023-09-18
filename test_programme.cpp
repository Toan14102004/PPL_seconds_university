////
////  test_chương_trình.cpp
////  HelloWorld
////
////  Created by Guest User on 24/08/2023.
////
//
////#include <stdio.h>
////#include <iostream>
////#include <iomanip>
////using namespace std ;
////typedef int (*pheptinh)(int , int );
////void show( char *str){
////    cout << str << endl ;
////}
////int tong(int a, int b){
////    return a + b ;
////}
////int hieu(int a , int b){
////    return a - b ;
////}
////int tich(int a , int b){
////    return a * b ;
////}
////int tinhtoan( int a, int b, pheptinh tinh){
////    return tinh(a,b);
////}
////int main (){
////    int x = 9 , y = 8 ;
////    int *p ;
////    int *q = &y ;
////    p = &x ;
////    cout << " địa chỉ con trỏ p : "<<p << endl;
////    cout << " địa chỉ x : "<< &x <<endl ;
////    cout << " giá trị của p = "<< *p << endl ;
////
//////    ++p ;
//////    cout << " địa chỉ p sau : "<< p << endl ;
//////    cout << " địa chỉ x sau : "<< &x << endl ;
////    p = q ;
////    cout << " giá trị của p = "<< *p << endl ;
////    cout << " giá trị của q = "<< *q << endl ;
////    cout << " địa chỉ của q : "<< q << endl ;
////    cout << " địa chỉ của p : "<< p << endl ;
////    cout << " địa chỉ x : "<< &x <<endl ;
////    int (*B)[3]={{1,2,3},{4,5,6}};
////    int A[]= { 9,8,7,5};
////    int *p=A ;
//    //int **q = B ;
////    int A[] = { 1,2,3,9,8,5,4,2,8,0};
////    int l = sizeof (A)/ sizeof (int);
////    cout << l << endl ;
////    int S = tinhtoan (x,y,tong);
////    cout << S << endl ;
////    int H = tinhtoan (x,y,hieu);
////    cout << H << endl ;
////    int T = tinhtoan(x,y,tich);
////    cout << T << endl ;
////    int p;
////    int A[] = { 1,2,4};
////    for ( int j= 1; j< 4 ;j++){
////        p = j++ ;
////        cout << p << endl ;
////    }
////    int m = 8 ;int A[4] ;
////    int *q =new int[8];
////    for ( int i=0 ; i< m ; i++){
//////        A[i]= i ;
//////        cout << A[i] << " " ;
////        cout <<" i = "<< i << endl ;
////        *(q + i)= i++ ;
////        cout <<" i = "<< i << endl ;
////        cout << *(q + i)<<endl ;
////
////    }
////    int* A = new int [4] ;
////    A[0] = 2 ; A[1]= 5 ; A[2]=1 ;A[3]=8 ;
////    int *P = A + 2 ;
////    cout << *P << endl;
////    cout << *(A + 3)  << endl;
////}
//#include<stdio.h>
//
//
//void swap(int &a, int &b)
//{
//    int t = a;
//    a = b;
//    b = t;
//}
//
//
//int partition (int arr[], int low, int high)
//{
//    int pivot = arr[high];    // pivot
//    int left = low;
//    int right = high - 1;
//    while(true){
//        while(left <= right && arr[left] < pivot) left++;
//        while(right >= left && arr[right] > pivot) right--;
//        if (left >= right) break;
//        swap(arr[left], arr[right]);
//        left++;
//        right--;
//    }
//    swap(arr[left], arr[high]);
//    return left;
//}
//
///* Hàm thực hiện giải thuật quick sort */
//void quickSort(int arr[], int low, int high)
//{
//    if (low < high)
//    {
//        /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
//         và là phần tử chia mảng làm 2 mảng con trái & phải */
//        int pi = partition(arr, low, high);
//
//        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//
///* Hàm xuất mảng */
//void printArray(int arr[], int size)
//{
//    int i;
//    for (i=0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("n");
//}
//
//
//int main()
//{
//    int arr[] = {10, 80, 30, 90, 40, 50, 70};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    quickSort(arr, 0, n-1);
//    printf("Sorted array: ");
//    printArray(arr, n);
//    return 0;
//}
//#include <stdio.h>
//#include <iostream>
//#include <stack>
//using namespace std ;
//
//int main (){
//    stack<string> str ;
//    
//}
