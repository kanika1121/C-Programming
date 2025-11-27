// WAP to print first 'n' natural number.

#include<stdio.h>
int main(){
  
  int n;
  int i=1; // initialization
  system("cls");
  printf("ENTER THE VALUE OF 'n' : ");
  scanf("%d",&n);
  for(;i<=n;i++){ 
    printf("%d\n",i); 
  }
 sleep(10);
 printf("run the program again"); 
 return 0; 

}