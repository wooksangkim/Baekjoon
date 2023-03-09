#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");

    int A[26], B[26]; char temp;
    char a[1001], b[1001];
    fill(A, A+26, 0);
    fill(B, B+26, 0);
    cin >> a >> b;
    for(int i=0; a[i] != '\0'; i++){
	A[a[i]-'a']++;
    }
    for(int i=0; b[i] != '\0'; i++){
	B[b[i]-'a']++;
    }
    int cnt =0;
    for(int i=0; i<26; i++){
	if(A[i] > B[i]) cnt += A[i] - B[i];
	else cnt += B[i] - A[i];
	cout << cnt << "\n";

    }     
    cout << cnt << "\n";
    return 0;
}
