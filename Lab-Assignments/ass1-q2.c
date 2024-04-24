/*  Question : Write a program that calculates and prints the bill for a cellular telephone company. The
company offers two types of service: regular and premium. Rates vary based on the type
of service and are computed as follows: Regular service: $10.00 plus first 50 minutes are
free. Charges for over 50 minutes are $0.20 per minute. Premium service: $25.00 plus: a.
For calls made from 6:00 a.m. to 6:00 p.m., the first 75 minutes are free; charges for over
75 minutes are $0.10 per minute. b. For calls made from 6:00 p.m. to 6:00 a.m., the first
100 minutes are free; charges for over 100 minutes are $0.05 per minute.*/

#include<stdio.h>

// Function prototypes
float calculateRegularBill(int minutes);
float calculatePremiumDaytimeBill(int minutes);
float calculatePremiumNighttimeBill(int minutes);

// Main function
int main()
{
    int choice, minutes, daytimeMinutes, nighttimeMinutes;
    float regularBill, daytimeBill, nighttimeBill, totalBill;

    // Display service options
    printf("\n\nThe company offers two types of service: regular and premium.\n");
    printf("\n*************************************************************************");
    printf("\n\nFor bill calculation type: 1 for regular and 2 for premium : ");
    // Read user's choice
    scanf("%d", &choice);
    
    // Calculate bill for regular service
    if (choice == 1)
    {
        printf("Enter Minutes : ");
        scanf("%d", &minutes);
        regularBill = calculateRegularBill(minutes);
        printf("Total Bill: %.2f$\n", regularBill);
    }
    // Calculate bill for premium service
    else if (choice == 2)
    {
        printf("Enter minutes for calls made from 6:00 a.m. to 6:00 p.m.\n");
        scanf("%d", &daytimeMinutes);
        daytimeBill = calculatePremiumDaytimeBill(daytimeMinutes);

        printf("Enter minutes for calls made from 6:00 p.m. to 6:00 a.m.\n");
        scanf("%d", &nighttimeMinutes);
        nighttimeBill = calculatePremiumNighttimeBill(nighttimeMinutes);

        // Calculate total bill and subtract $25 discount
        totalBill = (daytimeBill + nighttimeBill) - 25.00;
        printf("Total Bill: %.2f$\n", totalBill);
    }
    
    return 0;
}

// Calculate bill for regular service
float calculateRegularBill(int minutes)
{
    float result;
    // Subtract 50 minutes from the total
    minutes -= 50;
    // Calculate bill based on remaining minutes
    result = minutes * 0.20;
    // Add a fixed charge of $10
    result += 10.00;
    return result;
}

// Calculate bill for premium daytime service
float calculatePremiumDaytimeBill(int minutes)
{
    float result;
    // Add 75 minutes to the total
    minutes -= 75;
    // Calculate bill based on total minutes
    result = minutes * 0.10;
    result += 25;
    return result;
}

// Calculate bill for premium nighttime service
float calculatePremiumNighttimeBill(int minutes)
{
    float result;
    // Subtract 100 minutes from the total
    minutes -= 100;
    // Calculate bill based on remaining minutes
    result = minutes * 0.05;
    result += 25;
    return result;
}
