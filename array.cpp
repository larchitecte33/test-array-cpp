#include<string>
#include<iostream>
#include<iterator>
#include<algorithm>
#include<array>

using namespace std;

class A {};

int main() {
    array<int, 3> a1 = {2, 1, 3};
    array<string, 2> a2 = {"a", "b"};
    array<int, 3> a3;

    // Affiche 3 1 2
    reverse_copy(begin(a1), end(a1), ostream_iterator<int>(cout, " "));

    cout<<endl;

    sort(a1.begin(), a1.end());

    // Affiche 1 2 3
    for (int i = 0; i < a1.size(); i++)
        cout << a1.at(i) << " ";
    
    cout<<endl;

    cout<<is_array<A>::value<<endl;
    cout<<is_array<A[]>::value<<endl;

    cout<<"a2.front() = "<<a2.front()<<endl;
    cout<<"a2.back() = "<<a2.back()<<endl;
}