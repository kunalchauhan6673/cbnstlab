#include<stdio.h>
#include<math.h>
#define e 0.0001
double f(double x){
  return (x*x*x) - (2*x) -5;
}

// regular falsi method
double rf(double a, double b){
  return (a*f(b) - b*f(a))/(f(b)-f(a));
}

int main(){
   int n;
   double a,b,c;
   printf("Enter the max number of iterations: ");
   scanf("%d",&n);

   do{
     printf("Enter a and b: ");
     scanf("%lf %lf",&a,&b);

     if(f(a) * f(b) >= 0 ){
      printf("\nInvalid values");
      continue;
     }
     else{
        printf("The root lies between %lf and %lf ",a,b);
        break;
     }

   }while(1);


   for(int i=1;i<=n;i++){

    // calling regular falsi method
    c = rf(a,b);
    if(f(c)*f(a)<0){
        b = c; // replacing b if f(c) is negative
    }
    else{
        a = c; // replacing a if f(c) is positive
    }

    // checking if our answers lies in e range
    double d = rf(a,b);
    if(fabs(d-c) < e){
        printf("\nIterations is %d and the root is %lf",i,c);
        printf("\nHence,The root is %lf",c);
        return 0;
    }

    printf("\nIterations is %d and the root is %lf",i,c);
   }
   return 0;
}
