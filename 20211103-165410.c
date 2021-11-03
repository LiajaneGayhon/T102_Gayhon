#include<stdio.h>
int main(){
int choices, price, payment, change;
    printf("Please pick you favorite order");
    printf("\n[1]Sprite (P50) \n[2]Burger (P150) \n[3]Milk Tea (P120) \nChoice:");
    scanf("%d", &choices);
    switch (choices){
    
    case 1:
    price = 50;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Pepsi Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);  
}
else{ 
    printf("Apparently you do not have enough money");
}
    break;
    
    case 2:
    price = 150;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Succes! Enjoy your DrPepper Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else{ 
    printf("Apparently you do not have enough money");
}
     break;
   
    
     case 3:
    price = 120;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Cocacola Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("Apparently you do not have enough money");
}
  break;
   default:
   printf("The item that you wanted does not exist");
}
return 0;
}