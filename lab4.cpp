#include <iostream>
#include <iomanip>
#include <cmath>


double Fn(double x){
    double y = (-6*(x*x))+(5*x)+3;
    return y;
}

double Integral(double x){
    double z = (-2*x*x*x)+(5.0/2*x*x)+(3*x);
    return z;
}

double EstimateWithTraps(double a, double b, int n){
    double dx = (b-a)/n;
    double integral = 0;
    for(int i=0; i<n; i++){
        integral += ((Fn(a+(dx*i))+ Fn(a+(dx*(i+1))))/2)*dx;
    }
    return integral;
}




int main()
{
double a;
std::cin >> a;
double b;
std::cin >> b;
double tolerance;
std::cin >> tolerance;
int n;
std::cin >> n;
double diff;


std::cout << std::fixed << std::setprecision(4);
std::cout << "Lower Range: " << a << std::endl;
std::cout << "Upper Range: " << b << std::endl;
std::cout << "Tolerance: " << tolerance << std::endl;
std::cout << "Initial trapezoid count: " << n << std::endl;

do{
    diff = std::abs((Integral(b) - Integral(a)) - EstimateWithTraps(a,b,n));
    std::cout << "Estimate:" << EstimateWithTraps(a,b,n) << ", Number of Traps:" << n << ", Diff:" << diff << std::endl;
    n*=2;
}
while(diff > tolerance);

return 0;
}