#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

int main()
{
    using namespace boost::multiprecision;

    // Repeat at arbitrary precision:
    cpp_int u = 2;
    cpp_int result = pow(u, 1000);

    int sum = 0;
    for (auto elem : result.str()) // use the string representation
        sum += elem-'0';

    std::cout << result.str() << std::endl; // prints 2^1000
    std::cout << sum << std::endl; // prints the sum of the digits
}