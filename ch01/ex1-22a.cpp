/* Chapter 1: Exercise 22a */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1; // Read in first item.
    while (std::cin >> item2){
        item1 += item2;
    }
    std::cout << item1 << std::endl;
    return 0;
}

