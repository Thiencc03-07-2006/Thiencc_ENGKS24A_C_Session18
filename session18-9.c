#include <stdio.h>
#include <string.h>

struct Dish {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Dish menu[50]={
        {1,"suat com vua",25000},
        {2,"suat com lon",30000},
    };
    struct Dish newDish;
    int n=2,type,i=0,pos,secondChoice,j,left,right;
    char name[50];
    do{
        printf("\nMENU\n");
        printf("1. In menu\n");
        printf("2. Them mon an\n");
        printf("3. Sua mon an\n");
        printf("4. Xoa mon an\n");
        printf("5. Sap xep menu\n");
        printf("6. Tim kiem mon an\n");
        printf("7. Thoat\n");
        printf("Lua chon: ");
        scanf("%d",&type);
        fflush(stdin);
		i=0;
        switch(type){
        	case 1:
	            printf("\nDanh sach mon an:\n");
	            while(i<n){
	                printf("%d. ID: %d, Name: %s, Price: %.2f\n",i+1,menu[i].id,menu[i].name,menu[i].price);
	                i++;
	            }
	            break;
        	case 2:
	            printf("Nhap vi tri them: ");
	            scanf("%d",&pos);
	            pos--;
	            if(pos<0||pos>n||n>=100){
	                continue;
	            }
	            printf("Nhap ID: ");
	            scanf("%d",&newDish.id);
	            printf("Nhap ten: ");
	            fflush(stdin);
	            fgets(newDish.name,sizeof newDish.name,stdin);
	            newDish.name[strcspn(newDish.name,"\n")] ='\0';
	            printf("Nhap gia: ");
	            scanf("%f",&newDish.price);
	            i=n;
	            while(i>pos){
	                menu[i]=menu[i-1];
	                i--;
	            }
	            menu[pos]=newDish;
	            n++;
	            break;
        	case 3:
	            printf("Nhap vi tri sua: ");
	            scanf("%d",&pos);
	            pos--;
	            if(pos<0||pos>=n){
	                printf("Vi tri khong hop le.\n");
	                continue;
	            }
	            printf("Nhap ID: ");
	            scanf("%d",&newDish.id);
	            printf("Nhap ten: ");
	            fflush(stdin);
	            fgets(newDish.name,sizeof newDish.name,stdin);
	            newDish.name[strcspn(newDish.name,"\n")]='\0';
	            printf("Nhap gia: ");
	            scanf("%f",&newDish.price);
	            menu[pos]=newDish;
	            break;
	        case 4:
	            printf("Nhap vi tri xoa: ");
	            scanf("%d",&pos);
	            pos--;
	            if(pos<0||pos>=n){
	                printf("Vi tri khong hop le.\n");
	                continue;
	            }
	            i=pos;
	            while(i<n-1){
	                menu[i]=menu[i+1];
	                i++;
	            }
	            n--;
            	break;
            case 5:
	            printf("\n1. Giam dan theo gia\n2. Tang dan theo gia\nLua chon: ");
	            scanf("%d",&secondChoice);
	            while(i<n-1){
	            	j=i+1;
	                while(j<n){
	                    if((secondChoice==1&&menu[i].price<menu[j].price)||(secondChoice==2&&menu[i].price>menu[j].price)){
	                        struct Dish temp=menu[i];
	                        menu[i]=menu[j];
	                        menu[j]=temp;
	                    }
	                    j++;
	                }
	                i++;
	            }
	            break;
            case 6:
	            printf("Nhap ten mon an can tim: ");
	            fflush(stdin);
	            fgets(name,sizeof(name),stdin);
	            name[strcspn(name,"\n")]='\0';
	            printf("\n1. Tim kiem tuyen tinh\n2. Tim kiem nhi phan\nLua chon: ");
	            scanf("%d",&secondChoice);
	            int found=-1;
	            if(secondChoice==1){
	                while(i<n){
	                    if(strcmp(menu[i].name,name)==0){
	                        found=i;
	                        break;
	                    }
	                    i++;
	                }
	            }else if(secondChoice==2){
	                left=0,right=n-1;
	                while(left<=right){
	                    int mid=(left+right)/2;
	                    int cmp=strcmp(menu[mid].name,name);
	                    if (cmp==0){
	                        found=mid;
	                        break;
	                    } else if(cmp<0){
	                        left=mid+1;
	                    } else{
	                        right=mid-1;
	                    }
	                }
	            }
	            if(found!=-1){
	                printf("Tim thay mon an tai vi tri %d: ID: %d, Name: %s, Price: %.2f\n", found + 1, menu[found].id, menu[found].name, menu[found].price);
	            }else{
	                printf("Khong tim thay mon an \"%s\".\n",name);
	            }
	        	break;
	    }
    }while(type!=7);
    return 0;
}

