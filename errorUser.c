#include<stdio.h>
#include<math.h>
#define trueValue 24.785673
void error(double);
int main(){
 double exactValue;
 printf("Enter exact value : ");
 scanf("%lf",&exactValue);
 error(exactValue);
}
void error(double exactValue){
  double absoluteError = fabs(trueValue - exactValue);
  double relativeError = absoluteError/trueValue;
  double percentageError =  relativeError*100;

  printf("\nThe absoluteError,relativeError and percentageError are %lf, %lf and %lf resp.",absoluteError,relativeError,percentageError);
}
