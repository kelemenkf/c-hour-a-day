#include <iostream>
#include <vector>
using namespace std;

template<typename Numerical>
struct DoubleInput
{
    int count;

    DoubleInput(int countInput = 0) : count(countInput) {};

    void operator () (const Numerical& num)
    {
        cout << (num*2) << " ";
        ++count;
    }
};


int main()
{
    vector<int> intVector {4, 6, 2, 6};
    vector<double> doubleVector {3.5, 5.2, 7.4, 1.6};

    DoubleInput<int> intResult;

    intResult = for_each(intVector.cbegin(), intVector.cend(), DoubleInput<int>());
    cout << "Predicate was used " << intResult.count << " times" <<  endl;

    DoubleInput<double> doubleResult;

    doubleResult = for_each(doubleVector.cbegin(), doubleVector.cend(), DoubleInput<double>());
    cout << "Predicate was used " << doubleResult.count << " times" << endl;   

    return 0;
}