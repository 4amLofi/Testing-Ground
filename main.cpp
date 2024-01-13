#include <iostream>
#include <type_traits>

consteval auto compileTime(auto value)
{
    return value;
}

constexpr bool isConstantEvaluated()
{
    return std::is_constant_evaluated();
}

int main()
{
    constexpr bool x{compileTime(isConstantEvaluated())};
    std::cout << std::boolalpha << "value x is_constantly_evaluated(): " << x << '\n';

    bool y{compileTime(isConstantEvaluated())};
    std::cout << std::boolalpha << "value y is_constantly_evaluated(): " << y << '\n';

    std::cout << std::boolalpha << "consteval literal is_constantly_evaluated(): " << compileTime(isConstantEvaluated()) << '\n';

    std::cout << std::boolalpha << "literal is_constantly_evaluated(): " << isConstantEvaluated() << '\n';

    return 0;
}