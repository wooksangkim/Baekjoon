#include <iostream>

using namespace std;

struct Node{
    int num;
    Node* next;
    Node* prev;
};

Node ary[5001];
Node* head = ary;

void Solution(int N, int k){
   for(int i=1; i<=N; i++){
       if(i+1 != N){
	   ary[i].next = &ary[(i+1)%N];
	   ary[(i+1)%N].prev = & ary[i];
       }
       else{
	   ary[i].next = &ary[N];
	   ary[N].prev = &ary[i];
       }
   } 
   Node* cur = &ary[1];
   while(N != 1){
       for(int i=0; i<k-1; i++) cur = cur->next;
       int temp = cur - head;
       cout << temp << ", ";
       Node* left = cur->prev;
       Node* right = cur->next;
       left->next = right;
       right->prev = left;
       cur = right;
       N--;
   }
   cout << cur - head << ">";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, k;
    cin >> N >> k;
    cout << "<";
    Solution(N, k);

    return 0;
}
