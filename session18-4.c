#include <stdio.h>
#include <string.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	struct Student students[50];
	int i=0;
	while(i<5){
		students[i].id=i+1;
		printf("hoc sinh so id: %d\n",students[i].id);
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
		printf("hoc sinh so id: %d\n",students[i].id);
		printf("	ho va ten: %s",students[i].name);
		printf("	tuoi: %d\n",students[i].age);
		printf("	so dien thoai: %s",students[i].phoneNumber);
		i++;
	}
	return 0;
}
