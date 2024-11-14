#include <iostream>
#include <string>
using namespace std;

int main(){
    string str , s = "";
    int num = 0 , pos = 0;
    getline(cin,str);

    for (int i = 0 ; i < (int)str.length() ;i++){
            if ( str[i] == ' '){
                s.insert(s.end(),' ');
                continue;
            }
            num = 0;

            for ( int k = i+2 ; str[k] != '.' ; k++){
                num = num*10 + (str[k]-48);
                pos = k+1;
            }
            for ( int k = 0 ; k < num ; k++){
                s.insert(s.end(),str[i]);
            }

        i=pos;
        pos = 0;
    }
    cout << s << endl;
}
