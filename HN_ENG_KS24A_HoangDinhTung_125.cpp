#include<stdio.h>
int main(){
	int n, choice,size=0;
	int a[size];
	do{
		printf("=================MENU=================\n");
		printf("1.Nhap so phan tu va gan gia tri cho mang\n");
		printf("2.In ra cac phan tu trong mang\n");
		printf("3.Tim gia tri lon nhat va gia tri nho nhat trong mang\n");
		printf("4.In ra tong tat ca cac phan tu\n");
		printf("5.Them mot phan tu vao cuoi mang\n");
		printf("6.Xoa phan tu tai vi tri cu the\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Nhap vao 1 phan tu va kiem tra co ton tai hay khong\n");
		printf("9.In ra toan bo so nguyen to trong mang\n");
		printf("10.Sap xep mang theo thu tu tang dan\n");
		printf("11.Thoat\n");
		printf("Moi nhap vao su lua chon cua ban (1-10): ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("Moi nhap vao so phan tu: ");
				scanf("%d",&n);
				a[n];
				for(int i=0;i<n;i++){
					printf("array[%d] = ",i);
					scanf("%d",&a[i]);
				}
				size=n;
				break;
			}
			case 2:{
				printf("cac phan tu co trong mang la:\n");
				for(int i=0;i<size;i++){
					printf("array[%d] = %d\n",i,a[i]);
				}
				break;
			}
			case 3:{
				int maxValue=0, minValue=0;
				for(int i=0;i<size;++i){
					if(a[i]>maxValue){
						maxValue=a[i];
					}
				}
				for(int i=0;i<size;++i){
					minValue=a[0];
					if(a[i]<minValue){
						minValue=a[i];
					}
				}
				printf("gia tri lon nhat: %d\n",maxValue);
				printf("gia tri nho nhat: %d\n",minValue);
				break;
			}
			case 4:{
				int sum=0;
				for(int i=0;i<size;i++){
					sum+=a[i];
				}
				printf("tong cua cac phan tu trong mang la: %d\n",sum);
				break;
			}
			case 5:{
				int newValue;
				printf("moi nhap vao gia tri cho phan tu moi: ");
				scanf("%d",&newValue);
				a[size]=newValue;
				++size;
				break;
			}
			case 6:{
				int deleteIndex;
				printf("moi nhap vao vi tri muon xoa trong mang : ");
				scanf("%d",&deleteIndex);
				if(deleteIndex>=0&&deleteIndex<size){
					for(int i=size-1;i>=deleteIndex;--i){
						a[i]=a[i+1];
					}
					--size;
				}else{
					printf("vi tri can xoa khong hop le!!!!\n");
				}
				break;
			}
			case 7:{
				int temp;
				printf("Bubble Sort\n");
				for(int i=0;i<size-1;i++){
					for(int j=0;j<size-1-i;j++){
						if(a[j]<a[j+1]){
							temp=a[j+1];
							a[j+1]=a[j];
							a[j]=temp;
						}
					}
				}
				printf("Cac phan tu trong mang duoc sap xep theo thu tu giam dan la: ");
				for(int i=0;i<size;i++){
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			}
			case 8:{
				int value;
				printf("Moi nguoi dung nhap vao 1 phan tu: ");
				scanf("%d",&value);
				for(int i=0;i<size;i++){
					if(a[i]==value){
						printf("Phan tu ton tai trong mang!!!!\n");
						break;
					}
					else{
						printf("phan tu khong ton tai trong mang!!!!\n");
						break;
					}
				}
				break;
			}
			case 9:{
				printf("so nguyen to trong mang la: ");
				int sum1=0, index=1;
				for(int i=0;i<size;++i){
					int index=1;
					if(a[i]<2){
						index=0;
					}
					for(int j=2;j*j<=a[i];++j){
						if(a[i]%2==0){
							index=0;
							break;
						}
					}
					if(index==1){
						printf("%d ",a[i]);
					}
					else{
						printf("mang khong co so nguyen to!!!\n");
						break;
					}
				}
				printf("\n");
				break;
			}
	
			case 10:{
				int min;
				printf("Selection sort\n");
				for(int i=0;i<size-1;i++){
					min=a[i];
					for(int j=i+1;i<size-1;i++){
						if(a[j]<min){
							min = a[j];
							a[j]=a[i];
							a[i]=min;
						}
					}
				}
				printf("mang duoc spa xep theo thu tu tang dan la: ");
				for(int i=0;i<size;i++){
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			}
			default:
				printf("khong co trong MENU, vui long nhap lai(1-10)\n");
				break;
		}
	}while(choice!=11);
	return 0;
}
