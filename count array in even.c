#include <stdio.h>
int main() {
int arr[5];
int n=5;
int count=0;
printf("enter the num");
scanf("%d",&arr[5]);
for( int i=0;i<n;i++){

    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        count++;
    }
}
  printf("total even num are=%d\n",count); 
    


    
    return 0;
}