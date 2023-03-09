#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");

    int abc[26]; char str[150];
    fill(abc, abc+26, 0);
    cin >> str;
    for(int i=0; str[i] != '\0'; i++){
	abc[str[i]-'a']++;
    }
    for(int i=0; i<26; i++){
	cout << abc[i] << " ";
    }
    cout << "\n";

    return 0;
}
