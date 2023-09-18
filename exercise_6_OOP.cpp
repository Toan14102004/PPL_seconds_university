////
////  BT6_lthđt.cpp
////  HelloWorld
////
////  Created by Guest User on 03/09/2023.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std ;
//struct học_sinh {
//    string họ_tên ;
//    int toán ;
//    int văn ;
//};
//typedef struct học_sinh hs ;
//istream &operator >> (istream &in , hs &A){
//    cout << " mời nhập họ và tên học sinh A : " ;
//    getline ( in , A.họ_tên ) ;
//    fflush (stdin );
//    cout << " mời nhập điểm toán của học sinh A :" ;
//    in >> A.toán ;
//    cout << " mời nhập điểm văn của học sinh A :" ;
//    in >> A.văn ;
//    return in ;
//}
//
//ostream &operator << ( ostream &out , hs A){
//    out << A.họ_tên << endl;
//    out << A.toán << endl ;
//    out << A.văn << endl ;
//    return out ;
//}
//
//float tinh (hs A){
//    float điểm_tb ;
//    điểm_tb = (A.toán + A.văn )*0.5;
//    cout << " \n" ;
//    return điểm_tb ;
//}
//
//void xếp_loại ( hs A){
//    if (tinh(A) >= 8.0) cout << " học lực : giỏi ";
//    if (tinh(A) < 8.0 && tinh (A)>= 7.0) cout << " học lực : khá ";
//    if (tinh (A)< 7.0 &&tinh (A)>= 5.0 ) cout << " học lực : trung bình" ;
//    if (tinh (A)< 5.0) cout << " học lực : yếu " ;
//}
//
//int main (){
//    hs A ;
//    cin >> A;
//    cout << A ;
//    cout << " điểm trung bình là :" << tinh (A) ;
//    xếp_loại (A) ;
//    
//}
