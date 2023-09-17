//
//  bài tập test lthđt.cpp
//  HelloWorld
//
//  Created by Guest User on 14/09/2023.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std ;
class Date{
    public :
    int day ;
    int month ;
    double year ;
    void imports();
    void exports();
    void find_next_day(Date *x);
    void find_yesterday(Date *x) ;
    
    Date(){
        
    }
    
    Date(int ngay , int thang , double nam){
        day = ngay ;
        month = thang ;
        year = nam ;
    }
    
    ~Date (){
        
    }
    
};

void Date::imports(){
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
    cout << "Nhập ngày : " ;
    cin >> day ;
    cout << "Nhập tháng : " ;
    cin >> month ;
    cout << "Nhập năm : " ;
    cin >> year ;
    cout <<"\n~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
}

void Date::exports(){
    cout << "\n+-----------------------\n";
    cout << "Ngày vừa nhập : "<<day << endl ;
    cout << "Tháng vừa nhập : "<<month << endl ;
    cout << "Năm vừa nhập : "<<year<< endl ;
    cout << "+-----------------------\n" ;
}

void Date::find_next_day(Date *x){
    do {
        cout << "Nhập ngày hiện tại : ";
        cin >> x->day ;
        if( x->day >=32) cout << "Nhập lại ngày !!" ;
    }while(x->day >=32);
    
    do {
        cout << "Nhập tháng hiện tại : " ;
        cin >> x->month ;
        
        switch(x->month) {
            case 1:
            case 3:
            case 5:
            case 8:
            case 10:
            case 12:
                cout << "Nhập năm hiện tại : ";
                cin >> x->year ;
                if( x->day <= 30){
                    cout << "Ngày tiếp theo là : " << x->day + 1 << endl ;
                    cout << "Tháng : " << x->month << endl ;
                    cout << "Năm : " << x->year << endl ;
                }
                if ( x->day == 31 ){
                    cout << "Ngày tiếp theo là : "<< 1 << endl ;
                    if( x->month == 1 || x->month == 3 || x->month==5 || x->month == 8 || x->month == 10){
                        cout << "Tháng : "<< x->month + 1 << endl ;
                        cout << "Năm : " << x->year << endl ;
                    }
                    if( x->month == 12){
                        cout << "Tháng : " << 1 << endl ;
                        cout << "Năm : " << x->year + 1 << endl ;
                    }
                }
                break ;
            case 4:
            case 6:
            case 7:
            case 9:
            case 11:
                cout <<"Nhập năm hiện tại : " ;
                cin >> x->year ;
                if ( x->day <= 29){
                    cout << "Ngày tiếp theo là : " << x->day + 1 << endl ;
                    cout << "Tháng : " << x->month << endl ;
                    cout << "Năm : " << x->year << endl ;
                }
                if ( x->day == 30 ){
                    cout << "Ngày tiếp theo là : "<< 1 << endl ;
                    cout << "Tháng : " << 1 << endl ;
                    cout << "Năm : " << x->year + 1 << endl ;
                }
                break ;
            case 2 :
                cout << "Nhập năm hiện tại : ";
                cin >> x->year ;
                
                if((int (x->year) % 400 == 0) or (int(x->year) % 4 == 0 and int (x->year) % 100 != 0 and int(x->year) % 400 !=0)){
                    cout << " Năm "<< x->year << " là năm nhuận "<< endl ;
                    if( x->day <=28){
                        cout << " Ngày tiếp theo là : " << x->day + 1 << endl ;
                        cout << "Tháng : " << x->month << endl ;
                        cout << "Năm : " << x->year << endl ;
                    }
                    
                    if( x->day == 29){
                        cout << " Ngày tiếp theo là : " << 1 << endl ;
                        cout << "Tháng : " << x->month + 1 << endl ;
                        cout << "Năm : " << x->year << endl ;
                    }
                }
                
                else {
                    cout << "Năm " << x->year << " không phải là năm nhuận "<< endl ;
                    
                    if( x->day <=27){
                        cout << " Ngày tiếp theo là : " << x->day + 1 << endl ;
                        cout << "Tháng : " << x->month << endl ;
                        cout << "Năm : " << x->year << endl ;
                    }
                    
                    if( x->day == 28){
                        cout << " Ngày tiếp theo là : " << 1 << endl ;
                        cout << "Tháng : " << x->month + 1 << endl ;
                        cout << "Năm : " << x->year << endl ;
                    }
                    
                }
                break ;
        }
        if( x->month >12) {
            cout << "Nhập lại tháng ( lưu ý : tháng bé hơn 13 )" ;
            
        }
    }while(x->month > 12) ;
}

void Date::find_yesterday(Date *x){
    do {
        cout << "Nhập ngày hiện tại : " ;
        cin >> x->day ;
        if ( x->day >= 32) cout << "Nhập lại ngày !!" ;
    }while( x->day >=32 );
    do {
        cout << "Nhập tháng hiện tại : " ;
        cin >> x->month ;
        switch( x->month){
            case 1:
            case 3:
            case 5:
            case 8:
            case 10:
            case 12 :
                cout << "Nhập năm hiện tại : " ;
                cin >> x->year ;
                if ( x->day <=31 && x->day > 1){
                    cout << "Ngày hôm qua là : " << x->day -1 << endl ;
                    cout << "Tháng : " << x->month << endl ;
                    cout << "Năm : " << x->year << endl ;
                }
                
                if( x->day == 1 && ( x->month != 1 && x->month != 3)){
                    
                    cout << "Ngày hôm qua là : " << 30 << endl ;
                    cout << "Tháng : " << x->month - 1 << endl ;
                    cout << "Năm : " << x->year << endl ;
                }
                
                if( x->day == 1 && x->month == 1){
                    
                    cout << "Ngày hôm qua là : " << 31 << endl ;
                    cout << "Tháng : " << 12 << endl ;
                    cout << "Năm : " << x->year - 1 << endl ;
                }
    
                if( x->day == 1 && x->month == 3){
                    if((int (x->year) % 400 == 0) or (int(x->year) % 4 == 0 and int (x->year) % 100 != 0 and int(x->year) % 400 !=0)){
                        cout << "Năm " << x->year << " là năm nhuận." << endl ;
                        cout << "Ngày hôm qua là : " << 29 << endl ;
                        cout << "Tháng : " << x->month - 1 << endl ;
                        cout << "Năm : " << x->year << endl ;
                    }
                    else {
                        cout << "Năm " << x->year << " không phải là năm nhuận." << endl ;
                        cout << "Ngày hôm qua là : " << 28 << endl ;
                        cout << "Tháng : " << x->month - 1 << endl ;
                        cout << "Năm : " << x->year << endl ;
                    }
                }
                break ;
                
            case 2:
            case 4:
            case 6:
            case 7:
            case 9:
            case 11:
                cout << "Nhập năm hiện tại : " ;
                cin >> x->year ;
                if ( x->day <=30 && x->day > 1){
                    cout << "Ngày hôm qua là : " << x->day -1 << endl ;
                    cout << "Tháng : " << x->month << endl ;
                    cout << "Năm : " << x->year << endl ;
                }
                if ( x->day == 1){
                    cout << "Ngày hôm qua là : " << 31 << endl ;
                    cout << "Tháng : " << x->month - 1 << endl ;
                    cout << "Năm : " << x->year << endl ;
                }
                break ;
            }
        
        if( x->month > 12) cout << "Nhập lại tháng !!" ;
    }while (x->month > 12);
}

int main (){
    Date *x = new Date ;
    Date *y = new Date(25 , 7 , 2023) ;
    x->imports() ;
    x->exports() ;
    x->find_next_day(x);
    x->find_yesterday(x) ;
    y->exports() ;
    y->find_next_day(y);
    y->find_yesterday(x);
}
