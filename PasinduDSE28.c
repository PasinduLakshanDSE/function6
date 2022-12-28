#include<stdio.h>
float find_amount(float unit_price,int quntity){

	float amount=unit_price*quntity;
	return amount;
}
float find_discount(float amount){
	float discount;
	if(amount>=1000){
		discount=200;
	}else{
		discount=50;
	}
	return discount;
	
}
void find_finalbill(float amount,float discount){
	float final_bill;
	final_bill=amount-discount;
	printf("Final bill is:RS%.2f\n",final_bill);
}
int main(){
	char item_name[20];
	float unit_price;
	int quntity;
	printf("Enter the item name:");
	scanf("%s",item_name);
	printf("Enter the unit price:");
	scanf("%f",&unit_price);
	printf("Enter the quntity:");
	scanf("%d",&quntity);
	
	float amount=find_amount(unit_price,quntity);
	float discount=find_discount(amount);
	find_finalbill(amount,discount);
	return 0;
}