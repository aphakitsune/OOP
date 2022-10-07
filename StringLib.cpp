#include"thuvienchuoi.h"
#include<iostream>

using namespace std;

char* cattrai(char* hoten) {
	int n = strlen(hoten);
	int m = n;
	int i = 0;
	while (hoten[i] == ' ') {
		for (int j = i; j < m - 2; j++) {
			hoten[j] = hoten[j + 1];
		}
		hoten[m - 2] = '\0';
		m--;
	}
	return hoten;
}

char* catphai(char* hoten) {
	int i = strlen(hoten);
	while (hoten[i - 2] == ' ') {
		i--;
	}
	hoten[i - 1] = '\0';
	return hoten;
}

char* tachho(char* hoten) {
	cattrai(hoten);
	int i = 0;
	char* ans;
	ans = new char[100];
	int j = 0;
	while (hoten[i] != ' ') {
		ans[j++] = hoten[i];
		i++;
	}
	ans[j] = '\0';
	return ans;
}

char* tachten(char* hoten) {
	catphai(hoten);
	int i = strlen(hoten);
	char* ans = new char[100];
	int j = 0;
	while (hoten[i - 1] != ' ') {
		ans[j++] = hoten[i - 1];
		i--;
	}
	ans[j] = '\0';
	for (int k = 0; k < j / 2; k++) {
		swap(ans[k], ans[j - k - 1]);
	}
	return ans;
}
