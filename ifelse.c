#include<stdio.h>

int main (){
	
    int amount;
    printf("Enter your food order Amount: ");
    scanf("%d", &amount);
	
    if (amount > 500){
        printf("Congratulations! You are eligible for free home delivery\n");
    }
    else{
        printf("You are not eligible\n");
    }
	
    return 0;
}

