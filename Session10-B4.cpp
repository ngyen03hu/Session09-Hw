#include<stdio.h>

int main(){
	int numbers[4]={1,5,7,2};
	for(int i =0; i<4;i++){
		printf("%d\t",numbers[i]);
	}
	for( int i=0;i<4;i++){
		int min=numbers[i];
		for(int j=i+1;j<4;j++){
			if(numbers[j]<min){
				min = numbers[j];
				numbers[j]=numbers[i];
				numbers[i]=min;
			}
		}
	}
	printf("\n");
	printf("mang sau khi sap xep");
		for(int i =0; i<4;i++){
			printf("%d\t",numbers[i]);
		}
}
