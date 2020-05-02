#include<iostream>
#include<math.h>
#include <iomanip>
#define dd double
using namespace std;

int main()
{
dd a, b, c, s, n, r;

while(scanf("%lf%lf%lf", &a, &b, &c)==3){
    if(a==0 || b==0 || c==0){
        cout << "The radius of the round table is: 0.000" << endl;
    }
    else{
        s = (a+b+c)/2;
        n = (s-a)*(s-b)*(s-c)/s;
        r = sqrt(n);
        cout << "The radius of the round table is: " << std::setprecision(5) << r << endl;
    }
    
}
    
return 0;
}
