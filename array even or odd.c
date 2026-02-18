#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[50];
    int even=0,odd=0,count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
            }
            //count++;
            else{
                odd++;
                }
                }
            printf(" even: %d\n",even);

    
    printf("odd: %d",odd);
    return 0;
    }
