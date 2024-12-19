#include <stdio.h>
#include <string.h>
struct student{
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	struct student A;
	strcpy(A.name,"Cao Chi Thien");
	A.age=18;
	strcpy(A.phoneNumber,"0866533164");
	printf("ho va ten: %s\n",A.name);
	printf("tuoi: %d\n",A.age);
	printf("so dien thoai: %s",A.phoneNumber);
	return 0;
}
