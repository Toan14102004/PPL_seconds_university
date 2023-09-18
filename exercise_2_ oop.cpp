//
//#include <stdio.h>
//#include <iostream>
//
//using namespace std ;
//struct SOPHUC {
//    int real ;
//    int imagine ;
//} ;
//typedef struct SOPHUC sp ;
//
//istream& operator >> ( istream &in , sp & x) {
//    cout << " mời bạn nhập phần thực của số phức : " ;
//    in >> x.real ;
//    cout << endl ;
//    cout << " mời bạn nhập phần ảo của số phức : " ;
//    in >> x.imagine ;
//    cout << endl ;
//    return in;
//}
//
//ostream& operator << ( ostream &out , sp x) {
//    out << " phần thực của số phức là : " << x.real << endl;
//    out << " phần ảo của số phức là : " << x.imagine << endl;
//    out << " số phức là : "<< x.real << "  +  " << x.imagine << "i" ;
//    return out ;
//}
//
//sp operator + ( sp x, sp y){
//    sp tam ;
//    tam.real = x.real + y.real ;
//    tam.imagine = x.imagine + y.imagine ;
//    return tam ;
//}
//
//int main (){
//    sp x ,y ;
//    cin >> x ;
//    cout << x << endl;
//    cin >> y ;
//    cout << y << endl;
//}
