/* Chapter 1: Exericse 17
Code from page 17
 */

#include <iostream>

int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal){
        int count = 1;
        while (std::cin >> val){
            if (val == currVal) ++count;
            else {
                std::cout << "The number " << currVal 
                          << " occurs " << count << " times" << std::endl;
                currVal = val;
                count = 1;
            }
        }
        std::cout << " The number " << currVal
                  << " occurs " << count << " times" << std::endl;
    }
    return 0;
}
