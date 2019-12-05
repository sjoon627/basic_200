#include <stdio.h>
int main() {
	int i1,i2,i3;
 int arr[3][3][3]={
	 {1,2,3,4,5,6,7,8,9},
	 {10,11,12,13,14,15,16,17,18},
	 {19,20,21,22,23,24,25,26,27}
 };
	for(i3=0;i3<3;i3++){
			for(i2=0;i2<3;i2++){
			for(i1=0;i1<3;i1++){
		printf("%d ",arr[i3][i2][i1]);
	}printf("\n");
	}
	printf("\n");	
	}
}
