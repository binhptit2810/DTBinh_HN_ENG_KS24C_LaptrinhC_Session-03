#include <stdio.h>

int main(){
	// khai bao bien name
	char name[10];
	// hoi ten cua nguoi dung
	printf("Ten cua ban la gi:");
	// nguoi dung nhap ten
	scanf("%s",&name);
	// in ra man hinh xin chào + name
	printf("Xin chào :%s",name);
	return 0;
}
