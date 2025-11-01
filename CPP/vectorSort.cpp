#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n ;
    cin >> n ;
    
    vector<int> a ;
    for(int i =0 ; i<n ;i++){
        int v ;
        cin >> v;
        a.push_back(v);
    }
    
    sort(a.begin(),a.end());
    
    for(int i =0 ; i<n ;i++){
        cout << a[i]<<" ";
    }
    
    return 0;
}
