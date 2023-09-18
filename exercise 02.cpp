////
////  bài tập 02.cpp
////  HelloWorld
////
////  Created by Guest User on 12/09/2023.
////Thiết kế class thể hiện một đối tượng Học sinh trong thực tế
////Các thuộc tính và data type tương ứng
////mã học sinh (số nguyên)
////tên (chuỗi kí tự)
////tuổi (số nguyên)
////Quê quán (chuỗi kí tự)
////chiều cao (số thực)
////cân nặng (số thực)
////điểm trung bình 8môn học Toán, Lý, Hoá, Văn, Anh, Sinh, Sử, Địa (danh sách các số thực)
////Phương thức
////giới thiệu bản thân gồm tên, tuổi, quê quán
////show bảng điểm của 8 môn học
////show học lực, nếu trung bình 8 môn trên 8 là giỏi, từ 5 đến 8 là khá và còn lại là trung bình
////Tự tạo hàm main để test các phương thức với kịch bản sau:
////Khai báo và khởi tạo một object thuộc kiểu Học sinh
////Thực hiện gọi các phương thức của đối tượng trên
//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//using namespace std ;
//class Student {
//    public :
//    string ho_ten ;
//    int ma_hs[10] ;
//    int tuoi ;
//    string que_quan ;
//    float chieu_cao ;
//    float can_nang ;
//    
//    Student(string name,int yearold,string address, float hight , float weigh){
//       ho_ten = name ;
//        tuoi = yearold ;
//        que_quan = address ;
//        chieu_cao = hight ;
//        can_nang = weigh ;
//    }
//    
//    ~Student(){
//        cout << " xoá 1 học sinh." ;
//    }
//    
//    void gioi_thieu(bool sex) ;
//    void show_bang_diem (string name) ;
//    string show_hluc (string name);
//    
//    private :
//    float diem[8];
//    float diem_tb ;
//    
//};
//
//void Student:: gioi_thieu(bool sex){
//    cout << " Họ và tên : "<< ho_ten << endl;
//    cout << " Tuổi : " << tuoi << endl;
//    if( sex){
//        cout << "Giới tính : Nữ " << endl ;
//    } else {
//        cout << "Giới tính : nam " << endl ;
//    }
//    cout << " Quê quán : " << que_quan << endl;
//}
//
//void Student::show_bang_diem (string name){
//    string namesubject[10] ;
//    for( int i = 0 ; i< 8 ; i++){
//        cout << " Nhập tên môn học : " ;
//        cin >> namesubject[i] ;
//        cout << " Nhập điểm : " ;
//        cin >> diem[i] ;
//    }
//    cout << " \nBảng điêm của " + name + " là : " << endl ;
//    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
//    for( int i = 0 ; i< 8 ; i++){
//        cout << namesubject[i] + " : " << diem[i] << endl;
//    }
//    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
//}
//
//string Student:: show_hluc (string name){
//    string hluc ;
//    float tong ;
//    tong = 0;
//    for ( int i = 0 ; i < 8 ; i++ ){
//        tong += diem[i] ;
//    }
//    diem_tb = tong/float(8);
//    cout << " Điểm trung bình của "+ name + " là : " << diem_tb << endl;
//    if ( diem_tb >= 8.0){
//        cout << " học lực giỏi.\n" ;
//    }
//    if ( diem_tb < 8.0 && diem_tb > 5.0){
//        cout << " học lực khá.\n" ;
//    }
//    if ( diem_tb < 5.0){
//        cout << " học lực trung bình.\n" ;
//    }
//    return hluc ;
//}
//
//int main(){
//    Student *nguyen = new Student("Nguyen Trung Nguyen" , 17 , "Nghe An" ,1.7, 49) ;
//    Student *vy = new Student("Nguyen Yen Vy" , 15 , "Da Nang" ,1.7, 49) ;
//    nguyen->gioi_thieu(false) ;
//    vy->gioi_thieu(true);
//    nguyen->show_bang_diem("Nguyen Trung Nguyen") ;
//    nguyen->show_hluc("Nguyen Trung Nguyen") ;
//    vy->show_bang_diem("Nguyen Yen Vy") ;
//    vy->show_hluc("Nguyen Yen Vy");
//}
