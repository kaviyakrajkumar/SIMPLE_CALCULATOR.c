#include<stdio.h>
int main(){
   char operation;
   double num1,num2,result;

   printf("simple Calculator\n");
   printf("Enter operation(+,_,*,/,%):");
   scanf("%c", &operation);

   printf("Enter two numbers:");
   scanf("%lf%lf",&num1,&num2);

switch(operation){
  case'+':
   result=num1+num2;
   printf("%.2lf+%.2lf=%.2lf\n",num1,num2,result);
   break;

  case'-':
   result=num1-num2;
   printf("%.2lf-%.2lf=.2lf\n",num1,num2,result);
   break;

  case'*':
   result=num1*num2;
   printf("%.2lf*%2lf=%.2lf\n",num1,num2,result);
   break;

 case'/':
   if(num2==0){
   printf("Error:division by zero is not allowed.\n");
   }else{
   result=num1/num2;
   printf("%.2lf/%.2lf=%.2lf\n",num1,num2,result);
   }
   break;

 case'%':
   if((int)num2==0){
     printf("error:modulus by zero is not allowed.\n");
     }
     else
     {
     result=(int)num1%(int)num2;
     printf("%.0lf%%%.0lf=%.0lf\n",num1,num2,result);
     }
     break;
   default:
     printf("Invalid operator.\n");
   }
   return 0;
}