#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");

    int A,B,C, Result; int number[10];
    cin >> A >> B >> C;
    fill(number, number+10, 0);
    Result = A*B*C;
    while(Result != 0){
	number[Result%10]++;
	Result /= 10;
    }
    for(int i=0; i<10; i++){
	cout << number[i] << "\n";
    }

    return 0;

}
