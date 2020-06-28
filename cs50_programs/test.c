#include<stdio.h>
#include<time.h>

int* bub_sort(int arr[],int s);
int main(void){
clock_t t;
t=clock();
int ar[]={-2,45,0,11,-9};
int size=sizeof(ar)/sizeof(ar[0]);
int* b=bub_sort(ar,size);
printf("Sorted Array in Ascending order\n");
for(int i=0;i<size;i++){
printf("%i ",b[i]);
}
t=clock()-t;
printf("\n%f",(double)t);
}
int* bub_sort(int arr[],int s){
if(s==0){return 0;}
else {
for(int i=0;i<s;i++){
	if(arr[i]>arr[i+1]){
		int temp = arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;

	}
}

}
bub_sort(arr,s-1);
return  arr;
}
