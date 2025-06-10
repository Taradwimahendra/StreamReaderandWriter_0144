#include<iostream>
#include<execution>
#include<array>
using namespace std;

int main(){
    cout << "Awal Program" << endl;
    try
    {
        array<int, 3> data = {10, 20, 30};

        cout<<data.at(5)<<endl;
    }
    catch(exception& e)
    {}