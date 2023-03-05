/******************************************************************************
3. Create a function in Array to reverse an array.

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
    int search(int value)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==value)
            return i;
        }
        return -1;
    }
    void reverse()
    {
        for(int i=0;i<size/2;i++)
        {
            int temp=arr[i];
            arr[i]=arr[size-i-1];
            arr[size-i-1]=temp;
        }
    }
    void display()
    {   for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        cout<<endl<<"Size is : "<<size<<endl;
    }
};
int main()
{
    Array a1;
    a1.insert(0,20);
    a1.insert(1,30);
    a1.insert(2,40);
    a1.insert(3,50);
    
    a1.display();
    int i=a1.search(50);
   if(i!=-1)
    cout<<"Element at index : "<<i<<endl;
    else
     cout<<"Element not found"<<endl;
     
     a1.reverse();
     a1.display();
    
    return 0;
}
