#include <iostream>
#include <string>
using namespace std;

int main(){
    string str , s = "" , num = "";
    getline(cin,str);
    int n = 0;

    for ( int j, i = 0; i < (int)str.length() ; ){
        if ( str[i] == ' '){
            s.insert(s.end(),' ');
            i++;
            continue;
        }
            n = 1;
        num.clear();
        for (  j = i+1 ; j <= (int)str.length() ; j++){
            if ( str[i] == str[j] && j<(int)str.length() ){
                n++;
            }else{
                s.insert(s.end(),str[i]);
                s.insert(s.end(),'*');
                while ( n > 0 ){
                    num.insert(num.begin(),n%10+48);
                    n/=10;
                }
                for ( int k : num){
                    s.insert(s.end(), k);
                }
                s.insert(s.end(),'.');
                i=j;
                break;
            }
        }
    }
    cout << s << endl;
}
