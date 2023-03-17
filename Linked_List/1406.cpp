#include <iostream>
#include <fstream>
using namespace std;

struct Node {
    char c;
    Node* next;
    Node* prev;
    Node() {}
    Node(char a) : c(a), next(nullptr), prev(nullptr) {}
};

Node* head = new Node(0);
Node* tail = new Node(0);
Node* cur;

void make_list(char A) {
    Node* temp = new Node(A);
    Node* tar = tail->prev;
    temp->next = tail;
    tar->next = temp;
    temp->prev = tar;
    tail->prev = temp;
    cur = temp;
}

void Init(char word[]) {
    head->next = tail; tail->prev = head;
    for (int i = 0; word[i] != '\0'; i++) {
        make_list(word[i]);
    }
    cur = cur->next;
}

void ML() {
    if (cur->prev == head) return;
    cur = cur->prev;
}


void MR() {
    if (cur == tail) return;
    cur = cur->next;
}

void Delet() {
    if (cur->prev == head) return;
    Node* tar = cur->prev;
    Node* H = tar->prev;
    H->next = cur;
    cur->prev = H;
}

void ADD(char A) {
    Node* t = new Node(A);
    Node* left = cur->prev;
    t->next = cur;
    left->next = t;
    cur->prev = t;
    t->prev = left;
}

void Order() {
    int n; char word[2];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word[0] == 'L') ML();
        else if (word[0] == 'D') MR();
        else if (word[0] == 'B') Delet();
        else {
            cin >> word[0];
            ADD(word[0]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char word[100001];
    char
    cin >> word;
    Init(word);
    Order();
    Node* p = head->next;
    while (p != tail) {
        cout << p->c;
        p = p->next;
    }
    return 0;
}
