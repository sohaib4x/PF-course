/*
Question : Customer is purchasing rice, sugar, cooking oil, tea, and milk. The
prices for each of these items will provide through input. A 10%
discount will be applied to the total price if the customer's shopping
exceeds $2000*/

#include <stdio.h>

int displayBill(int, int);

int main() {
    int rice = 250, sugar = 250, cooking_oil = 400, tea = 300, milk = 200; 

    // the first letter represent the name of 
    int r_quantity, s_quantity, c_quantity, t_quantity, m_quantity;

    printf("\nHow many KG you want to purchase Rice : ");
    scanf("%d", &r_quantity);

    printf("How many KG you want to purchase Sugar : ");
    scanf("%d", &s_quantity);

    printf("How many KG you want to purchase Cooking Oil : ");
    scanf("%d", &c_quantity);

    printf("How many KG you want to purchase Tea : ");
    scanf("%d", &t_quantity); // Added the & operator here

    printf("How many liters you want to purchase Milk : ");
    scanf("%d", &m_quantity);

    int total = rice * r_quantity + sugar * s_quantity + cooking_oil * c_quantity + tea * t_quantity + milk * m_quantity;
    int discount = (total / 100) * 10;

    int z = displayBill(total, discount);

    return 0;
}

int displayBill(int tot, int dis) {
    if (tot > 2000) {
        printf("Total price = %d\n", tot);
        printf("Total price with 10 percent discount is : %d \n", tot - dis);
    } else {
        printf("Total price = %d\n", tot);
    }

    return 0;
}
