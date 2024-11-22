#include <iostream>
using namespace std;

int main(){
    int ant, eye;
    cin>>ant;
    cin>>eye;
    
    if(ant >= 3 && eye <= 4)
        cout<<"TroyMartian"<<'\n';
    if(ant <= 6 && eye >= 2)
        cout<<"VladSaturnian"<<'\n';
    if(ant <= 2 && eye <= 3)
        cout<<"GraemeMercurian"<<'\n';
}