////
////  bài tập lên bảng.cpp
////  HelloWorld
////
////  Created by Guest User on 12/09/2023.
////
////HÃY CÀI ĐẶT LỚP NGĂN XẾP SỬ DỤNG CẤP PHÁT ĐỘNG
//// maxsize , data ,
////đổi một số thập phân sang số thập lục phân
//#include <stdio.h>
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std ;
//
//class Stack{
//    public :
//    int maxsize ;
//    string data ;
//    stack<char> schar ;
//    
//    void exports() ;
//    void push (int x); // đẩy 1 phần tử vào trong ngăn xếp
//    void push_schar (char character) ;
//    void pop () ; // lấy 1 phần tử ra khỏi ngăn xếp
//    void top(); // lấy phần tử ở đỉnh của ngăn xếp
//    void size() ; // trả về số phần tử trong ngăn xếp
//    void empty() ; // check hàm rỗng hay không
//    
//    Stack(int maxsize , string data , stack<char> schar){
//        this-> maxsize = maxsize ;
//        this-> data = data ;
//        this-> schar = schar ;
//    }
//    
//    Stack(){
//        
//    }
//    
//    ~Stack(){
//        
//    }
//};
//
//void Stack::push (int x){ // đẩy 1 phần tử vào trong ngăn xếp
//    schar.push (x) ;
//}
//
//void Stack::push_schar (char character){ // đẩy char vào trong ngăn xếp
//    schar.push(character) ;
//}
//
//
//void  Stack::pop ()  { // lấy 1 phần tử ra khỏi ngăn xếp
//    schar.pop();
//}
//
//void Stack::top(){ // lấy phần tử ở đỉnh của ngăn xếp
//    cout << schar.top() << endl ;
//}
//
//void Stack::size() { // trả về số phần tử trong ngăn xếp
//    cout << "Số phần tử của ngăn xếp là : " << schar.size() <<endl ;
//}
//
//void Stack::empty() { // check hàm rỗng hay không
//    if(schar.empty()){
//        cout << "\nStack rỗng " << endl ;
//    }
//    else cout<< "\nStack không rỗng" ;
//}
//
//void Stack::exports(){
//    while (!(schar.empty())){
//        cout << schar.top() << "\t" ;
//        schar.pop() ;
//    }
//    cout << endl ;
//}
//
//void chuyen10sang2(Stack *A){
//    int a ;
//    cout << "Nhập số hệ thập phân : " ;
//    cin >> a ;
//    const int tam = a ;
//    do {
//        A -> push_schar(to_string(a % 2).at(0));
//        a = a/2 ;
//        
//    } while(!(a/2 == 0 && a%2 == 0));
//    
//    cout << "\nChuyển số " << tam << " sang số nhị phân : " ;
//    A->exports() ;
//}
//
//void chuyen10sang16(Stack *a){
//    int x ;
//    cout << "Nhập số ở hệ thập phân cần chuyển : " ;
//    cin >> x ;
//    int tam = x ;
//    do{
//        switch (x % 16) {
//            case 1:
//            case 2:
//            case 3:
//            case 4:
//            case 5:
//            case 6:
//            case 7:
//            case 8:
//            case 9: 
//               // cout << "Call here " << to_string(x % 16).at(0) << endl;
//                a -> push_schar(to_string(x % 16).at(0));
//                break;
//            case 10:
//                a -> push_schar('A');
//                break;
//            case 11:
//                a -> push_schar('B');
//                break;
//            case 12:
//                a -> push_schar('C');
//                break;
//            case 13:
//                a -> push_schar('D');
//                break;
//            case 14:
//                a -> push_schar('E');
//                break;
//            case 15:
//                a -> push_schar('F');
//                break;
//            default:
//                a->push_schar(x % 16);
//                break;
//        }
//        x = x / 16 ;
//    } while( x != 0);
//    
//    cout <<"Chuyển số "<< tam << " sang hệ thập lục phân : " ;
//    while(!(a->schar.empty())){
//        cout << a->schar.top();
//        a->schar.pop() ;
//    }
//    cout<< endl;
//}
//
//int main (){
//    Stack *A = new Stack ;
//    int option ;
//    do{
//        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
//        cout << "|1.Chuyển số hệ thập phân sang hệ nhị phân. " << endl ;
//        cout << "|2.Chuyển số hệ thập phân sang hệ thập lục phân. " << endl ;
//        cout << "|Mời nhập lựa chọn : " ;
//        cin >> option ;
//        cout << endl ;
//        switch (option){
//            case 1:
//                chuyen10sang2(A) ;
//                break ;
//            case 2 :
//                chuyen10sang16(A) ;
//                break ;
//                
//        }
//        
//        cout << "\nNhập 't' để thoát chương trình : " ;
//        getchar() ;
//    }while ( getchar () != 't') ;
//
//}
