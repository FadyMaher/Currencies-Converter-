#include <iostream>
#include<sstream>
#include"readCurrencies.h"
#include"convert.h"
using namespace std;

int main()
{
    stringstream ss("123");
int x;
ss >> x;



    readCurrencies r;
    r.printCurrencies();



    int from, to;
    float amount;
    cout << "Please enter the currency you would like to convert from ===> ";
    cin >>from;
    cout << "Please enter the currency you would like to convert to ===> ";
    cin >> to;
    cout << "Please enter the amount ===> ";
    cin >> amount;
    convert c(from,to,amount);
    c.setEquivalence();
    cout << c.getEquivalence()<<endl;



    return 0;
}
