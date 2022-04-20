#include<iostream>
#include<string>
using namespace std;
struct Pizza
{
    char name[30];
    int dia;
    int weight;
};
int main()
{
    Pizza piz;

    cout<<"\nEnter the Following Details: \n";
    cout<<"Enter the name of the Brand: ";
    cin.getline(piz.name,30);
    cout<<"Enter Diameter of Pizza: __ cm\b\b\b\b\b";
    cin>>piz.dia;
    cout<<"Enter the Weight of Pizza: ___ g\b\b\b\b\b";
    cin>>piz.weight;

    cout<<"\nEntered Details: \n";
    cout<<"\nBrand Name: "<<piz.name;
    cout<<"\nDiameter: "<<piz.dia<<" cms";
    cout<<"\nWeight: "<<piz.weight<<" grams\n\n";

    return 0;
}