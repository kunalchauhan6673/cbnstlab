// 1) Write a c program to compute error, absolute error, relative error and relative error percentage. (take true value of pi = 3.141592 and approx. value of pi = 22/7)

#include<stdio.h>
#include<math.h>
#define pie 3.141592
void error(double);
int main(){
    double apie = 22.0/7;
    error(apie);
}
void error(double apie){
    double absoluteError = fabs(pie - apie);
    double relativeError = absoluteError/pie;
    double percentageError = relativeError*100;
    printf("The absoluteError, relativeError, percentageError are: %lf, %lf, %lf", absoluteError, relativeError,percentageError);
}
