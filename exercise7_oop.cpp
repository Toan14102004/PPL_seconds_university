////  Created by Guest User on 06/09/2023.
////
////Bài 2.
////Viết chương trình cho phép thực hiện các thao tác trên kiểu mảng:
////- Hàm nhập, xuất mảng.
////- Lấy kích thước mảng.
////- Lấy phần tử tại vị trí nào đó.
////- Sắp xếp tăng, giảm (theo các phương pháp sắp xếp: Chọn trực tiếp, Chèn trực tiếp, Nổi bọt BubbleSort, QuickSort, HeapSort, ShellSort, RadixSort)
////- Tìm phần tử nào đó trong mảng (tuần tự, nhị phân, nội suy).
////Yêu cầu: có thể vừa sắp xếp tăng, vừa sắp xếp giảm; và việc tìm kiếm phải theo danh sách thứ tự tăng/giảm; cho phép chọn phương pháp sắp xếp tùy người dùng . (Hướng dẫn: dùng con trỏ hàm)
//#include <stdio.h>
//#include <iostream>
//using namespace std ;
//
//istream &operator >> ( istream &in ,vector<int> &A){
//    int n ;
//    cout << " nhập số phần tử của mảng : " ;
//    in >> n ;
//    cout << " nhập các phần tử của mảng : \n " ;
//    for ( int i = 0 ; i < n ; i++ ){
//        int x ;
//        in >> x ;
//        A.push_back(x) ;
//    }
//    
//    return in ;
//}
//
//ostream &operator << ( ostream &out , vector<int> A){
//    out << " các phần tử của mảng là :\n" ;
//    for ( int i = 0 ; i< A.size() ;i++){
//        out <<  A[i] << " \t ";
//    }
//    cout << endl ;
//    return out ;
//}
//
//void kich_thuoc_arr( vector<int> A){
//    cout << " kích thước mảng là : " << sizeof( A) << endl ;
//}
//
//int layPhanTuTaiMotViTri(const vector<int>& A, int i)
//{
//    if (i >= 0 && i < A.size())
//    {
//        return A[i];
//    }
//    else
//    {
//        cout << "Vi tri khong ton tai." << endl;
//        return -1;
//    }
//}
//
//bool ascending ( int left , int right) { // sắp xếp tăng dần
//    return left > right ;
//}
//
//bool descending ( int left , int right ){ // sắp xếp giảm dần
//    return left < right ;
//}
//
//void selectionsort ( vector< int>& A , int length , bool (*comparisonFunc)(int  , int )){ // sắp xếp chọn
//    for ( int i = 0 ; i < length-1 ; i++){
//        for ( int j = i+1 ; j < length ; j ++){
//            if (comparisonFunc( A[i] ,A[j])){
//                swap( A[i] ,A[j]) ;
//            }
//        }
//    }
//}
//
//void SapXepChonTrucTiep ( vector<int>& A, int length , bool (*comparisonFunc) ( int  , int )){
//        for (int i = 0; i < length - 1; i++)
//        {
//            int ViTriMin = i;
//            for (int j = i + 1; j < length; j++)
//            {
//                if (comparisonFunc( A[i],A[j]))
//                {
//                    ViTriMin = j;
//                }
//            }
//            swap(A[i], A[ViTriMin]);
//        }
//}
//
//void insertion_sort ( vector<int> &A, int length , bool (*comparisonFunc)(int  , int )) {// sắp xếp chèn
//        int pos, i;
//        int x;//lưu giá trị a[i] tránh bị ghi đè khi dời chỗ các phần tử
//        for(i=1; i < length ; i++){//đoạn a[0] đã sắp xếp
//            x = A[i]; pos = i-1;
//            //tìm vị trí chèn x
//          //  while((pos>=0)&&(A[pos]>x)){
//            while((pos>=0)&&(comparisonFunc( A[pos] , x))){
//                    //kết hợp dời chỗ các phần tử sẽ đứng sau x trong danh sách mới
//                A[pos+1] = A[pos];
//                pos--;
//            }
//            A[pos+1] = x;//chèn x vào danh sách
//        }
//}
//
//void Bubble_sort ( vector<int>& A, int length , bool (*comparisonFunc)(int  , int )){ // sắp xếp nổi bọt
//    for (int i = 0; i < length - 1; i++)
//        {
//            for (int j = 0; j < length - i - 1; j++)
//            {
//                if (comparisonFunc(A[j] , A[j + 1]))
//                {
//                    swap(A[j], A[j + 1]);
//                }
//            }
//        }
//}
//
//int TimKiemTuanTu(const vector<int>& A, int x)
//{
//    for (int i = 0; i < A.size(); i++)
//    {
//        if (A[i] == x)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int TimKiemNhiPhan(const vector<int>& A, int y)
//{
//    int left = 0;
//    int right = A.size() - 1;
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (A[mid] == y)
//        {
//            return mid;
//        }
//        else if (A[mid] < y)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//    return -1;
//}
//
//int main (){
//    vector<int > A ;
//    int i ;
//    int option ;
//    int  length = sizeof (A) / sizeof (int );
//    cin >> A ;
//    cout << A ;
//    cout << " ------------------------------------------------------------\n" ;
//    cout << " +1.sắp xếp nổi bọt theo chiều từ bé đến lớn.                +\n" ;
//    cout << " |2.sắp xếp nổi bọt theo chiều từ lớn đến bé.                |\n" ;
//    cout << " |3.sắp xếp chọn trực tiếp theo chiều từ bé đến lớn.         |\n" ;
//    cout << " |4.sắp xếp chọn trực tiếp theo chiều từ lớn đến bé.         |\n" ;
//    cout << " |5.sắp xếp chèn theo chiều từ bé đến lớn.                   |\n" ;
//    cout << " |6.sắp xếp chèn theo chiều từ lớn đến bé.                   |\n" ;
//    cout << " |7.lấy phần tử tại 1 vị trí.                                |\n" ;
//    cout << " |8.kích thước mảng.                                         |\n" ;
//    cout << " |9. tìm kiếm nhị phân.                                      |\n" ;
//    cout << " |10. tìm kiếm tuần tự.                                      |\n" ;
//    cout << " +-----------------------------------------------------------+\n" ;
//    do {
//        cout << " nhập lựa chọn :" ;
//        cin >> option ;
//        switch ( option) {
//            case 1 :{
//                cout << " ----------------------------------------------------------------------\n" ;
//                cout << " mảng sau khi sắp xếp nổi bọt theo chiều từ bé đến lớn là : \n" ;
//                Bubble_sort (A, length ,ascending) ;
//                cout << A;
//                break ;
//            }
//            case 2 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                cout << " mảng sau khi sắp xếp nổi bọt theo chiều từ lớn đến bé là : \n" ;
//                Bubble_sort (A, length ,descending ) ;
//                cout << A;
//                break ;
//            case 3 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                cout << " mảng sau khi sắp xếp chọn trực tiếp theo chiều từ bé đến lớn là : \n" ;
//                SapXepChonTrucTiep (A, length , ascending) ;
//                cout << A;
//                break ;
//            case 4 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                cout << " mảng sau khi sắp xếp chọn trực tiếp theo chiều từ lớn đến bé là : \n" ;
//                SapXepChonTrucTiep (A, length ,descending ) ;
//                cout << A;
//                break ;
//            case 5 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                cout << " mảng sau khi sắp xếp chèn theo chiều từ bé đến lớn là : \n " ;
//                insertion_sort(A, length ,ascending ) ;
//                cout << A;
//                break ;
//            case 6 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                cout << " mảng sau khi sắp xếp chèn theo chiều từ lớn đến bé là : \n " ;
//                insertion_sort(A, length ,descending ) ;
//                cout << A;
//                break ;
//            case 7 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                cout << "lấy phần tử tại vị trí : " ;
//                cin >> i ;
//                cout << " phần tử đó là : " ;
//                cout << layPhanTuTaiMotViTri( A , i);
//                break ;
//            case 8 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                kich_thuoc_arr(A) ;
//                break ;
//            case 9 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                int y ;
//                cout << " nhập giá trị muốn tìm :" ;
//                cin >> y ;
//                cout << " vị trí của phần từ đó là : " <<TimKiemNhiPhan( A, y)  << endl;
//                break ;
//            case 10 :
//                cout << " ----------------------------------------------------------------------\n" ;
//                int x ;
//                cout << " nhập giá trị muốn tìm :" ;
//                cin >> x ;
//                cout <<" vị trí của phần từ đó là : " <<TimKiemTuanTu( A, x)   << endl;
//                break ;
//            default :
//                cout << " nhập lại option từ 1 đến 10 !" ;
//        }
//        cout << " bấm ' y' để tiếp tục " ;
//        getchar () ;
//    }while ( getchar() == 'y') ;
//}
