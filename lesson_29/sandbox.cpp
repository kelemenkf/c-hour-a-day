#include <iostream>
#include <concepts>
#include <ranges>
using namespace std;


template <typename T>
concept AnyNumericType = floating_point<T> || integral<T>;

template<typename T1, typename T2>
requires AnyNumericType<T1> && AnyNumericType<T2>
double DivideAnyNumericType(T1 dividend, T2 divisor)
{
    return (dividend / divisor);
}

int main()
{   
    cout << DivideAnyNumericType(3, 9.7) << endl;
    return 0;
}