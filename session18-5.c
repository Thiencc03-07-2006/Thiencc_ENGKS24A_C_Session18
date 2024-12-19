#include <stdio.h>
#include <string.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	int index,check=0;
	struct Student students[50];
	int i=0;
	while(i<5){
		students[i].id=i+1;
		strcpy(students[i].name,"Cao Chi Thien");
		students[i].age=18;
		strcpy(students[i].phoneNumber,"0866533164");
		i++;
	}
	printf("vui long nhap id muon thay doi: ");
	scanf("%d",&index);
	fflush(stdin);
	i=0;
	while(i<50){
		if(students[i].id==index){
			check=-1;
			printf("	vui long nhap ho va ten: ");
			fgets(students[i].name,sizeof students[i].name,stdin);
			students[i].name[strcspn(students[i].name,"\n")]='\0';
			printf("	vui long nhap tuoi: ");
			scanf("%d",&(students[i].age));
			break;
		}
		i++;
	}
	if(check){
		i=0;
		while(i<5){
			printf("\nhoc sinh so id: %d\n",students[i].id);
			printf("	ho va ten: %s\n",students[i].name);
			printf("	tuoi: %d\n",students[i].age);
			printf("	so dien thoai: %s",students[i].phoneNumber);
			i++;
		}
	}else{
		printf("khong tim thay id");
	}
	return 0;
}
