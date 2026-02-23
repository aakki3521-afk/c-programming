 #include <stdio.h>
  #include <stdbool.h>

int main() {
    int n=1;
     //scanf("%d",&n);
     int left=0,right=n-1;
    int a[]={1,2,3,4,5};
     //for(int i=0;i<n;i++){
        //scanf("%d",&a[i]);
     //}
     int ok=1;
    while(left<right){
         if(a[left]!=a[right]){
             ok=0;
         }left++;
         right--;
     }printf(ok?"polindrome":"not a polindrome");
    
     return 0;
}





