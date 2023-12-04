#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct CD{
	int id;
	char name[50];
	float duration;
	char content[100];
	bool status;
};
struct CD cdList[100];
int main(){	
    int n,id,j;
    char key;
	struct CD cd1;
	strcpy(cd1.name, "Hurricanger");
	cd1.duration=1803.6;
	strcpy(cd1.content, "Sieu nhan cuong phong");
	
	struct CD cd2;	
	strcpy(cd2.name, "Doraemon");
	cd2.duration=205.87;
	strcpy(cd2.content, "Meo may den tu tuong lai");
	
	struct CD key2;
	struct CD cdList[]={cd1,cd2};
	int currentSize=2;
	do{
		printf("*************MENU**************\n");
		printf("1. In toan bo danh sach cd co o trong cdList tren cung 1 hang\n");
		printf("2. Them moi cd vao vi tri cuoi cung cua cdList\n");
		printf("3. Chinh sua cd\n");
		printf("4. Xoa cd\n");
		printf("5. Sap xep cd theo thu tu tang dan\n");
		printf("6. Tim kiem va in ra thong tin cd\n");
		printf("7. Tim kiem và in ra toàn bo thong cua cac cd theo status\n");
		printf("8. Thoat\n");
		printf("Chon chuc nang:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<currentSize;i++){
					printf("id: %d\n",i);
					printf("name: %s\n",cdList[i].name);
					printf("duration: %.2f\n",cdList[i].duration);
					printf("content: %s\n",cdList[i].content);
					printf("----------------------------------------\n");
				}
				break;
			case 2:
				printf("Nhap so cd can them:");
				scanf("%d",&n);
				for(int i=currentSize-1;i<currentSize+n-1;i++){
					printf("Nhap ten cua dia:");
					scanf("%s",&cdList[i].name);
					printf("Nhap thoi luong cua dia:");
					scanf("%f",&cdList[i].duration);
					printf("Nhap noi dung cua dia:");
					scanf("%s",&cdList[i].content);
				}
				currentSize+=n;
				for(int i=0;i<currentSize;i++){
					printf("id: %d\n",i);
					printf("name: %s\n",cdList[i].name);
					printf("duration: %.2f\n",cdList[i].duration);
					printf("content: %s\n",cdList[i].content);
					printf("----------------------------------------\n");
				}
				break;
			case 3:
				printf("Nhap id cd ma ban muon sua:");
				scanf("%d",&id);
				if(id<0||id>currentSize){
					printf("Khong tim thay dia co ma id=%d\n",id);
					return 0;
				}
				printf("Nhap thong tin cho dia co ma id=%d\n",id);
				printf("Nhap ten cua dia moi:");
				scanf("%s",&cdList[id].name);
				printf("Nhap thoi luong cua dia moi:");
				scanf("%f",&cdList[id].duration);
				printf("Nhap noi dung cua dia moi:");
				scanf("%s",&cdList[id].content);
				for(int i=0;i<currentSize;i++){
					printf("id: %d\n",i);
					printf("name: %s\n",cdList[i].name);
					printf("duration: %.2f\n",cdList[i].duration);
					printf("content: %s\n",cdList[i].content);
					printf("----------------------------------------\n");
				}
				break;
			case 4:
				printf("Nhap id cd ban muon xoa:");
				scanf("%d",&id);
				if(id<0||id>currentSize){
					printf("Khong tim thay dia co ma id=%d\n",id);
					return 0;
				}
				for(int i=id;i<currentSize;i++){
					cdList[i]=cdList[i+1];
				}
				currentSize--;
				for(int i=0;i<currentSize;i++){
					printf("id: %d\n",i);
					printf("name: %s\n",cdList[i].name);
					printf("duration: %.2f\n",cdList[i].duration);
					printf("content: %s\n",cdList[i].content);
					printf("----------------------------------------\n");
				}
				break;
			case 5:
				for(int i=1;i<currentSize;i++){
					key=cdList[i].duration;
					key2=cdList[i];
					j=i-1;
					while(j>=0&&cdList[j].duration>key){
					    cdList[j+1]=cdList[j];
					    j--;
					}
					cdList[j+1]=key2;
				}
				for(int i=0;i<currentSize;i++){
					printf("id: %d\n",i);
					printf("name: %s\n",cdList[i].name);
					printf("duration: %.2f\n",cdList[i].duration);
					printf("content: %s\n",cdList[i].content);
					printf("----------------------------------------\n");
				}
				break;
			case 6:
				
				break;
			case 7:
				break;
			case 8:
				exit(0);
			default:
				printf("Gia tri khong phu hop, vui long chon lai gia tri tu 1-8\n");
		}
	}while(1==1);
}
