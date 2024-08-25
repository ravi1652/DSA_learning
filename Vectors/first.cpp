#include <bits/stdc++.h>
using namespace std;

void vector_first(){
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    cout<<v[1]<<endl;
    vector<int> a(2,500);
    vector<int> b(a);
    cout<<b[1];
}
int main(){
    vector_first();
    return 0;
}