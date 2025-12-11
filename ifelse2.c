#include<stdio.h>

int main (){
	
    int balance,withdrawal;
    printf("Enter your Balance: \n");
     scanf("%d", &balance);
     printf("Enter your Withdrawal Amount: \n");
    scanf("%d", &withdrawal);
	
    if (balance >=withdrawal){
        printf("Amount withdrawal successful\n");
    }
    else{
        printf("Insufficient balance\n");
    }
	
    return 0;
}

