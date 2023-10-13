#include <iostream>
#include <vector>

using namespace std;

vector<int> bubble_sort(vector<int> v){

    for(int i = 0; i < v.size(); i++){
        for(int j = i; j < v.size(); j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    return v;
}

int main(){
    vector<int> v = {1,3,2,5,4};

    for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }

    v = bubble_sort(v);
    cout << endl;

    for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }

}