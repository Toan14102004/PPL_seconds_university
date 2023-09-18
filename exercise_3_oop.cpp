//#include <stdio.h>
//#include <iostream>
//using namespace std ;
//
//struct DONTHUC {
//    float he_so ;
//    char ten_bien ;
//    int so_bac ;
//};
//typedef struct DONTHUC DT;
//
//istream& operator >> ( istream &in , DT& A){
//    cout << " nhập tên biến : ";
//    in >> A.ten_bien ;
//    cout <<" nhập số mũ của đơn thức : ";
//    in>> A.so_bac ;
//    cout <<" nhập hệ số :" ;
//    in >> A.he_so ;
//    return in ;
//}
//
//ostream& operator << ( ostream &out , DT A){
//    out << " ĐƠN THỨC : " << A.he_so << A.ten_bien << "^(" << A.so_bac <<")" << endl ;
//    return out ;
//}
//
//DT operator + ( DT A , DT B ){
//    DT tam ;
//    tam.he_so = A.he_so + B.he_so ;
//    tam.ten_bien = A.ten_bien ;
//    tam.so_bac = A.so_bac ;
//    return tam ;
//}
//
//DT operator - ( DT A , DT B ){
//    DT tam ;
//    tam.he_so = A.he_so - B.he_so ;
//    tam.ten_bien = A.ten_bien ;
//    tam.so_bac = A.so_bac ;
//    return tam ;
//}
//
//DT operator * ( DT A , DT B ){
//    DT tam ;
//    tam.he_so = A.he_so * B.he_so ;
//    tam.so_bac = A.so_bac + B.so_bac ;
//    tam.ten_bien = A.ten_bien ;
//    return tam ;
//}
//
//DT operator / ( DT A , DT B ){
//    DT tam ;
//    tam.he_so = A.he_so / B.he_so ;
//    tam.so_bac = 0 ;
//    tam.ten_bien = 1 ;
//    return tam ;
//}
//
//float tinh ( DT A, int a) {
//    float s = A.he_so ; ;
//    for( int i = 1 ; i <= A.so_bac ; i++) {
//        s = s * a ;
//    }
//    return s ;
//}
//
//DT dao_ham (DT A){
//    DT tam ;
//    if ( A.so_bac != 0){
//        tam.he_so = A.he_so * A.so_bac ;
//        if( A.so_bac != 1){
//            tam.ten_bien = A.ten_bien ;
//            tam.so_bac = A.so_bac - 1 ;
//        }
//    }
//    if( A.so_bac == 0){
//        tam.ten_bien = 0 ;
//        tam.he_so = 0 ;
//        tam.so_bac = 0 ;
//    }
//    return tam ;
//}
//
//DT nguyen_ham (DT A){
//    DT tam ;
//    tam.he_so = A.he_so / ( A.so_bac + 1 );
//    tam.ten_bien = A.ten_bien ;
//    tam.so_bac = A.so_bac + 1 ;
//    return tam ;
//}
//
//DT operator < ( DT A, DT B){
//    DT tam ;
//    
//    return tam ;
//}
//
//int main (){
//    DT A ;
//    DT B;
//    cin >> A ;
//    cout << A ;
//    cin >> B ;
//    cout << B ;
//    cout << " tổng hai đơn thức A và B là :"<< A + B << endl;
//    cout << " nguyên hàm của đơn thức A là : " << nguyen_ham (A) << endl;
//    cout << " đạo hàm của đơn thức A là : " << dao_ham (A) << endl;
//    cout << " giá trị của đơn thức A tại giá trị 2 là : " << tinh (A , 2) << endl ;
//    cout << "\n" ;
//}
