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
}

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
}
