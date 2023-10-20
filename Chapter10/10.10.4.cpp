#include <iostream>

namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;

    public:
        Sales();
        Sales(const double ar[], int n);
        void showSales() const;
    };
}

int main()
{
    using namespace SALES;
    double ar[4] = {1.1, 2.2, 3.3, 4.4};
    Sales s1 {ar, 4};
    Sales s2;
    s1.showSales();
    s2.showSales();
    
    return 0;
}

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        double sum = 0;
        max = ar[0];
        min = ar[0];
        for(int i = 0; i < n; i++)
        {
            sales[i] = ar[i];
            sum += ar[i];
            if(ar[i] > max)
                max = ar[i];
            if(ar[i] < min)
                min = ar[i];
        }
        average = sum / n;
    }

    Sales::Sales()
    {
        double sum = 0;
        std::cout << "Please enter 4 sales: ";
        for(int i = 0; i < QUARTERS; i++)
        {
            std::cin >> sales[i];
            sum += sales[i];
            if(i == 0)
            {
                max = sales[i];
                min = sales[i];
            }
            else
            {
                if(sales[i] > max)
                    max = sales[i];
                if(sales[i] < min)
                    min = sales[i];
            }
        }
        average = sum / QUARTERS;
    }

    void Sales::showSales() const
    {
        std::cout << "Sales: ";
        for(int i = 0; i < QUARTERS; i++)
            std::cout << sales[i] << " ";
        std::cout << std::endl;
        std::cout << "Average: " << average << std::endl;
        std::cout << "Max: " << max << std::endl;
        std::cout << "Min: " << min << std::endl;
    }
}
