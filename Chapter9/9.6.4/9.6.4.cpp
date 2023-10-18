#include "sales.h"

int main()
{
    using namespace SALES;
    Sales s1, s2;
    double ar[4] = {1.1, 2.2, 3.3, 4.4};
    setSales(s1, ar, 4);
    setSales(s2);
    showSales(s1);
    showSales(s2);
    
    return 0;
}