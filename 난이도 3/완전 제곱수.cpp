 #include <stdio.h>
int main() {
int i,m,n,sum=0;
	scanf("%d %d",&m,&n);
	
	for(i=1;;i++){
		if(m<=i*i)
			break;
	}
	printf("%d ",i*i);
	
	for(;n>=i*i;i++){
		sum+=i*i;
	}
	printf("%d",sum);
	
	return 0;
}
