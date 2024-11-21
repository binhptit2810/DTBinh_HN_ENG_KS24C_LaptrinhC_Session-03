#include <stdio.h>

int main(){
	// Khai bao so nguyen co 4 chu so
	int fourNumber;
	// Yeu cau nguoi dung nhap so nguyen co 4 chu so
	printf("Moi ban nhap so nguyen co 4 chu so:");
	scanf("%d",& fourNumber);
	// Khai bao bien dao nguoc
	int daonguoc = fourNumber % 10 + (fourNumber / 10) % 10 + (fourNumber / 100) % 10 + fourNumber / 1000;
	printf("So dao nguoc la:%d", daonguoc);
	return 0;
}
