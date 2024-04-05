// bisection
#include<stdio.h>
#include<math.h>
#define e 0.0001
double f(double x){
    return (x*x*x) - 2*x - 5;
}
double bisect(double x1, double x2){
    return (x1+x2)/2;
}
int main(){
    int n;
    double x,x1,x2;
    printf("Enter the max number of iterations: ");
    scanf("%d",&n);

    //  checking if our numbers are eligible for operation to be performed

    do{
        printf("Enter the number1 and number2 : ");
        scanf("%lf %lf",&x1,&x2);

        if(f(x1)*f(x2)>=0){
            printf("|n Invalid roots!");
        }
        else{
            printf("\nRoots is between %lf & %lf",x1,x2);
            break;
        }
    }while(1);


    for(int i=1;i<=n;i++)
    {
        // applying bisection method
        x = bisect(x1,x2);

        if(f(x)*f(x1)<0){
           x2 = x; // f(x1) is negative, this means f(x) is positive replace x2
        }
        else
        {
            x1 = x; // else if f(x) is negative, replace x1

        }

        // checking if our answer falls in e range, if yes then print for last time
        double x3 = bisect(x1,x2);
        if(fabs(x3-x)<e){
            printf("\nIteration is %d and root is %lf",i,x);
            printf("\nHenc,the root is %f",x);
            return 0;
        }
        printf("\nIteration is %d and root is %lf",i,x); // printing trial roots if the above condition is not met

    }
    return 0;
}
