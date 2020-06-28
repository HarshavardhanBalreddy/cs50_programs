#include<stdio.h>
#include<stdlib.h>

//initialisation of yet to build fucnctions
int count(long d);
int* digit(long d);
int sum_digit(int n);
int check_sum(int* ar,int c);
char* check_validity(long a);

//main function
int main(void){
    long a;
    do{
        printf("Number: ");
        scanf("%ld",&a);
    }
    while(a<=0);
    check_validity(a);
return 0;
}
//to find the number of digits in the entered number

int count(long d){
    long t=d;
    int c=0;
    while(t>0){
        t=t/10;
        c++;
    }
    return c;
}
//to separate the digits abnd store them in an array

int* digit(long d){
int *arr=malloc(count(d)*(int)sizeof(int));
int i=0;
long temp=d;
while(temp>0){
        *(arr+i)=temp%10;
        temp=temp/10;
        i++;
}
return(arr);
}

//to return sum of digits
int sum_digit(int n){
int sum=0,temp=0;
while(n>0){
    temp=n%10;
    sum=sum+temp;
    n=n/10;
}
return (sum);
}
//to validate the check sum

int check_sum(int* ar,int c){
    int *ptr=ar;
    int evsum=0,odsum=0;
        for(int i=0;i<c;i++){
            if(i%2==0){
                odsum=odsum+*(ar+i);
            }
            else{
                int m=(*(ar+i))*2;
                int ec=count(m);
                if(ec>1){
                    int even_sub_sum=sum_digit(m);
                    evsum=evsum + even_sub_sum;                  
                }
                else{
                    evsum=evsum + m;
                }
                }
            }
return((evsum+odsum)%10); 
}
//to check the validity and return the type of card 

char* check_validity(long a){
    //for visa checksum 13 or 16
    int *arr=digit(a);
    int co=count(a);
    if(((co==13)&&((int)(a/10E11)==4)) || (((co==16))&&((int)(a/10E14)==4))){
        //to check the validity
        if(check_sum(arr,co)==0){
            printf("VISA\n");
        }
        else{
        printf("Invalid!!!\n");
        }
    }
	//for american express 15
    else if((((co==15)&&((int)(a/10E12)==34))) || (((co==15)&&((int)(a/10E12)==37)))){
        if(check_sum(arr,co)==0){
            printf("American Express\n");
        }
        else{
        printf("Invalid!!!\n");
        }
    }
    //for master card 16
    else if(((co==16)&&((int)(a/10E13)==51)) || ((co==16)&&((int)(a/10E13)==52)) || ((co==16)&&((int)(a/10E13)==53)) || ((co==16)&&((int)(a/10E13)==54)) || ((co==16)&&((int)(a/10E13)==55))){
        if(check_sum(arr,co)==0){
            printf("Master Card\n");
        }
        else{
        printf("Invalid!!!\n");
        }
    } 
    else{
        printf("Invalid!!!\n");
    }
return 0;
}

//review the mistakes

// #include<stdio.h>
// #include<stdlib.h>


// //initialisation of yet to build fucnctions
// int count(long d);
// int* digit(long d);
// int sum_digit(int n);
// int check_sum(int* ar,int c);
// char* check_validity(long a);

// //main function
// int main(void){
//     long a;
//     do{
//         printf("Number: ");
//         scanf("%ld",&a);
//     }
//     while(a<=0);
//     check_validity(a);
// return 0;
// }
// //to find the number of digits in the entered number

// int count(long d){
//     long t=d;
//     int c=0;
//     while(t>0){
//         t=t/10;
//         c++;
//     }
//     return c;
// }
// //to separate the digits abnd store them in an array

// int* digit(long d){
// int *arr=malloc(count(d)*(int)sizeof(int));
// int i=0;
// long temp=d;
// free(arr);
// while(temp>0){
//         *(arr+i)=temp%10;
//         temp=temp/10;
//         i++;
// }
// printf("\n8888888888888888888888\n");
//         for(int num=0;num<count(d);num++){
//             printf("%d",*(arr+num));
//         }printf("\n8888888888888888888888\n");
// printf("address 1: %p",arr);
// return(arr);
// }

// //to return sum of digits
// int sum_digit(int n){
// int sum=0,temp=0;
// while(n>0){
//     temp=n%10;
//     sum=sum+temp;
//     n=n/10;
// }
// return (sum);
// }
// //to validate the check sum

// int check_sum(int* ar,int c){
//     int *ptr=ar;
//     int evsum=0,odsum=0;
//     printf("address 2: %p",ptr);
//     if(ar!=NULL){
//         printf("\n8888888888888888888888\n");
//         for(int num=0;num<c;num++){
            
//             printf("%d\n",*(ptr+num));
//         }printf("\n8888888888888888888888\n");
//         printf("enter");
//         for(int i=0;i<c;i++){
//             if(i%2==0){
//                 int m=(*(ar+i))*2;
//                 int ec=count(m);
//                 printf("\nm:%d ec:%d",m,ec);
//                 if(ec>1){
//                     int even_sub_sum=sum_digit(m);
//                     evsum=evsum + even_sub_sum;
//                     printf("even_sub %d",even_sub_sum);                     
//                 }
//                 else{
//                     evsum=evsum + m;
//                 }
//                 printf("evsum: %d",evsum); 
//             }
//             else{
//                 odsum=odsum+*(ar+i);
//                 }

//             }
//             printf("\naddress 1: %p\n",ar);
//             printf("address 2: %p\n",ptr);
//             printf("%d",evsum+odsum);
//         return((evsum+odsum)%10);
//         }
    
//     else{
//         printf("array is not passing in fun check_sum");
//     }

// return 1;
// }
// //to check the validity and return the type of card 

// char* check_validity(long a){
//     //for visa checksum 13 or 16
//     int *arr=digit(a);
//     int co=count(a);
//     printf("\n adress:%p \t count:%i\n",arr,co);
//     if(((co==13)&&((int)(a/10E11)==4)) || (((co==16))&&((int)(a/10E14)==4))){
//         //to check the validity
//         if(check_sum(arr,co)==0){
//             printf("\nVISA\n");
//         }
//     }
// 	//for american express 15
//     else if((((co==15)&&((int)(a/10E12)==34))) || (((co==15)&&((int)(a/10E12)==37)))){
//         if(check_sum(arr,co)==0){
//             printf("\nAmerican Express\n");
//         }
//     }
//     //for master card 16
//     else if(((co==16)&&((int)(a/10E13)==51)) || ((co==16)&&((int)(a/10E13)==52)) || ((co==16)&&((int)(a/10E13)==53)) || ((co==16)&&((int)(a/10E13)==54)) || ((co==16)&&((int)(a/10E13)==55))){
//         if(check_sum(arr,co)==0){
//             printf("\nMaster Card\n");
//         }
//     }
//     //Invalid
//     else if(check_sum(arr,co)!=0){
//         printf("\nInvalid!!!\n");
//     }

// return 0;
// }
