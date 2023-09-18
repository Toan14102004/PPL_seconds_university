////  Created by Guest User on 01/09/2023.
////
////Bài 1.
////Cài đặt struct Date gồm các trường ngày, tháng, năm và định nghĩa các phép toán ++, -- để tìm ngày hôm trước, ngày hôm sau; phép toán >>, << để nhập, xuất ngày; toán tử <, >, ==, != giữa hai ngày. Viết chương trình minh họa sử dụng struct Date.
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <string.h>
//#include <cstdio>
//using namespace std ;
//
//struct DATE {
//    int day ;
//    int month ;
//    int year ;
//};
//typedef DATE date ;
//
//istream &operator >> ( istream &in , date &x ){
//    cout << "\n\n---------------------------------------\n" ;
//        cout << " mời nhập ngày : " ;
//        in >> x.day ;
//        do {
//            if (x.day >=32){
//                cout << " xin mời nhập lại ngày !!! \n" ;
//                cout << " mời nhập ngày : " ;
//                in >> x.day ;
//            }
//        }while ( x.day >=32);
//            
//        if (x.day <=31){
//            cout << " xin mời nhập tháng : " ;
//            in >> x.month ;
//                switch ( x.month ){
//                    default :
//                        do {
//                            cout << "Vui long nhap cac so tu 1 den 12\n";
//                            cout << " mời nhập lại tháng :" ;
//                            in >> x.month ;
//                        }while ( x.month > 12);
//                    case 1:
//                    case 3:
//                    case 5:
//                    case 7:
//                    case 8:
//                    case 10:
//                    case 12:
//                        do{
//                            
//                            if ( x.day <=31 ){
//                                cout << "mời nhập năm :" ;
//                                in >> x.year ;
//                            }
//                            else {
//                                cout << " mời nhập lại ngày !!! \n" ;
//                                cout << " mời nhập ngày : " ;
//                                in >> x.day ;
//                                cout << "mời nhập năm :" ;
//                                in >> x.year ;
//                            }
//                        } while (x.day>31);
//                                        break ;
//                        
//                    case 4:
//                    case 6:
//                    case 9:
//                    case 11:
//                        do {
//                            
//                            if (x.day<=30){
//                                cout << "mời nhập năm : " ;
//                                in >> x.year ;
//                            }
//                            else {
//                                cout << " xin mời nhập lại ngày !!! \n" ;
//                                cout << " mời nhập ngày : " ;
//                                in >> x.day ;
//                                cout << "mời nhập năm :" ;
//                                in >> x.year ;
//                            }
//                        } while ( x.day >30 );
//                                        break ;
//                        
//                    case 2 :
//                        do {
//                            
//                            if ( x.day <=28){
//                                cout << "mời nhập năm : " ;
//                                in >> x.year ;
//                            }
//                            else {
//                                cout << " xin mời nhập lại ngày !!! \n" ;
//                                cout << " mời nhập ngày : " ;
//                                in >> x.day ;
//                                cout << " mời nhập năm :" ;
//                                in >> x.year ;
//                            }
//                        } while ( x.day > 28);
//                                          break ;
//
//            }
//        }
//        return in ;
//    }
//
//ostream &operator << ( ostream &out ,const date &x){
//    cout << "\n---------------------------------------\n\n" ;
//    out << " ngày vừa nhập là : " << x.day << endl ;
//    out << " tháng vừa nhập là : " << x.month << endl;
//    out << " năm vừa nhập là : " << x.year << endl ;
//    return out ;
//}
//
//date operator ++ ( date x){
//    cout << "\n---------------------------------------\n\n" ;
//    if (x.month == 2 ){
//        if ( x.day < 28){
//            x.day = x.day + 1 ;
//        }
//        if(x.day==28) {
//            x.day = 1;
//            x.month = x.month + 1 ;
//        }
//    }
//    
//    if (x.month == 1||x.month == 3||x.month == 5||x.month == 7||x.month == 8||x.month == 10){
//        if ( x.day < 31) {
//                x.day = x.day + 1 ;
//        }
//        else {
//                x.day = 1 ;
//                x.month = x.month + 1 ;
//            }
//        }
//        
//    if ( x.month == 4||x.month == 6||x.month == 9||x.month == 11){
//        if ( x.day < 30) {
//                x.day = x.day + 1 ;
//        }
//        else {
//                x.day = 1 ;
//                x.month = x.month + 1 ;
//            }
//        }
//        
//    if ( x.month == 12){
//        if ( x.day < 31){
//                x.day = x.day + 1 ;
//        }
//        else {
//                x.day = 1 ;
//                x.month = 1 ;
//                x.year = x.year + 1 ;
//            }
//        }
//    cout << " ngày mai là : " << x.day  << endl;
//    cout << "  tháng : " << x.month << endl;
//    cout << " năm : " << x.year << endl;
//        return x ;
//    }
//
//date operator -- ( date x){
//    cout << "\n---------------------------------------\n\n" ;
//    if( x.day == 1){
//        switch (x.month) {
//            case 1:
//                x.day = 31 ;
//                x.month = 12 ;
//                x.year = x.year - 1 ;
//                break;
//            case 3:
//                x.day = 28 ;
//                x.month = 2 ;
//                break;
//            case 2:
//            case 4:
//            case 6:
//            case 9:
//            case 11:
//                x.day = 31 ;
//                x.month = x.month - 1 ;
//                break;
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//                x.day = 30 ;
//                x.month = x.month - 1 ;
//                break;
//                
//            default:
//                break;
//        }
//        return x;
//    }
//    else {
//        x.day = x.day - 1 ;
//    }
//    cout << " ngày hôm qua là : " << x.day << endl ;
//    cout << "  tháng : " << x.month << endl ;
//    cout << " năm : " << x.year << endl ;
//        return x ;
//    }
//
//bool operator < (const date &a, const date &b) {
//    if ( a.year < b.year)
//        return true ;
//    else if (a.year > b.year )
//        return false ;
//    
//    if ( a.month < b.month)
//        return true ;
//    else if (a.month > b.month )
//        return false ;
//    
//    return a.day < b.day ;
//}
//
//bool operator > (const date &a, const date &b) {
//    if ( a.year > b.year)
//        return true ;
//    else if (a.year < b.year )
//        return false ;
//    
//    if ( a.month > b.month)
//        return true ;
//    else if (a.month < b.month )
//        return false ;
//    
//    return a.day > b.day ;
//}
//
//bool operator == ( const date &a , const date &b){
//    return a.day == b.day && a.month == b.month && a.year == b.year ;
//}
//
//bool operator != ( const date& a, const date& b){
//    return !( a.day == b.day && a.month == b.month && a.year == b.year);
//}
//
//int main (){
//    date x ;
//    date a , b ;
//    cout << "* LƯU Ý : nhập ngày (< 31) , tháng (<=12)" << endl ;
//    cin >> x ;
//    cout << x ;
//    ++ x ;
//    -- x ;
//    cin >> a ;
//    cin >> b ;
//    cout << "\n---------------------------------------\n" ;
//    if( a < b) cout << " ngày " << a.day << " bé hơn ngày " << b.day << endl ;
//    else cout << " ngày " << a.day << " không bé hơn ngày " << b.day << endl ;
//    cout << "--------------------------------------\n" ;
//    if( a > b) cout << " ngày " << a.day << " lớn hơn ngày " << b.day << endl ;
//    else cout << " ngày " << a.day << " không lớn hơn ngày " << b.day << endl ;
//    cout << "---------------------------------------\n" ;
//    if ( a==b) cout << " ngày " << a.day << " bằng ngày " << b.day << endl ;
//    else cout << " ngày " << a.day << " không bằng ngày " << b.day << endl ;
//    cout << "---------------------------------------\n" ;
//    if ( a != b) cout << " ngày " << a.day <<" khác ngày " << b.day << endl;
//    cout << "---------------------------------------\n" ;
//    
//}
