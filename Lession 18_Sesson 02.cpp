#include <stdio.h>
struct Sinhvien {
    char fullName[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Sinhvien sv1;
    printf("Moi ban nhap ho va ten: ");
    fgets(sv1.fullName, sizeof(sv1.fullName), stdin);
	printf("Moi ban nhap tuoi: ");
    scanf("%d", &sv1.age);
    fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
    fgets(sv1.phoneNumber, sizeof(sv1.phoneNumber), stdin);
	
    printf("Thong tin sinh vien vua nhap:\n");
    printf("Ho va ten: %s\n",sv1.fullName);
    printf("Tuoi: %d\n",sv1.age);
    printf("So dien thoai: %s\n",sv1.phoneNumber);
    return 0;
}
	
