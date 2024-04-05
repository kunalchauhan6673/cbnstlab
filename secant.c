// secant method
#include<stdio.h>
#include<math.h>
#define e 0.0001
double f(double x){
    return (x*x*x) - (2*x) - 5;
}

// secant method
double sc(double n1,double n2){
   return  (n1*f(n2)-n2*f(n1))/(f(n2)-f(n1));
}
int main(){
  int n;
  double n4,n1,n2,n3;
  printf("Enter the max iterations: ");
  scanf("%d",&n);
  printf("Enter two numbers: ");
  scanf("%lf %lf",&n1,&n2);

  n3 = sc(n1,n2);
  for(int i=1;i<=n;i++){
    n1 = n2;
    n2 = n3;
    n3 = sc(n1,n2);
    if( fabs (n3-n2) <e)
        {
        printf("\nThe iteration is %d and the root is %lf",i,n3);
        printf("\nHence the root is %lf",n3);
        return 0;
        }
    printf("\nThe iteration is %d and the root is %lf",i,n3);

  }
  return 0;
}
