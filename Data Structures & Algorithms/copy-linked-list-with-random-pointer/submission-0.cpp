/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,pair<Node*,Node*>> mp;
        Node* temp = head;
        while(temp->next != nullptr){
            pair<Node*,Node*> pt;
            pt.first = temp->next;
            pt.second = temp->random;
            mp[temp] = pt;
            temp = temp->next;
        }
        Node* newHead = new Node(0);
        Node* dummy = newHead;
        while(head->next != nullptr){
            Node* temp = new Node(head->val);
            
            dummy->next = temp;
        }
    }
};
