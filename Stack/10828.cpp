#include <iostream>
#include <string>
#include <fstream>
#define Max_n 20000

using namespace std;

struct Stack{
    int top;
    int ary[Max_n];

    bool is_Full(){
	if(top == (Max_n -1)) return true;
	else return false;
    }

    int is_Empty(){
	if(top == -1) return 1;
	else return 0;
    }

    void Push(int num){
	if(!is_Full()){
	    top++;
	    ary[top] = num;
	}
	else return;
    }

    int Pop(){
	if(is_Empty()) return -1;
	else return ary[top--];
    }

    int Size(){
	if(is_Empty()) return 0;
	else return top+1;
    }

    int Top(){
	if(is_Empty()) return -1;
	else return ary[top];
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ofstream cout; cout.open("output.txt");
    Stack s;
    s.top = -1; int n;
    cin >> n;

    for(int i=0; i<n; i++){
	string temp;
	cin >> temp;
	if(temp == "push"){
	    int t;
	    cin >> t;
	    s.Push(t);
	}
	else if(temp == "pop") cout << s.Pop() << "\n";
	else if(temp == "size") cout << s.Size() << "\n";
	else if(temp == "empty") cout << s.is_Empty() << "\n";
	else cout << s.Top() << "\n";
    }
    return 0;
}
