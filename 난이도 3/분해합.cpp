#include <stdio.h>
int n;
void main() {
	int i,n,r=0,s;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	s=compare(n-i, n);
	
		if(s==1)
			r=n-i;
		
		else if(s==2 && r==0){
			r=0;
			break;
		}
			
	}
	printf("%d",r);

	return 0;
}

int compare(int a, int b){
	int num[7];
	int sum=0,l=0;
	int ac=a;
	
	while(a!=0){
		num[l]=a%10;
		sum+=a%10;
		a=(a-(a%10))/10;
		l++;
	}
	
	if(sum+ac==b)
		return 1;
	else if(num[0]==9 && sum+ac<b)
		return 2;
	else
		return 0;
		
}
