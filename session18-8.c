#include <stdio.h>
#include <string.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	int index,check=-1,n=5,i;
	struct Student students[50]={
        {1,"Nguyen Van A",18,"0123456789"},
        {2,"Tran Thi B",19,"0987654321"},
        {3,"Le Van C",20,"0765432198"},
        {4,"Pham Thi D", 18,"0345678901"},
        {5,"Hoang Van E",21,"0567890123"}
    };
	printf("vui long nhap vi tri muon them: ");
	scanf("%d",&index);
	fflush(stdin);
	i=0;
	while(n-i>index){
		students[n-i]=students[n-i-1];
		i++;
	}
	n++;
	students[index].id=n;
	printf("vui long nhap ten cua vi tri muon them: ");
	fgets(students[index].name,sizeof students[index].name,stdin);
	students[index].name[strcspn(students[index].name,"\n")]='\0';
	printf("vui long nhap tuoi cua vi tri muon them: ");
	scanf("%d",&students[index].age);
	fflush(stdin);
	printf("vui long nhap so dien thoai cua vi tri muon them: ");
	fgets(students[index].phoneNumber,sizeof students[index].phoneNumber,stdin);
	students[index].phoneNumber[strcspn(students[index].phoneNumber,"\n")]='\0';
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
