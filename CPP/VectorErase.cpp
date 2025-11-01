#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    cin >> n ;
    
    vector<int>a;
    for(int i =0 ; i<n ; i++ ){
        int d ;
        cin >> d ;
        a.push_back(d);
    }
    
    int x ;
    cin >> x ;
    
    a.erase(a.begin() + (x-1));
    
    int z , y ;
    cin >>  z >> y ;
    
    a.erase(a.begin()+(z-1) , a.begin()+(y-1));
    
    cout <<a.size()<<endl;
    for(int i =0 ; i<a.size() ; i++){
        
        cout <<a[i]<<" ";
    }
       
    return 0;
}
