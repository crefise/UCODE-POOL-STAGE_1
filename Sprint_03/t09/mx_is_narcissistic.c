#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int sum  = 0;
    int n = num;
    int rozrad=1;
    int tempN = n;
    long del = 1;
    if (num < 0) {
        return false;
    }
    while (tempN !=0) {
       tempN = (tempN / 10);
       rozrad++;
       del = del * 10;
    } 
    rozrad--;
    del = del / 10;
    int count = rozrad;
    for (; rozrad > 0; rozrad--) {
        int num;
        int tempOut = n;
        tempOut = tempOut / del;
        num =  tempOut;
        n = n % del;
        del = del / 10;
        sum +=mx_pow(num,count);
    }      
    if (sum == num )
        return true;
    else
        return false;         
}
