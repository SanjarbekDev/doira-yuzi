
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int r1,r2,r3;
    cin>>r1>>r2>>r3;
    const double pi = 3.14159265636;
    double s1 = pi*r1*r1;
    double s2 = pi*r2*r2;
    double s3 = pi*r3*r3;
    printf("%.2f %.2f %.2f", s1,s2,s3);
    return 0;
}
