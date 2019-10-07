#include <stdio.h>
 void fibonic(int *n);
 int main(){
    int b,n,c;
      printf("please enter the celling number. \n");
       scanf("%d",&n);
      printf("The Fibonacci Numbers Up to %d Are The Following.\n",n);
         fibonic(&n);//call by reference
  return 0;
}
  void fibonic(int *k){
         int n=*k;
        int a[100],b[100],i;
        a[0]=0;
        a[1]=1;
        printf("%d \n%d \n",a[0],a[1]);
        for (i=2;i<=n;++i){
             a[i]=a[i-2]+a[i-1];
             if(n<=a[i]){
                break;
             }
       printf("%d \n",a[i]);}
    }
