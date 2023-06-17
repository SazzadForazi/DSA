#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void max_min(Node* head) {
   int maxElement = INT_MIN;
   int minElement = INT_MAX;
   while (head != NULL) {
      if (minElement > head->val)
         minElement = head->val;
      if (maxElement < head->val)
         maxElement = head->val;
      head = head->next;
   }
  cout<<maxElement<<" "<<minElement<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    max_min(head);
    return 0;
}