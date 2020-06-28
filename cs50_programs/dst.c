#include <stdio.h>

int mario(int s);
int left(int s,int temp);
int right(int s);
int main(void)
{
    int s;
do{
    printf("Height: ");
    scanf("%i",&s);
}
while((s < 1) || (s > 8)||(s==0));
mario(s);
}

int mario(int s){
    if(s==0){
        return 1;
    }
    else{
        left(s,s);
        printf("  ");
        right(s);
        printf("\n");
    }
    
return(0);
}

int left(int s, int temp){
    if(s==0){
        return 1;
    }
    else{
    left(s-1,temp);
    if(s<temp){
        int size=temp-s;
        for(int i=0;i<temp;i++){
            if((size)!=0){
                printf(" ");
                size--;
            }
            else{
            printf("#");
        }}
    }
    else{
    for(int i=0;i<s;i++){
            printf("#");
        }
    }
    }
    return 0;

}

int right(int s){
    if(s==0){
        return 1;
    }
    else{
    right(s-1);
    for(int i=0;i<s;i++){
            printf("#");
        }
    }
    return 0;
}

