#include<stdio.h>

int main(){
	int arr[5]={1,3,2,5,4};
	int size = sizeof(arr) / sizeof(int);
	printf(" Mang truoc khi sap sep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	} 
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j+1]<arr[j]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\n Mang sau khi sap sep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	return 0; 
} 
