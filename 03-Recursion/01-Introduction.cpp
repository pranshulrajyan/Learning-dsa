#include<iostream>
using namespace std;

int cnt = 1;
int n;
void recursion(){
    if(cnt == n){
        return;
    }
    else{
        cout << cnt << endl;
    }
    cnt++;
    recursion();
}

int main(){
    cout << "Enter a number: ";
    cin >> n;
    recursion();
}