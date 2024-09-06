#define MULTI(x, y) ((x) * (y))


template<typename T>
T Multiply(T const& x, T const& y)
{
    return x * y;
}


template<typename T>
T Split(T const& a)
{
    return (a / 5);
}


template<typename T1, typename T2>
void swap(T1 const& var1, T2 const& var2)
{
    T2 temp = var2;
    var2 = var1;
    var1 = temp;
}


int main()
{
    return 0;
}