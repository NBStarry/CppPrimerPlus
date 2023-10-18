#include <iostream>

#include "sales.h"

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        double sum = 0;
        double max = ar[0];
        double min = ar[0];
        for(int i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
            sum += ar[i];
            if(ar[i] > max)
                max = ar[i];
            if(ar[i] < min)
                min = ar[i];
        }
        s.average = sum / n;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales & s)
    {
        double sum = 0;
        double max = 0;
        double min = 0;
        std::cout << "Please enter 4 sales: ";
        for(int i = 0; i < QUARTERS; i++)
        {
            std::cin >> s.sales[i];
            sum += s.sales[i];
            if(i == 0)
            {
                max = s.sales[i];
                min = s.sales[i];
            }
            else
            {
                if(s.sales[i] > max)
                    max = s.sales[i];
                if(s.sales[i] < min)
                    min = s.sales[i];
            }
        }
        s.average = sum / QUARTERS;
        s.max = max;
        s.min = min;
    }

    void showSales(const Sales &s)
    {
        std::cout << "Sales: ";
        for(int i = 0; i < QUARTERS; i++)
            std::cout << s.sales[i] << " ";
        std::cout << std::endl;
        std::cout << "Average: " << s.average << std::endl;
        std::cout << "Max: " << s.max << std::endl;
        std::cout << "Min: " << s.min << std::endl;
    }
}
