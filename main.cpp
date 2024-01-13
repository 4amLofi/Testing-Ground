#include <iostream>
#include <type_traits>

constexpr bool isConstantEvaluated()
{
    return std::is_constant_evaluated()? true:false;
}

int main()
{
    constexpr bool x{isConstantEvaluated()};

    std::cout << std::boolalpha << "is_constantly_evaluated(): " << x << '\n';

    return 0;
}