/*Question >> Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, and unit consumed by the user should be
captured from the keyboard to display the total amount to be paid to the
customer.
The charge are as follow :
Unit Charge/unit

upto 199 @1.20

200 and above but less than 400 @1.50

400 and above but less than 600 @1.80

600 and above @2.00

If bill exceeds Rs. 400 then a surcharge of 15% will be charged.
Expected Output :
Customer IDNO :1001
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00*/

#include <stdio.h>
// function prototype.
int bill(int, int);  

int main() {
    int IDNO, unit_consumed;

    printf("Enter your customer ID : ");
    scanf("%d", &IDNO);

    printf("\nHow many units have you consumed : ");
    scanf("%d", &unit_consumed);

    int res = bill(IDNO, unit_consumed);

    return 0; 
}

// function definition
int bill(int customer_id, int unit) {
    int amount_charges,subcharge,net_amount;

   // conditions to check the unit price.
    if (unit > 0 && unit <= 199) {
        amount_charges = unit * 1.20;
        printf("Amount charges Rs: 1.20 per unit = %d\n", amount_charges);
    } 
    
    else if (unit >= 200 && unit < 400) {
        amount_charges = unit * 1.50;
        printf("Amount charges Rs: 1.50 per unit = %d\n", amount_charges);
    } 
    
    else if (unit >= 400 && unit < 600) {
        amount_charges = unit * 1.80;

        // to find 15 percent for the subcharge
        subcharge = amount_charges*0.15;
        printf("Amount charges Rs: 1.80 per unit = %d\n", amount_charges);
        printf("Subcharge = %d\n", subcharge);
        net_amount = amount_charges+subcharge;
        printf("Net amount paid by the customer = %d", net_amount);
    } 
    
    else if (unit > 600) {
        amount_charges = unit * 2;
        subcharge = amount_charges*0.15;
        printf("Amount charges Rs: 2 per unit = %d\n", amount_charges);
        printf("Subcharge = %d\n", subcharge);
        net_amount = amount_charges+subcharge;
        printf("Net amount paid by the customer = %d", net_amount);

    }

    return amount_charges; 
}
