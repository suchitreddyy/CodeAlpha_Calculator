#include<stdio.h>
void main()
{    
int number1,number2;   
char operat;    
printf("enter 1st number\n"); 
scanf("%d",&number1);   
printf("enter 2nd number\n");  
scanf("%d",&number2);    
printf("Enter operator\n");   
scanf(" %c",&operat);  
switch(operat){        
            case '+': printf("Addition : %d + %d = %d",number1,number2
                ,number1+number2);      
            break;      
            case '-':printf("Subraction : %d - %d = %d",number1,number2,number1-number2);     
            break;  
            case '*':printf("Multiplication :%d * %d = %d",number1
               ,number2,number1*number2);       
            break;       
           case '/':printf("Division :%d / %d = %d",number1,number2
              ,number1/number2);     
           break;     
           default : printf("Invalid operator\n");    
}
}