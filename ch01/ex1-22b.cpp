/* Chapter 1: Exercise 22b */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    for (Sales_item item2; std::cin >> item2; item1 += item2)
    std::cout << item1 << std::endl;
    return 0;
}

