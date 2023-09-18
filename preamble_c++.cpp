////
////  Mở_Đầu_c++.cpp
////  HelloWorld
////
////  Created by Guest User on 15/08/2023.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <time.h>
//using namespace std;
//int main (){
//    int *p ;
//    int n;
//    int min,max;
//    int tam;
//    p= new int [n];
//    cout<< "nhap n : " ;
//    cin>> n ;
//    cout<<endl ;
//    
////    for (int i=0 ;i<n;i++){
////        cout<<"Mời bạn nhập giá trị ô thứ "<< i << ":" ;
////        cout<<" ";
////        cin>> *(p+i);
////        cout<<endl;
////    }
//    srand((unsigned)time(NULL));
//    for(int i=0;i<n;i++){
//        *(p+i)= rand()%99 +1;
//    }
//    for (int i=0;i<n;i++){
//        cout<<*(p+i) << "\t";
//        
//    }
//    for (int i=0;i<n;i++){
//        for (int j=i+1;j<n;j++){
//            if (*(p+i)> *(p+j)){
//                swap (*(p+i),*(p+j));
//            }
//        }
//    }
//    cout<< "\n";
//    cout <<"sắp xếp từ bé đến lớn : ";
//    for (int i=0;i<n;i++){
//        cout<< *(p+i) << "\t";
//        
//    }
//    for (int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(*(p+i)<*(p+j)){
//                swap(*(p+i),*(p+j));
//            }
//        }
//    }
//    cout<< "\n";
//    cout<<" sắp xếp từ lớn đến bé : ";
//    for (int i=0;i<n;i++){
//        cout<<*(p+i) << "\t";
//        
//    }
//}
//
