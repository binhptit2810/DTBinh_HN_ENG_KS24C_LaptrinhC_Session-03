#include <stdio.h>

int main(){
	// Khai bao bien do Celsius
	int celsius;
	// Moi ban nhap nhiet do ban muon chuyen tu celsius sang fahrenheit
	printf("Moi ban nhap nhiet do ban muon chuyen tu celsius sang fahrenheit:");
	// Lay du lieu tu nguoi dung
	scanf("%d",&celsius);
	// Khai bao bien do fahrenheit
	int fahrenheit = celsius * 9/5 + 32;
	// In ra man hinh nhiet do da duoc doi sang do farenheit
	printf("Nhiet do doi tu do celsius sang do fahrenheit la:%d", fahrenheit);
	return 0;
}
