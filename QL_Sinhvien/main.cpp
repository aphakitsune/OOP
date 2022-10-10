// struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Compile files:
// /usr/bin/zsh
//
// $ g++ -c functions.cpp main.cpp
// $ g++ -o main.exe main.o functions.o


#include <iostream>
#include <cstring>
#include "functions.h"


using namespace std;


int main(){
	SinhVien * ds;
	int n;
	cout << "Cho biet so luong sinh vien : ";cin >> n;
	cin.ignore(); // xoa vung dem ban phim
	ds = new SinhVien[n];
	nhapsv(ds, n);
	xuatsv(ds, n);
	  
}
