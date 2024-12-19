#include <stdio.h>
#include <string.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	int index,check=0,n=5;
	struct Student students[50];
	int i=0;
	while(i<n){
		students[i].id=i+1;
		strcpy(students[i].name,"Cao Chi Thien");
		students[i].age=18;
		strcpy(students[i].phoneNumber,"0866533164");
		i++;
	}
	students[n].id=n+1;
	printf("vui long nhap ho va ten: ");
	fgets(students[n].name,sizeof students[n].name,stdin);
	students[n].name[strcspn(students[n].name,"\n")]='\0';
	printf("vui long nhap tuoi: ");
	scanf("%d",&(students[n].age));
	fflush(stdin);
	printf("vui long nhap so dien thoai: ");
	fgets(students[n].phoneNumber,sizeof students[n].phoneNumber,stdin);
	n++;
	i=0;
	while(i<n){
		printf("\nhoc sinh so id: %d\n",students[i].id);
		printf("	ho va ten: %s\n",students[i].name);
		printf("	tuoi: %d\n",students[i].age);
		printf("	so dien thoai: %s",students[i].phoneNumber);
		i++;
	}
	return 0;
}
