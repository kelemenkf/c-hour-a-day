#include <algorithm>
#include <iostream>

class DynamicFloats
{
private: 
    float* pFloat;
    int length;


public: 
    DynamicFloats(DynamicFloats&& src)
    {
        if (src.pFloat != NULL)
        {
            length = src.length;
            pFloat = src.pFloat;

            src.pFloat = NULL;
            src.length = 0;
        }
    }


    DynamicFloats& operator= (DynamicFloats&& src)
    {
        if ((src.pFloat != NULL) && (pFloat != src.pFloat))
        {
            delete[] pFloat;
            pFloat = src.pFloat;
            length = src.length;

            src.length = 0;
            src.pFloat = NULL;
        }

        return *this;
    }
};