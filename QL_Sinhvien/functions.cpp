#include <iostream>
#include <cstring>
#include "functions.h"


using namespace std;


void removeNewline(char x[]){
	size_t len = strlen(x);
	if(x[len - 1] == '\n')
			x[len -1] = '\0';
}


void nhapsv(SinhVien sv[], int n) {
	cout << "Cho biet so luong sinh vien : ";cin >> n;
	cin.ignore(); // xoa vung dem ban phim
	
	for (int i = 0; i<n; i++){
		cout << "nhap thong tin sinh vien thu " << i + 1; fflush(stdin);
		sv[i].masv = new char[10];
		cout << "\n\tNhap masv: "; fgets(sv[i].masv,100,stdin);
		removeNewline(sv[i].masv);

		sv[i].hoten = new char[100];
		cout << "\tNhap ho ten: "; fgets(sv[i].hoten, 100, stdin);
		removeNewline(sv[i].hoten);

		sv[i].quequan = new char[200];
		cout << "\tNhap que quan: "; fgets(sv[i].quequan, 200, stdin);
		removeNewline(sv[i].quequan);
		cout << "\n";
	}

}


void xuatsv(SinhVien sv[], int n) {
	for (int i = 0; i < n; i++) {
		cout << sv[i].masv << "\t" << sv[i].hoten  << "\t" << sv[i].quequan;
		cout << "\n";
		// khi su dung fgets de nhap chuoi thi no se nhan luon enter vao cuoi
		// do do khi in ra du lieu se xuong dong => ban hay tim phai phap
	}
}


void timkiem(SinhVien sv[], int n) {
	char* a;
	a = new char[128];
	cout << "Nhap Ten sinh vien can tim kiem: ";
	fflush(stdin); fgets(a, 128, stdin); removeNewline(a);
	
	for (int i = 0; i < n; i++) {
		if (strcmp(sv[i].hoten, a) == 0) {
			cout << sv[i].masv << "\t" << sv[i].hoten << "\t" << sv[i].quequan << endl;
			return;
		}
	}
	cout << "Khong tim thay!!"<< endl;
}


void xoasv(SinhVien sv[], int &n) {
	char* so;
	so = new char[10];
	cout << "Nhap Ma so sinh vien can xoa: ";
	fflush(stdin); fgets(so, 10, stdin); removeNewline(so);
	cout << so;
	
	for (int i = 0; i < n; i++) {
		if (strcmp(sv[i].masv, so) == 0) {
			for (int j = i; j < n; j++) {
				sv[j] = sv[j + 1];
			}
			n--;	
			return;
		}
	}
	cout << "Khong tim thay!!" << endl;
}
