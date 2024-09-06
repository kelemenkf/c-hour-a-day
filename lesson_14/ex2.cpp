template<typename T1, typename T2>
class arrayClass
{ 
    T1 array1[10];
    T2 array2[10];

public:
    T1& getArray1Element(int index)
    {
        return array1[index];
    }


    T2& getArray2Element(int index)
    {
        return array2[index];
    }
};


int main()
{
    return 0;
}