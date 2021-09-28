#include <stdio.h>  
int main()  
{  
    //Declaring variable
    int cardnumber; 
    //Prompting user to enter Card Number  
    printf("Enter your Card Number?");   
    scanf("%d",&cardnumber);  
    if(cardnumber>=18 && cardnumber <= 1000)  
    {   
        //Printing the message to allow or deny the user entry
        printf("You are eligible to attend the match...");   
    }  
    else   
    {  
        printf("Sorry ... you can't enter");   
    }  
}