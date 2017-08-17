/* Chapter 1: Exericse 10 */

#include <iostream>

int main()
{
    int val = 10, sum = 0;
    while (val >= 0){
        sum += val;
        std::cout << val << std::endl;
        --val;
    }
    return 0;
}
