#include  <iostream>
using namespace std;

int fn(int a[], int key, int n){
    int left = 0;
    int right = n-1;

    while(left < right){
        if(a[left] == key){
            return left;
        }
        if(a[right] == key){
            return right;
        }
        left++;
        right--;
    }
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    int key;
    cin >> key;

    cout << fn(a,key,n);
    return 0;
}