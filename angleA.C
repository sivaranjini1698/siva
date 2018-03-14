
#include <iostream>
#include <math.h>
void cal_sin(float n)
{    
    float accuracy = 0.0001, denominator, sinx, sinval;
    n = n * (3.142 / 180.0); 
 
    float x1 = n;
    sinx = n;         
    sinval = sin(n);    
    int i = 1;
    do
    {
        denominator = 2 * i * (2 * i + 1);
        x1 = -x1 * n * n / denominator;
        sinx = sinx + x1;
        i = i + 1;
    } while (accuracy <= fabs(sinval - sinx));
    cout << sinx;
}
int main()
{
    float n = 90;
    cal_sin(n);
    return 0;
}
