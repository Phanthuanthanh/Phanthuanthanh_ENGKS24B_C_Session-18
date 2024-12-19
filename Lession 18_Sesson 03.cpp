#include <stdio.h>
#include <string.h>
struct Sinhvien {
    char fullName[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Sinhvien sv1[5];  

    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);

        printf("Ho va ten: ");
        fgets(sv1[i].fullName, sizeof(sv1[i].fullName), stdin);
        fflush(stdin);  

        printf("Tuoi: ");
    	scanf("%d", &sv1[i].age);
        getchar();  

        printf("So dien thoai: ");
        fgets(sv1[i].phoneNumber, sizeof(sv1[i].phoneNumber), stdin);
        fflush(stdin);
    }

    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("Ho va ten: %s\n", sv1[i].fullName);
        printf("Tuoi: %d\n", sv1[i].age);
        printf("So dien thoai: %s\n", sv1[i].phoneNumber);
    }
    return 0;
}

