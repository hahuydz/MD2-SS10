#include<stdio.h>
int main(){
	
	int arr[5]={2,8,3,6,10};
	for(int i=0; i<5; i++){
		int minIndex=i;
		for(int j=i+1;j<5;j++){
			
			if(arr[j]<arr[minIndex]){
				
				minIndex = j;
			}
			
		}
		if(minIndex!=i){
			int temp;
			temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
	for(int i=0; i<5; i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}
