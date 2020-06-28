#include<stdio.h>

int aray[5]={5,4,3,2,1};
int n=5;
int flag=0;
void sort(int j,int k)
{
flag=0;
for(int i=j;i<n-k;i++) {
if(aray[i]>aray[i+k]) {
int temp=aray[i];
aray[i]=aray[i+k];
aray[i+k]=temp;
if(j==0&&k==1){flag=1;}
}
} }
int main() {
while(flag==0) {
sort(0,2);
sort(1,2);
sort(0,1);
}
for(int i=0;i<n;i++) {
printf("%d :",aray[i]);
}
return 0;
}
