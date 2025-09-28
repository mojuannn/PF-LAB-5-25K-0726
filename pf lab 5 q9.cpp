#include <stdio.h>

int main() {
	int PIN = 5555;
	int balance = 75000;
	int userPin, withdrawalAmount;
	
	printf("Enter Your PIN: ");
	scanf("%d", &userPin);
	
	if(userPin == PIN){
		printf("Enter amount to withdraw: ");
		scanf("%d", &withdrawalAmount);
		if(withdrawalAmount > balance){
			printf("Insufficient Balance!");
		}
		else{
			int newBalance = balance - withdrawalAmount;
			printf("Transaction Successful!\n");
			printf("Balance: %d, Withdrawal Amount: %d, New Balance: %d", balance, withdrawalAmount, newBalance);
		}
	}
	else{
		printf("Incorrect PIN Code!");
	}
	
	return 0;
}
