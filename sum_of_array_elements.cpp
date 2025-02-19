#include <iostream>
using namespace std;

int findsum(int a[], int n){
    if(n==0){
        return 0;
    }
    return a[0]+ findsum(a+1, n-1);
}
int main()
{
    int n;
    cout<<"enter size: ";
    cin>>n;
    cout<< "enter array elements: ";
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum= findsum(a,n);
    cout<<"sum of elements: "<<sum;
    return 0;
}
