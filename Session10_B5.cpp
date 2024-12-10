#include<stdio.h>

int main(){
	int numbers[]={2,5,7,2};
	int n=sizeof(numbers)/sizeof(int);
	
	for(int i =0; i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(numbers[j]<numbers[min]){
				min=j;
			} 
		} 
		int temp=numbers[min];
		numbers[min]=numbers[i];
		numbers[i]=temp;
	}
	int vera;
	printf("\nMOi ban nhap gia tri can tim");
	scanf("%d",&vera);
	int start=numbers[0],mid;
	
	while(start<=n){
		mid=(start+n)/2;
		if(numbers[mid]==vera){
			printf("\n vi tri phan tu la %d",mid);
			return 0;
		}else if (numbers[mid]>vera){
			n = mid -1;
		}else{
			start = mid+1;
		}
	}
	printf("khoong thay phan tu can tim");
	return 0;
}
