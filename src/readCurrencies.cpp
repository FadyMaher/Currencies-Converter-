#include "readCurrencies.h"
#include<iostream>
#include<fstream>
readCurrencies::readCurrencies()
{
}
void readCurrencies::printCurrencies()
{

    std::ifstream file("input.txt");
    std::string str;
    while (std::getline(file, str))
    {
        cout << str<<endl;
    }


}
