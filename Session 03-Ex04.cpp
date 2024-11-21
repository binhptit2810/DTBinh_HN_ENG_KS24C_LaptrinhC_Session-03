#include <stdio.h>

int main(){
	// khai bao bien diem toan van anh
	float math;
	float literature;
	float english;
	// Yeu cau nguoi dung nhap diem
	printf("Moi ban nhap diem mon toan:");
	scanf("%f", & math);
	printf("Moi ban nhap diem mon van:");
	scanf("%f",& literature);
	printf("Moi ban nhap diem mon anh:");
	scanf("%f",& english);
	// khai bao bien tong diem va trung binh ba mon
	float tongdiem = math + literature + english;
	float trungbinh = (math + literature + english) / 3;
	// In hai bien tong diem va trung binh ba mon ra man hinh
	printf("Tong diem 3 mon van toan anh la:%.2f\n", tongdiem);
	printf("Diem trung binh 3 mon van toan anh la:%.2f\n", trungbinh);
	return 0;

}
