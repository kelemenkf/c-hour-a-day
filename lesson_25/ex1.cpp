#include <iostream>
#include <bitset>
using namespace std;


int main()
{

    bitset<4> flags {"1001"};

    cout << flags << endl;

    bitset<4> flags2 {"0011"};

    unsigned long sum = flags.to_ulong() + flags2.to_ulong();

    cout << sum << endl;

    cout << flags.flip() << endl;

    return 0;
}