////
////  Bài tập 1 lthđt.cpp
////  HelloWorld
////
////  Created by Guest User on 30/08/2023.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std ;
//struct PHANSO {
//    int tuso ;
//    int mauso ;
//};
//typedef struct PHANSO ps ;
//istream &operator >> ( istream &in ,ps &x) {
//    cout << "moi nhập tử số : " ;
//    in >> x.tuso ;
//    cout << endl ;
//    cout << " moi nhap mẫu số : " ;
//    in >> x.mauso ;
//    cout << endl ;
//    return in ;
//}
//
//ostream &operator << (ostream &out , ps x) {
//    out << x.tuso<<"/"<<x.mauso ;
//    return out ;
//}
//
//ps operator + (ps x , ps y){
//    ps tam ;
//    tam.tuso = x.tuso * y.mauso + y.tuso * x.mauso ;
//    tam.mauso = x.mauso * y.mauso ;
//     return tam ;
//}
//
//ps operator - ( ps x, ps y){
//    ps tam ;
//    tam.tuso = x.tuso * y.mauso - y.tuso *x.mauso ;
//    tam.mauso = x.mauso * y.mauso ;
//    return tam ;
//}
//
//ps operator * ( ps x , ps y){
//    ps tam ;
//    tam.tuso = x.tuso * y.tuso ;
//    tam.mauso = x.mauso * y.mauso ;
//    return tam ;
//}
//
//ps operator / (ps x, ps y){
//    ps tam ;
//    tam.tuso = x.tuso * y.mauso ;
//    tam. mauso = x. mauso * y.tuso ;
//    return tam ;
//}
//
//int find_ucln ( int a, int b) {
//    int ucln ;
//    if( b==0)
//        return a ;
//    return find_ucln(b,a%b) ;
//}
//
//ps rut_gon_ps ( ps x ){
//    ps tam ;
//    tam.tuso = x.tuso / find_ucln (x.tuso , x.mauso);
//    tam.mauso = x.mauso / find_ucln(x.tuso , x.mauso);
//    return tam ;
//}
//
//int main (){
//    ps x , y ;
//    ps tong ;
//    cin >> x ;
//    cout << x << endl ;
//    cin >> y ;
//    cout << y << endl ;
//    cout << " Tổng của 2 phân số là : " << rut_gon_ps(x+y) << endl ;
//    cout << " Hiệu của 2 phân số là : " << rut_gon_ps(x-y) << endl ;
//    cout << " Tích của 2 phân số là : " << rut_gon_ps(x*y) << endl ;
//    cout << " Thương của 2 phân số là : " << rut_gon_ps(x/y) << endl ;
//    cout << endl ;
//
//}
//
//
