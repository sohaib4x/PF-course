/*Program to compare elements of array to check common elements*/
 #include <stdio.h>
// Main function
int main()
{
   int i, j, num, arr1[100],arr2[100]; //declaration

   //design
   printf("\n\nComparing Elements of Two Arrays:\n");
   printf("------------------------------------------------------------------------\n");
    
   //To decide how many elements to store in arrays 
   printf("Enter how many elements you want to store in the arrays : ");
   scanf("%d",&num);

   //Elements of 1st array
   for(i = 0; i<num; i++){
    printf("\nEnter element at index %d of 1st array : ",i);
    scanf("%d", &arr1[i]);
    }

    // //Elements of 2nd array
    printf("\n\n2nd Array");
    for(j = 0; j<num; j++){
    printf("\nEnter element at index %d of 2nd array : ");
    scanf("%d", &arr2[j]);   
   }

   

   //Conditions for common elements.
   printf("\n\nCommon elements are : "); 
   for(i=0; i<num; i++){
    for(j=0; j<num; j++){
        if(arr1[i]==arr2[j]){
            printf("%d  ",arr1[i]);
        }
    }
   }
}
