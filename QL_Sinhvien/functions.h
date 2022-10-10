#include <iostream>
#include <cstdio>

typedef struct {
	char * masv;
	char* hoten;
	char* quequan;
} SinhVien;

void removeNewline(char* x[]);
void nhapsv(SinhVien sv[], int n);
void xuatsv(SinhVien sv[], int n);
