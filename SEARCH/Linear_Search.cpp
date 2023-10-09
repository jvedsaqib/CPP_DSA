#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cout << "Enter length : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int number;
        cout << "Enter " << i <<"th element : ";
        cin >> number;
        arr.push_back(number);
    }

    int key;

    cout << "Enter the key : ";
    cin >> key;

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            cout << "Element found!!!";
            return 0;
        }
    }
    cout << "Element not found!!!";

}