#include<stdio.h>    
int main(){  
//Declaring variable  
int totalmarks;  
//Prompting user to enter marks
printf("enter your marks:");    
scanf("%d",&totalmarks);
//Calculating the logic and printing the results 
if(totalmarks>=0 && totalmarks <=19){    
printf("Your mean Grade is D (Poor)");    
}      
if(totalmarks>=20 && totalmarks <=30){    
printf("Your mean Grade is D (Poor)");    
}    
else if(totalmarks>=31 && totalmarks <=40){    
printf("Your mean Grade is C (Fair)");     
}    
else if(totalmarks>=41 && totalmarks <=50){    
printf("Your mean Grade is B (Good)");     
}  
else if(totalmarks>=51 && totalmarks <=60){    
printf("Your mean Grade is B (Good)");     
}    
else{    
printf("Your mean Grade is A (Excellent)");    
}    
return 0;  
}