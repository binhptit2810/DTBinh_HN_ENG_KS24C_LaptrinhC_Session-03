#include <stdio.h>

int main() {
	// Khai bao do dai canh va chieu cao cua tam giac
	float dodaicanh;
	float chieucao;
	// Yeu cau nguoi dung nhap do dai canh va chieu cao cua tam giac
	printf("Do dai canh cua tam giac la:");
	scanf("%f",& dodaicanh);
	printf("Chieu cao cua tam giac la:");
	scanf("%f",& chieucao);
	// Khai bao bien dientich cua hinh tam giac
	float dientich = ( dodaicanh * chieucao) / 2;
	// In dien tich cua hinh tam giac ra man hinh
	printf("Dien tich cua hinh tam giac la:%.2f\n", dientich);
	return 0;
}
