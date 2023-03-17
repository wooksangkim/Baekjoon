#include <iostream>
#define Max_n 1500000
using namespace std;

struct Node {
    char w;
    Node* next;
    Node* prev;
};

Node List[Max_n]; int idx = 0;
char Word[Max_n];
Node* head; Node* tail; Node* cur;

Node* make_Node(char A) {
    List[idx].w = A;
    List[idx].next = nullptr;
    List[idx].prev = nullptr;
    return &List[idx++];
}

void Move_left() {
    //cout << "Move_left" << "\n";
    if (cur == head) return;
    cur = cur->prev;
}

void Move_right() {
    //cout << "Move_right" << "\n";
    if (cur->next == tail) return;
    cur = cur->next;
}

void Delte() {
    //cout << "Delte" << "\n";
    if(cur == head) return;
    Node* left = cur->prev;
    Node* right = cur->next;
    left->next = right;
    right->prev = left;
    //cout << "여기인가" << "\n";
    cur = left;
}

void Append(char A) {
    //cout << "Append" << "\n";
    Node* temp = make_Node(A);
    Node* right = cur->next;
    temp->next = right;
    cur->next = temp;
    right->prev = temp;
    temp->prev = cur;
    cur = temp;
}

void Solution() {
    head = make_Node(0);
    tail = make_Node(0);
    cur = head;
    head->next = tail;
    tail->prev = head;

    for (int i = 0; Word[i] != '\0'; i++) {
        if (Word[i] == '<') Move_left();
        else if (Word[i] == '>') Move_right();
        else if (Word[i] == '-') Delte();
        else Append(Word[i]);
    }
    //cout << "Print" << "\n";
    cur = head->next;
    while (cur->next != nullptr) {
        cout << cur->w;
        cur = cur->next;
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        idx = 0;
        cin >> Word;
        Solution();
    }
    return 0;
}
