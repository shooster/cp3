/* Chapter 1: Exericse 11b */

#include <iostream>

int main()
{
    int v1 = 0, v2 = 0, swp=0;
    std::cout << "Enter two numbers " << std::endl;
    std::cin >> v1 >> v2;
    if (v1 >= v2){ // Swap the values of v1 and v2
        swp = v1;
        v1 = v2; 
        v2 = swp;
    }
    while (v1 <= v2){
        std::cout << v1 << std::endl;
        ++v1;
    }
    return 0;
}
