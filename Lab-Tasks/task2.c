

/*    This is the Question:
A customer is purchasing rice, sugar, cooking oil, tea, and milk. The prices for each of
these items will provide through input. A 10% discount will be applied to the total price if
the customer's shopping exceeds $2000.
*/

#include <stdio.h>
int main(){

    int rice,sugar,cooking_oil,tea,milk; // here I declare variables of the product.
    int total, discount; // variables of Total price and Discount price.

   /*In the following lines I have promt user to enter the price of products.
   scanf statement reads the input*/
    printf("\nFor how much you want to purchase Rice : ");
    scanf("%d", &rice); 

    printf("For how much you want to purchase Sugar : ");
    scanf("%d", &sugar);

    printf("For how much you want to purchase Cooking Oil : ");
    scanf("%d", &cooking_oil);

    printf("For how much you want to purchase Tea : ");
    scanf("%d", &tea);

    printf("For how much you want to purchase Milk : ");
    scanf("%d", &milk);

    total = rice + sugar + cooking_oil + tea + milk;  // Here I initialized sum of all the products to total.

    discount = (total/100)*10; // formula for 10% discount.

    // Conditional Statement to check the price is below 2000$ or above.
    if(total>2000){
        printf("\nTotal price with 10 percent discount is : %d\n", total - discount);
    }
        else{
            printf("\nTotal price = %d\n", total);
        }

return 0;   

}
