#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n-1;i++)
	{
	scanf("%d",&arr[i]);	
	}
int num,k;
scanf("%d%d",&num,&k);
for(i=n-1;i>=k;i--){
	arr[i]=arr[i-1];

}	
arr[k]=num;
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
}
