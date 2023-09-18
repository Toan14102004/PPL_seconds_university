////
////  BT5 _lthđt.cpp
////  HelloWorld
////
////  Created by Guest User on 03/09/2023.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//void nhapMang(vector<int>& arr)
//{
//    int n;
//    cout << "Nhap kich thuoc mang: ";
//    cin >> n;
//
//    cout << "Nhap cac phan tu cua mang:" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        int phanTu;
//        cin >> phanTu;
//        arr.push_back(phanTu);
//    }
//}
//
//
//void xuatMang(const vector<int>& arr)
//{
//    cout << "Mang: ";
//    for (int i = 0; i < arr.size(); i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//
//int layKichThuoc(const vector<int>& arr)
//{
//    return arr.size();
//}
//
//
//int layPhanTuTaiMotViTri(const vector<int>& arr, int i)
//{
//    if (i >= 0 && i < arr.size())
//    {
//        return arr[i];
//    }
//    else
//    {
//        cout << "Vi tri khong ton tai." << endl;
//        return -1;
//    }
//}
//
//
//void sapXepChonTrucTiep(vector<int>& arr)
//{
//    int n = arr.size();
//    for (int i = 0; i < n - 1; i++)
//    {
//        int viTriMin = i;
//        for (int j = i + 1; j < n; j++)
//        {
//            if (arr[j] < arr[viTriMin])
//            {
//                viTriMin = j;
//            }
//        }
//        swap(arr[i], arr[viTriMin]);
//    }
//}
//
//
//void sapXepNoiBot(vector<int>& arr)
//{
//    int n = arr.size();
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//}
//
//
//int timKiemTuanTu(const vector<int>& arr, int muctieu)
//{
//    for (int i = 0; i < arr.size(); i++)
//    {
//        if (arr[i] == muctieu)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//
//int timKiemNhiPhan(const vector<int>& arr, int muctieu)
//{
//    int left = 0;
//    int right = arr.size() - 1;
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] == muctieu)
//        {
//            return mid;
//        }
//        else if (arr[mid] < muctieu)
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
//int main()
//{
//    vector<int> arr;
//
//    
//    nhapMang(arr);
//    xuatMang(arr);
//
//    
//    cout << "Kich thuoc mang: " << layKichThuoc(arr) << endl;
//
//    
//    int k;
//    cout << "Nhap vi tri can lay phan tu: ";
//    cin >> k;
//    int phanTu = layPhanTuTaiMotViTri(arr, k);
//    if (phanTu != -1)
//    {
//        cout << "Phan tu tai vi tri " << k << ": " << phanTu << endl;
//    }
//
//    
//    cout << "Sap xep theo chon truc tiep:" << endl;
//    sapXepChonTrucTiep(arr);
//    xuatMang(arr);
//
//    cout << "Sap xep theo noi bot:" << endl;
//    sapXepNoiBot(arr);
//    xuatMang(arr);
//
//    
//    int muctieu;
//    cout << "Nhap phan tu can tim kiem ";
//    cin >> muctieu;
//
//    int ketQuaTuanTu = timKiemTuanTu(arr, muctieu);
//    if (ketQuaTuanTu != -1) {
//        cout << "Tim thay " << muctieu << " tai vi tri (tuan tu) " << ketQuaTuanTu << endl;
//    }
//    else
//    {
//        cout << muctieu << " khong co trong mang (tuan tu)." << endl;
//    }
//
//    int ketQuaNhiPhan = timKiemNhiPhan(arr, muctieu);
//    if (ketQuaNhiPhan != -1)
//    {
//        cout << "tim thay " << muctieu << " tai vi tri (nhi phan) " << ketQuaNhiPhan << endl;
//    }
//    else
//    {
//        cout << muctieu << " khong co trong mang (nhi phan)." << endl;
//    }
//
//    return 0;
//}
//
