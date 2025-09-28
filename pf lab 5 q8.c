#include <stdio.h>

int main()
{	
	char section, size, type;
	int quantity;
	float price = 0 , total = 0;
	
	printf("WELCOME TO OUR RESTAURANT\n");	
	printf("Choose any one section (C = Coffee Shop, B = Burger Hub, I = Ice Cream Parlour):  ");
	scanf(" %c", &section);
	
	if (section == 'B' || section == 'b')
	{
		printf("Your order will be handled by Burger Hub.");
				
	}
	else if(section == 'I' || section == 'i')
	{
		printf("Your order will be handled by Ice cream Parlour.");
	}
	else 
	{
		printf("Enter coffee size (S = Small, M = Medium, L = Large): ");
		scanf(" %c", &size);
		
		if (size == 'S' || size == 's')
		{
            price = 200;
        }
		else if (size == 'M' || size == 'm') 
		{
            price = 300;
        } 
		else if (size == 'L' || size == 'l') 
		{
            price = 500;
        } 
		else 
		{
            printf("Invalid size.\n");
            
            return 0;
        }
		
		printf("How many coffees you want? ");
		scanf("%d", &quantity);
		
		if (quantity>1)
		{
			printf("Check out our combo offers\n");
			
			total = (price*quantity) * 0.9;
		}
		else 
		{
			total = (price*quantity);
			
		}
		
		printf("Enter coffee type (R = Regular, C= Cappuccino, L = Latte): ");
		scanf(" %c", &type);
		
		if (type == 'R' || type == 'r') 
		{
            printf("Coffee Type: Regular\n");
        } 
		else if (type == 'C' || type == 'c') 
		{
            printf("Coffee Type: Cappuccino\n");
        } 
		else if (type == 'L' || type == 'l') 
		{
            printf("Coffee Type: Latte\n");
        } else 
		{
            printf("Invalid coffee type.\n");
            return 0;
        }
        
        printf("Total Bill: Rs %.2f\n", total);
		
		
	}
	
	
	
	return 0;
}
