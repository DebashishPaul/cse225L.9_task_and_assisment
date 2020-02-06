#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    int *ptr = new int[a];
    //int size = my_sizeof(ptr)/my_sizeof(ptr[0]);
    for(int i=0;i<=a;i++)
    {
        cin >>ptr[i];
    }
    for(int j=0;j<=a;j++)
    {
        cout <<ptr[j];
    }
    for(int k=0;k<=a;k++)
    {
        delete [] ptr;
    }
    cout<<ptr<<endl;
    //delete [] ptr;
    //cout<<ptr;
    return 0;
}
