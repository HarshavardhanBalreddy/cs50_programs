#include<stdio.h>
#include<time.h>

int* sele(int ar[],int s);
int main(void){
clock_t t;
t=clock();
int arr[]={3,2,6,7,9,21};
int s= sizeof(arr)/sizeof(arr[0]);
int* sar = sele(arr,s);
printf("Sorted array using selection sort\n");
for(int i=0;i<s;i++){
	printf("%i ",sar[i]);
}
t=clock()-t;
printf("\n%f",(double)t);
}

int* sele(int ar[],int s){
int small=0;
if(s==0){
	return(0);
}
else{
for(int i=0;i<s;i++){
	small=ar[i];
	if(ar[i] > ar[i+1]){
		ar[i]=ar[i+1];
		ar[i+1]=small;
	}
}
}
sele(ar,s-1);
return(ar);
}
