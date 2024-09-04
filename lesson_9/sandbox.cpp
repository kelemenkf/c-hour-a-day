#include <iostream>
using namespace std;

class Utility
{
    public:

        int id;
        Utility(int num);
        ~Utility();

        static void DisplayeAge()
        {
            cout << "Age" << endl;
        }
};

int main()
{
    unsigned int num = 90;
    unsigned int& ref = num;

    cout << ref << endl;

    Utility util(349);
    util.DisplayeAge();

    return 0;
}

Utility::Utility(int num)
{
    id = num;
}

Utility::~Utility()
{

}

