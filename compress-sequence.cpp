#include <iostream>
#include <string>
using namespace std;

int main(){
    // create 3 string that we will be using during the programe .
    string str , s = "" , num = ""; //str is the string that we will be compressing , s is the returnd string .
                                    // num will be storing the number after converting it into a string .
    getline(cin,str);        // its for get the sequence from the user .
    int n = 0;               // storing number of how many times the character is repeated .

    for ( int j, i = 0; i < (int)str.length() ; ){
        if ( str[i] == ' '){        // this part is handling the case of the space .
            s.insert(s.end(),' ');
            i++;
            continue;
        }
            n = 1;
        num.clear();
        for (  j = i+1 ; j <= (int)str.length() ; j++){
            if ( str[i] == str[j] && j<(int)str.length() ){    // it just keep counting if it still the same character .
                n++;
            }else{ // here whene the inserting begin .
                s.insert(s.end(),str[i]);
                while ( n > 0 ){ // this part converting the number into a string .
                    num.insert(num.begin(),n%10+48);
                    n/=10;
                }
                for ( int k : num){        // this loop is for inserting the string, i know insert() function can do that, 
                    s.insert(s.end(), k);  // but it didn't in my code::blocks and i use it any way
                }
                s.insert(s.end(),'.');
                i=j;
                break;
            }
        }
    }
    cout << s << endl;
}
// I think there is a way to improve this, but important thing, it works.
