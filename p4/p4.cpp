//  Rodolfo Gutierrez
//  Stack.cpp
//  Lab6
//
//  Created by Rodolfo Gutierrez on 10/30/13.
//  Copyright (c) 2013 Rodolfo Gutierrez. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector> 

using namespace std;

bool is_palindrome(string palind);
//void post_fix(string e);

string temp;

int main()
{
    string palind;
    string n;
    
    long value=0;
    string result;
    stringstream mystream;

    //vector for palindromes
    vector<string> myvec, myvec1; 
    

    for (int i=999; i>0; i--) {

            for (int j=0; j<=999; j++) {

        mystream.str("");
        value = j * i;
        mystream << value;
        result = mystream.str();

        cout << "i value: " << i << '\n'; 
        cout << "j value: " << j << '\n';
        cout << "result (before palindrome test): " << result << '\n';

    if (is_palindrome(result)) {
        cout << result << " is a palindrome" << '\n' << '\n';
        myvec.push_back(result);
        }
    
    else  {
        cout << result << " is not a palindrome" << '\n';
        cout << "result (after): " << result << '\n' << '\n';
    }
  }

}

for (int i=0; i < myvec.size(); i++) {

    string tempstring;
    tempstring = myvec[i];

    if (tempstring.length() >= 6)
    {
      cout << "palindrome size(6): " << myvec[i] << '\n';
      stringstream mystream1; 
      mystream1 << myvec[1]; 
  }
  else {}

    }
}

bool is_palindrome(string palind)
{
    string temp;
    temp=palind;
    reverse(temp.begin(), temp.end());
    return temp == palind;
 
 }

 