/* A customer purchases Rice, Sugar, Meat and Oil from the shop. Write a c program that calculates the bill of the customer. The program should perform the following tasks.
Create individual variables for these 4 items. Ask the user to enter the quantities of the items.
Write a function calculatePrice which takes the quantity in kg of these four items as parameters and return the total price.
Write a function calculateDiscount which takes total price as parameter and finds 20% discount if the customer bill amount increases from 2500.
Write a function calculateBill which takes discount price and total bill as parameter and print total bill of the customer. 
Print discount price and also print bill price after discount.
rice = 100.
sugar = 200.
meat = 150.
oil = 100.
*/
#include <stdio.h>

int calculateprice(int, int, int, int);
int calculate_discount(int);
void TotalBill(int, int);

int main() {
    int rice = 100, sugar = 200, meat = 150, oil = 100;
    int rQuan, sQuan, mQuan, oQuan;

    printf("Enter the Quantity of Rice in KG : ");
    scanf("%d", &rQuan);

    printf("Enter the Quantity of Sugar in KG : ");
    scanf("%d", &sQuan);

    printf("Enter the Quantity of Meat in KG : ");
    scanf("%d", &mQuan);

    printf("Enter the Quantity of Oil in KG : "); // Changed from "Rice" to "Oil"
    scanf("%d", &oQuan);

    int Totalr = rice * rQuan, Totals = sugar * sQuan, Totalm = meat * mQuan, Totalo = oil * oQuan;

    int total = calculateprice(Totalr, Totals, Totalm, Totalo);
    int dis = calculate_discount(total);
    TotalBill(total, dis);

    return 0;
}

int calculateprice(int Totalr, int Totals, int Totalm, int Totalo) {
    int total_price = Totalr + Totals + Totalm + Totalo;
    return total_price;
}

int calculate_discount(int total) {
    int discount = 0;

    if (total > 2500) {
        discount = total * 0.25;
    }
    return discount;
}

void TotalBill(int total, int dis) {
    printf("Total price = %d\n", total);
    printf("Discount price %d\n", dis);
    int disPrice = total - dis;
    printf("Price after discount = %d", disPrice);
}
