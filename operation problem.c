#include <stdio.h>
int main() {
    //int num;
    /* ascanf("%d",&num);
   /* int even=0,odd=0;
    while(num<40){
        printf("num=%d:\n",num);
        //num=num+2;
        if(num%2==0){
            even++;
        }else{
            odd++;
        }
    }printf("%d is the even num",even);
    printf("%d is the odd num",odd);*/
    //*int a=0;
    /*sscet:{
        printf("a=%d \n",a);
    }
    a+=2;
    if(a<40)
        //a+=2;

    goto sscet;
    */

    
    /* int A,B;
char OPERATION;
int result;
printf ("Enter a value for A :  ");
scanf ("%d",&A);
printf("\n");
printf ("Enter a value for B :  ");
scanf ("%d",&B);
printf("\n");
printf("Enter an operation  :  ");
scanf(" %c",&OPERATION);
  //if (OPERATION == '+')
  { 
     result =A+B;
    printf ("A=%d %c %d =%d", A ,OPERATION ,B,result);
   // printf("%d",result);
  }

    //break;
  
*/

   /*local variable defination*/
    /*char grade ='F';
    switch (grade){
        case 'A':
          printf("Excellent \n");
          break;
          case 'B':
          case 'c':
          printf(" Well done \n");
          break;
          case 'D':
          printf("you passed \n");
          break;
          case 'F':
          printf("better try again \n");
          break;
    
default:
          printf("INCVALID GRADE\n");
    }
          printf("you GRADE IS %C \n",grade);

   // } 
    */



    char oppe;
    double firstnum;
    double secondnum;
    printf("enter an operater(+,-,*,/):");
    scanf("%c",&oppe);
    printf("enter first operand:\n");
    scanf("%lf",&firstnum);
    printf("enter the second operand:\n");
    scanf("%lf",&secondnum);
    switch(oppe){
        case '+':
        printf("%.lf+ %.lf=%.lf", firstnum,secondnum ,firstnum+secondnum);
        break;
        case '-':
        printf("%.lf-%.lf=%.lf", firstnum,secondnum,firstnum-secondnum);
        break;
        case '*':
        printf("%.lf* %.lf=%.lf", firstnum+secondnum,firstnum*secondnum);
        break;
        case '/':
        printf("%.lf/ %.lf=%.lf", firstnum,secondnum,firstnum/secondnum);
        break;
    default :
    printf("Error! operator is not correct");

    }



    return 0;
}