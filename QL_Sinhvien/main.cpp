// struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// compile files
// /bin/bash
// $ g++ -c functions.cpp main.cpp
// $ g++ main.o functions.o
// a.out as default compiled file


#include <iostream>
#include <cstring>
#include "functions.h"


using namespace std;


int main(){
	SinhVien* ds;
	int n = 1;
	ds = new SinhVien[n];
	
	int choice = 1;
	while (choice != 0){
		cout << "1: Nhap SV\t|" << endl;
		cout << "2: Xuat ds SV\t|" << endl;
		cout << "3: Tim kiem\t|" << endl;
		cout << "4: Xoa\t\t|" << endl;
		cout << "-Zero to STOP-\t|" << endl;

		cout << "Your choice: "; cin >> choice; cin.ignore();
		
		switch(choice){
			case 0: break;
			case 1: nhapsv(ds, n); break;
			case 2: xuatsv(ds, n); break;
			case 3: timkiem(ds, n); break;
			case 4: xoasv(ds, n); break;
			default:
				cout << "Invalid choice\n";break;
		}
		cout << "\n\n";
	}
}
