/******************************************************************************
10. Create a function in Array to reverse an array.

*******************************************************************************/

#include <iostream>

using namespace std;

class Array{
    int *arr;
    int size;
    int capacity;
    public:
    Array()
    {
      arr=new int[1];
        size=0;
        capacity=1;
    }
    void insert(int index,int value)
    {   if(size==capacity)
         resize();
       
        arr[index]=value;
        size++;
    }
    void resize()
    {
        int *temp=new int[2*size];
        for(int i=0;i<size;i++)
        {
            temp[i]=arr[i];
        }
        delete []arr;
        arr=temp;
        capacity*=2;
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
    void sort()
    {
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                  int temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
                }
            }
        }
    }
    int getSize()
    {  
        return size;
    }
    int getcapacity()
    {
        return capacity;
    }
    void display()
    {   for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"Size is : "<<size<<endl;
        cout<<"Capacity is : "<<capacity<<endl;
    }
};
int main()
{
    Array a1;
    a1.insert(0,60);
    a1.insert(1,30);
    a1.insert(2,80);
    a1.insert(3,50);
   a1.insert(4,10);
    
    a1.display();
    int i=a1.search(50);
   if(i!=-1)
    cout<<"Element at index : "<<i<<endl;
    else
     cout<<"Element not found"<<endl;
     
     a1.reverse();
     a1.display();
     
     a1.sort();
     a1.display();
     
     cout<<"Size of this array : ";
     cout<<a1.getSize()<<endl;
     cout<<"capacity of this array : ";
     cout<<a1.getcapacity()<<endl;
     
    
    return 0;
}
