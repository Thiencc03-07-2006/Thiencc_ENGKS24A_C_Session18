#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	struct Student students[5];
	int i=0;
	while(i<5){
		printf("hoc sinh so %d\n",i);
		printf("	vui long nhap ho va ten: ");
		fgets(students[i].name,sizeof students[i].name,stdin);
		printf("	vui long nhap tuoi: ");
		scanf("%d",&(students[i].age));
		fflush(stdin);
		printf("	vui long nhap so dien thoai: ");
		fgets(students[i].phoneNumber,sizeof students[i].phoneNumber,stdin);
		i++;
	}
	i=0;
	while(i<5){
		printf("hoc sinh so %d\n",i);
		printf("	ho va ten: %s",students[i].name);
		printf("	tuoi: %d\n",students[i].age);
		printf("	so dien thoai: %s",students[i].phoneNumber);
		i++;
	}
	return 0;
}
