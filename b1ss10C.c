#include<stdio.h>
int main(){
	
	int a,arr[5]={5,10,15,20,25},flag=-1;
	printf("Nhap phan tu muon kiem tra:");
	scanf("%d",&a);
	for(int i=0; i<5; i++){
		if(a==arr[i]){
			flag = i;
	
		}
	}
	if(flag == -1){
		printf("phan tu khong ton tai");
		
	}else{
		printf("Phan tu o vi tri: %d",flag);
	}
	
	return 0;
}
