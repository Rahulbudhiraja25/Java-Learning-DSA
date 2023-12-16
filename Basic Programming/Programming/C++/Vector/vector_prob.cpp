#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector<int>a[n];
    for(int i=0;i<n;i++){
    int m;
    cin>>m;
    int k;
    for(int j=0;j<m;j++){
        
        cin>>k;
        a[i].push_back(k);
    }}
    
    int y,z;
    for(int x=1;x<=q;x++){
        cin>>y>>z;
        cout<<a[y][z]<<endl;
    }
    return 0;
}