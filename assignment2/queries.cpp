#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_queries(Node* head, Node* tail) {
    if (head == NULL || tail == NULL) {
        cout << endl;
    } else {
        cout << head->val << " " << tail->val << endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        if (a == 0) {
            insert_head(head, tail, b);
        } else if (a == 1) {
            insert_tail(head, tail, b);
        }
        
        print_queries(head, tail);
    }
    
    return 0;
}
