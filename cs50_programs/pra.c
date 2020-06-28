//333
#include<stdio.h>
#include<math.h>

int coins(float amount);

int main(void){
float amount;
do{
printf("Cash owed: ");
scanf("%f",&amount);
}
while(amount<=0);
int ans=coins(round(amount*100));
printf("%i\n",ans);
return 0;
}

int coins(float amount){
float ar[4]={25,10,5,1};
int count=0;
while(amount>0){
if((int)amount-ar[0]>=0){
	amount=amount-ar[0];
	count++;
}else if((int)amount-ar[1]>=0){
	amount=amount-ar[1];
	count++;
}else if((int)amount-ar[2]>=0){
	amount=amount-ar[2];
	count++;
}else if((int)amount-ar[3]>=0){
	amount=amount-ar[3];
	count++;
}}
return count;
}


/*
//complex one but tried

#include<stdio.h>
#include<math.h>
int count=0;
int greedy(float amount);
int main(void){
    float amount;
    do{
        printf("change owed: ");
        scanf("%f",&amount);
        amount=round(amount*100);
    }while(amount<0);
    int coins=greedy(amount);
    printf("%i",coins);
return 0;
int greedy(float amount){
    int ar[ ]={25,10,5,1};
    if(amount==0){
        return 1;
    }
    else{
        for(int i=0;i<4;i++){
        int temp=0;
        temp=round(amount-ar[i]);
        if(temp>=0){
            count++;
            if(greedy(temp)){
                break;
            }
        }
    }
    }
return count;
*/

