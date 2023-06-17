#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val1, val2;
    Node* next;
    
    Node(int val) {
        this->val1 = val;
        this->val2 = val;
        this->next = NULL;
    }
};

void insert_tail1(Node*& head1, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head1 == NULL) {
        head1 = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_tail2(Node*& head2, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head2 == NULL) {
        head2 = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int countLength(Node*& head) {
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

bool isSameLinkedList(Node* head1, Node* head2) {
    int size1 = countLength(head1);
    int size2 = countLength(head2);

    if (size1 != size2) {
        return false;
    }

    while (head1 != NULL && head2 != NULL) {
        if (head1->val1 != head2->val1) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;
    int val1;
    while (true) {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail1(head1, tail1, val1);
    }

    int val2;
    while (true) {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail2(head2, tail2, val2);
    }

    if (isSameLinkedList(head1, head2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}
