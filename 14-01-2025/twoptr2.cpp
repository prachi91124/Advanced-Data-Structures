//using recursion
#include <iostream>
using namespace std;

int helper(int left, int right, int a[],int key){
    if(left > right){
        return -1;
    }
    if(a[left] == key) return left;
    if(a[right] == key) return right;
    helper(left+1,right-1,a,key);
}
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cin >> key;

    int left = 0;
    int right = n-1;
    cout << helper(left,right,a,key);
    return 0;
}