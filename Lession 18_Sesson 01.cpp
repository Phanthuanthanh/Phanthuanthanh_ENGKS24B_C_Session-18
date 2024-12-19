#include <stdio.h>
struct Sinhvien {
    char fullName[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Sinhvien sv1;
    sprintf(sv1.fullName, "Phan Thuan Thanh");
    sv1.age = 18;
    sprintf(sv1.phoneNumber, "0999866886");
   
    printf("Ho va ten: %s\n", sv1.fullName);
    printf("Tuoi: %d\n", sv1.age);
    printf("So dien thoai: %s\n", sv1.phoneNumber);
    return 0;
}

