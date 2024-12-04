#include <stdio.h>

int main(){
	int arr[]={3,7,2,5,9,3,60};
	int n=sizeof(arr)/sizeof(int);
	
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printf("mang sau khi duoc sap xep ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
