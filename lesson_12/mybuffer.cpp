#include <iostream>
#include <algorithm>
using namespace std;

class MyBuffer
{
private: 
    int* myNums;
    unsigned int bufLength;

public:
    MyBuffer(unsigned int length)
    {
        bufLength = length; 
        myNums = new int[length];
    }


    MyBuffer(const MyBuffer& src)
    {
        bufLength = src.bufLength;
        myNums = new int[bufLength];
        copy(src.myNums, src.myNums + bufLength, myNums);        
    }


    MyBuffer(MyBuffer&& src)
    {
        if (src.myNums != NULL)
        {
            bufLength = src.bufLength;
            myNums = src.myNums;

            src.myNums = NULL;
            src.bufLength = 0;
        }
    }


    MyBuffer& operator = (const MyBuffer& src)
    {
        if (myNums != src.myNums)
        {
            if (myNums)
                delete myNums;

            bufLength = src.bufLength;
            myNums = new int[bufLength];
            copy(src.myNums, src.myNums + bufLength, myNums);
        }


        return *this;
    }
};