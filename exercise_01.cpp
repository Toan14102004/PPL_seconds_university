////
////  Bài tập 01.cpp
////  HelloWorld
////
////  Created by Guest User on 12/09/2023.
////
////Thiết kế đối tượng lớp học
////Dựa trên đối tượng học sinh ở bài 02.01, tiếp tục phát triển thêm để thiết kế đối tượng lớp học trong thực tế
////Thuộc tính:
////Mã lớp - string (VD: 10A5)
////Danh sách học sinh - mảng/vector các đối tượng học sinh
////Lớp trưởng - con trỏ tới đối tượng học sinh
////Số lớp học có trong trường
////Phương thức:
////thêm 1 học sinh vào lớp
////Xoá 1 học sinh khỏi lớp (xoá theo mã học sinh)
////Sửa thông tin của học sinh
////Thiết lập lớp trưởng cho lớp
////In ra số lớp có trong trường
////Tự tạo hàm main để test các phương thức. Lưu ý: các đối tượng cần cấp phát động
//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//#include <vector>
//using namespace std ;
//
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
//    cout << " Bảng điêm của " + name + " là : \n" << endl ;
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
//class CLASS {
//    public :
//    string ma_lop ;
//    vector<Student> ds_hocsinh ;
//    Student* lop_truong ;
//    int so_lop ;
//    
//    CLASS(string id_lop ){
//        ma_lop = id_lop ;
//        so_lop ++ ;
//    }
//    ~CLASS(){
//        
//    }
//    
//    void them_1_hs (Student* news);
//    void xoa_1_hs ();
//    void sua_thong_tin_hs ();
//    Student* bau_lop_truong();
//    int tong_so_lop ();
//    
//};
//
//void CLASS::them_1_hs (Student* hs ){
//    ds_hocsinh.push_back(*hs);
//}
//
//void CLASS::xoa_1_hs (){
//    Student *news ;
//    cout << " nhập tên học sinh muốn xoá : " ;
//    cin >> news->ho_ten ;
////    cout << " nhập mã học sinh muốn xoá : " ;
////    cin >> news->ma_hs ;
//    cout << " nhập quê quán học sinh muốn xoá : " ;
//    cin >> news->que_quan ;
//    for( int i = 0 ; i < ds_hocsinh.size();i++){
//        if(news->ho_ten == ds_hocsinh[i].ho_ten&& news->que_quan==ds_hocsinh[i].que_quan){
//            ds_hocsinh[i]= ds_hocsinh[i+1] ;
//        }
//    }
//    
//}
//
//void CLASS::sua_thong_tin_hs (){
//    
//}
//
//Student* CLASS::bau_lop_truong(){
//    
//    
//    return lop_truong ;
//}
//
//int CLASS::tong_so_lop (){
//    
//    
//    return so_lop ;
//}
//
//int main(){
//    //Phương thức:
//    //thêm 1 học sinh vào lớp
//    //Xoá 1 học sinh khỏi lớp (xoá theo mã học sinh)
//    //Sửa thông tin của học sinh
//    //Thiết lập lớp trưởng cho lớp
//    //In ra số lớp có trong trường
//    //Tự tạo hàm main để test các phương thức. Lưu ý: các đối tượng cần cấp phát động
//    CLASS *lop9a = new CLASS("12A1") ;
////    cout << "Họ và tên : " << news->ho_ten ;
////    cout << "Tuổi : " << news-> tuoi ;
////    cout << "Địa chỉ : " << news-> que_quan ;
////    cout << "Chiều cao : " << news->chieu_cao;
////    cout << "Cân nặng : " << news-> can_nang ;
//    
//}
