#include<iostream>
#include<string>
using namespace std;

int main(){
    const int line_size = 8;
    int cnt = 1;
    string a_string = "angneiajndfjngernfgjklslnvjxmvnrfenrgsenjklsdfnjajsfniawhfhuionfsndsuieru";
    cout << a_string
    	 << ( cnt % line_size ? ' ' : '\n');
}