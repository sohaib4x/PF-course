#include <stdio.h>

// function prototypes
void design();
void design2();
float perCal(float,float,float,float,float);

int main(){

    //calling design function
    design();

    float cal,pf,eng,dld,pst;
    
    //input marks
    printf("\n\t\tEnter your marks of Calculus : ");
    scanf("%f",&cal);
    if(cal>100){
        printf("\n\t\tYou have enter marks greater than 100.");
        return 0;
    }

    printf("\n\t\tEnter your marks of Programming Fundamentals : ");
    scanf("%f",&pf);
    if(pf>100){
        printf("\n\t\tYou have enter marks greater than 100.");
        return 0;
    }

    printf("\n\t\tEnter your marks of English: ");
    scanf("%f",&eng);
    if(eng>100){
        printf("\n\t\tYou have enter marks greater than 100.");
        return 0;
    }
    

    printf("\n\t\tEnter your marks of Digital Logic Design : ");
    scanf("%f",&dld);
    if(dld>100){
        printf("\n\t\tYou have enter marks greater than 100.");
        return 0;
    }

    printf("\n\t\tEnter your marks of Pakistan Studies : ");
    scanf("%f",&pst);
    if(pst>100){
        printf("\n\t\tYou have enter marks greater than 100.");
        return 0;
    }

    
   //calling percentage function
   float per = perCal(cal,pf,eng,dld,pst); 
   
   //Conditions for divisions
   if(per>=60){
        printf("You got first division.");
   }
       else if(per>=50 && per<60){
          printf("You got 2nd division.");
       }
          else if(per>=40 && per<50){
           
            printf("You got 3rd division.");
          }
          
            else{
                printf("You are fail, Better luck next time.");
            }

            design2();
            return 0;
          }

//function definitions
float perCal( float cal,float pf,float eng,float dld,float pst){

    float per = 0.0;

    float obtain = 0.0;

    obtain = cal+pf+eng+dld+pst;

    per = (obtain/500)*100;
    printf("\n\t\tYour percentage is %f and ",per);

    return per; 
    
}
//function definition for header design
void design(){
    printf("\n*************************^^^^^^^^^^^^^^^^^^^^^^^^^^*****************************\n\n");
    printf("\t\t\tWelcome to percentage Calculator\n\n");
    printf(" NOTE : If you put any subject marks greater than 100 the program will terminate\n");
    printf("--------------------------------------------------------------------------------\n");

}
//function definition for footer design
void design2(){
    printf("\n================================================================================\n\n");
    printf("\t\t\tPercentage Calculation Ended:");
    printf("\n\n===================<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>=============================\n");

} 
