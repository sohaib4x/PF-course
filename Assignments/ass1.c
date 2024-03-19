/*  
Q == Write a C program that
1. Greets the customer to the grocery store
2. Displays day, date and time, use the following line to display time

#include <time.h>
time_t tm;
time(&tm);
printf("Current Date/Time = %s", ctime(&tm));
3. Displays the list of items and their per kilogram prices
4. Takes quantity required by the user
5. Calculates the total price of the items
6. Takes the cash from the user which is the 5000 rupees note
7. Gives back the remaining money by computing the smallest number of notes
a. e.g. 3421 is 3 notes of Rs. 1000, 4 notes of Rs. 100, 1 Note of Rs. 20 and 1 Note of Rs. 1

*/


#include <stdio.h>
#include <time.h> // to include current time


int main(){
    time_t tm; 
time(&tm); 

float Tomatoes = 200, Onions = 350, Potatoes = 150, Green_Peas = 250;
float Tomatoes_quantity, Onion_quantity, Potatoes_Quantity, Green_Pieas_Quantity;

printf("***************************^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^****************************\n\n");
    printf("\t\t\tWelcome to Happy shopping Grocery Store\n\n");
printf("************************<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>*************************\n\n");

printf("\t\t\tCurrent Date/Time = %s\n", ctime(&tm));

printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

      printf("\t\t\t\tToday's per KG price list\n\n");

 printf("Tomatoes = 200\t\t Onions = 350\t\t Potatoes = 150\t\t Green Peas = 250\n\n");     

 printf("==========================================================================================\n\n");

 printf("\t\t\tPlease Enter your desired quantity\n\n");

 printf("Enter the quantity of Tomatoes in KG:  \t");
 scanf("%f", &Tomatoes_quantity);

 
 printf("\nEnter the quantity of Onions in KG:  \t");
 scanf("%f", &Onion_quantity);

 
 printf("\nEnter the quantity of Potatoes in KG: \t");
 scanf("%f", &Potatoes_Quantity);

 
 printf("\nEnter the quantity of Green Peas in KG:\t");
 
 scanf("%f", &Green_Pieas_Quantity);
 
 printf("\n###########################################################################################\n\n");

 float total_tomatoes = Tomatoes_quantity*Tomatoes;
 float total_Onion = Onion_quantity*Onions;
 float total_potatoes = Potatoes_Quantity*Potatoes;
 float total_GreenPeas= Green_Pieas_Quantity*Green_Peas;

   
   printf("\t\t\t\t\tTotal bill\n\n");
   

   printf("Item\t\t\t ||\t\t Quantity\t\t ||\t\t Total Price\n\n");

   printf("Tomatoes\t\t ||\t\t %f\t\t ||\t\t %f \n", Tomatoes_quantity, total_tomatoes  );
   printf("Onions  \t\t  ||\t\t %f\t\t ||\t\t %f \n", Onion_quantity, total_Onion  );
   printf("Potatoes\t\t ||\t\t %f\t\t ||\t\t %f \n", Potatoes_Quantity, total_potatoes );
   printf("Green Peas\t\t ||\t\t %f\t\t ||\t\t %f \n", Green_Pieas_Quantity, total_GreenPeas  );

   printf("-------------------------------------------------------------------------------------------\n\n");

   int Grand_total = total_tomatoes + total_Onion + total_GreenPeas + total_potatoes;
   int Recieved = 5000;

   printf("Grand Total\t ==========================\t %d\n", Grand_total);
   printf("Recieved\t ==========================\t %d\n", Recieved);
   int remaining = Recieved - Grand_total;
   printf("Remaining\t ==========================\t %d\n\n",remaining );

   // As we should have least amount of notes.

   printf("\t\t5000 notes\t=\t %d\n", remaining/5000);
   int remaining2 = remaining%5000;
   

   printf("\t\t1000 notes\t=\t %d\n", remaining2/1000);
   int remaining3 = remaining2%1000;
   

   printf("\t\t500 notes\t=\t %d\n", remaining3/500);
   int remaining4 = remaining3%500;

   printf("\t\t100 notes\t=\t %d\n", remaining4/100);
   int remaining5 = remaining4%100;

   printf("\t\t50 notes\t=\t %d\n", remaining5/50);
   int remaining6 = remaining5%50;

   printf("\t\t20 notes\t=\t %d\n", remaining6/20);
   int remaining7 = remaining6%20;

   printf("\t\t10 notes\t=\t %d\n", remaining7/10);
   int remaining8 = remaining7%10;

    printf("\t\t5 notes\t=\t %d\n", remaining8/5);
   int remaining9 = remaining8%5;

    printf("\t\t2 notes\t=\t %d\n", remaining9/2);
   int remaining10 = remaining9%2;

   
    printf("\t\t1 note\t=\t %d\n", remaining10/1);

	return 0;

} 
