/*
Problem: A palindrome is a number (or string of characters) that reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector> 

using namespace std;

//function to check for palindrome. 
bool is_palindrome(string palind);

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

 