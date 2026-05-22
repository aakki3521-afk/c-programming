#include <stdio.h>
int main() {
   int n;
printf("enter the number:");
scanf("%d",&n);
int thousand=n/1000;//1234/1000=
printf("the thousand degit :%d\n",thousand);
int third=n/100;//
int hundred=third%10;
printf("the third degit :%d\n",hundred);
int ten=n/10;
int tens=ten%10;
printf("the tens place is :%d\n",tens);
int one=n%10;
int ones=one%10;
printf("the once degit is :%d\n",ones);

/*int n;
printf("ENTER THE NUMBER: ");
scanf("%d",&n);
int thousand=n%1000;
printf("the thousands place of: %d\n",thousand);
int hundred=n%100;
printf("the hundred place of: %d\n",hundred);
int ten=n/10;
printf("the ten place of: %d\n",ten);
int once=n%10;
printf("the once place of: %d\n",once);
*/


    
    return 0;
}