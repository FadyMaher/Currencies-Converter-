#include "convert.h"
#include<fstream>
#include<string>
#include<iostream>
#include <sstream>
#include <vector>
using namespace std;
convert::convert()
{
from = 0 ;
to = 0 ;
amount = 0;
}

convert::convert(int f , int t,float a){
from = f;
to = t;
amount=a;
}


void convert :: setEquivalence(){
    std::ifstream file("rate.txt");
    std::string str;
    while (std::getline(file, str))
    {

    string buf; // Have a buffer string
    stringstream ss(str); // Insert the string into a stream
    vector<string> tokens; // Create vector to hold our words
    while (ss >> buf)
        tokens.push_back(buf);

    stringstream fromSS(tokens[0]);
    int fromInt;
    fromSS >> fromInt;

    stringstream toSS(tokens[1]);
    int toInt;
    toSS >> toInt;

    stringstream rateSS(tokens[2]);
    float rateFloat=0.0;
    rateSS >> rateFloat;

    if ((fromInt==from) && (toInt==to)){
        rate= rateFloat;

        break;
    }


    }


}

float convert:: getEquivalence(){
    equivalence = rate * amount;
    return equivalence;
}




