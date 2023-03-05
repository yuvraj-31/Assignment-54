/******************************************************************************
1. Create an ADT array without using STL.
*******************************************************************************/

#include <iostream>

using namespace std;

class Array{
    int arr[20];
    int size;
    public:
    Array()
    {
        size=0;
    }
    void insert(int index,int value)
    {   if(index<0 || index>=20)
        cout<<"index is invalid"<<endl;
        else
        arr[index]=value;
        size++;
    }
    void display()
    {   for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        cout<<endl<<"Size is : "<<size;
    }
};
int main()
{
    Array a1;
    a1.insert(0,20);
    a1.insert(1,30);
    a1.insert(2,40);
    a1.display();
    return 0;
}
