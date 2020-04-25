#include <iostream>

using namespace std;
int minimum(int arr[],int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>res)
        {
            res=arr[i];
        }

    }
    return res;
}

int main()
{
    int arr[]={13,12,32,45,54};
    int n=5;
    //minimum(arr,n);
    cout << minimum(arr,n) << endl;
    return 0;
}
