// struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>


using namespace std;

typedef struct {
	char * masv;
	char* hoten;
	char* quequan;
} SinhVien;


void removeNewline(char x[]){
	size_t len = strlen(x);
	if(x[len - 1] == '\n')
			x[len -1] = '\0';
}


void nhapsv(SinhVien sv[], int n) {
	for (int i = 0; i<n; i++){
		cout << "nhap thong tin sinh vien thu " << i + 1; fflush(stdin);
		sv[i].masv = new char[8];
		cout << "\n\tNhap masv: "; fgets(sv[i].masv,100,stdin);
		removeNewline(sv[i].masv);

		sv[i].hoten = new char[100];
		cout << "\tNhap ho ten: "; fgets(sv[i].hoten, 100, stdin);
		removeNewline(sv[i].hoten);

		sv[i].quequan = new char[200];
		cout << "\tNhap que quan: "; fgets(sv[i].quequan, 200, stdin);
		removeNewline(sv[i].quequan);
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


int main(){
	SinhVien * ds;
	int n;
	cout << "Cho biet so luong sinh vien : ";cin >> n;
	cin.ignore(); // xoa vung dem ban phim
	ds = new SinhVien[n];
	nhapsv(ds, n);
	xuatsv(ds, n);
	  
}
