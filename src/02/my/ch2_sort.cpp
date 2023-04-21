#include<iostream>

int main()
{
    double a[256];
    int n = 0;
    std::cout << "Enter at most 256 numbers separated by white space: ";
    while (n<256 && std::cin >> a[n])
        n++;
    double tmp;
    int i,j;
    for (i=0;i<n-1;i++)
        for (j=n-1;j>i;--j)
            if (a[j-1]>a[j]) {
                tmp = a[j-1];
                a[j-1] = a[j];
                a[j] = tmp;
            }
    for (i=0;i<n;i++)
        std::cout << a[i] << " ";
    std::cout << "\n";
}