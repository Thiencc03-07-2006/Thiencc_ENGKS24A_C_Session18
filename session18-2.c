#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	struct Student A;
	printf("vui long nhap ho va ten: ");
	fgets(A.name,sizeof A.name,stdin);
	printf("vui long nhap tuoi: ");
	scanf("%d",&(A.age));
	fflush(stdin);
	printf("vui long nhap so dien thoai: ");
	fgets(A.phoneNumber,sizeof A.phoneNumber,stdin);
	printf("ho va ten: %s",A.name);
	printf("tuoi: %d\n",A.age);
	printf("so dien thoai: %s",A.phoneNumber);
	return 0;
}
