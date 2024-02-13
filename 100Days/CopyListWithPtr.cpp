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
// class Solution {
// public:
// Node* copyRandomList(Node* head) {
// if (!head) return nullptr;
// Node* iter = head;
// Node* next;
// // First round: make a copy of each node,
// // and link them together side-by-side in a single list.
// while (iter) {
// next = iter->next;
// Node* copy = new Node(iter->val);
// iter->next = copy;
// copy->next = next;

// iter = next;
// }
// // Second round: assign random pointers for the copy nodes.
// iter = head;
// while (iter) {
// if (iter->random) {
// iter->next->random = iter->random->next;
// }
// iter = iter->next->next;
// }
// // Third round: restore the original list, and extract the copy list.
// iter = head;
// Node* pseudoHead = new Node(0);
// Node* copy;
// Node* copyIter = pseudoHead;
// while (iter) {
// next = iter->next->next;
// // extract the copy
// copy = iter->next;
// copyIter->next = copy;
// copyIter = copy;
// // restore the original list
// iter->next = next;
// iter = next;
// }
// return pseudoHead->next;
// }
// };




//SC=>O(n)||TC=>O(n)
// class Solution {
// public:
//     Node* helper(Node*head, unordered_map<Node*, Node*>&mp) {
//         if(head == 0) return 0;

//         Node*newHead = new Node(head->val);
//         mp[head]=newHead;
//         newHead->next= helper(head->next, mp);

//         if(head->random) {
//             newHead->random = mp[head->random];
//         }
//         return newHead;
//     }

//     Node* copyRandomList(Node* head) {
//         unordered_map<Node*, Node*>mp;//old node ---> newNode
//         return helper(head, mp);
//     }  

// };


class Solution{
public:
    Node* copyRandomList(Node* head) {
        if(!head) return 0;
        //step 1: Clone A->A'
        Node*it = head;  // Iterate over old head
        while(it) {
            Node*clonedNode= new Node(it->val);
            clonedNode->next = it->next;
            it->next = clonedNode;
            it = it->next->next;
        }

        //Step 2:Assign random links of A` with the helpe of old node A
        it = head;
        while(it) {
            Node*clonedNode = it->next;
            clonedNode->random =it->random ? it->random->next: nullptr;
            it= it->next->next;
        }
       //Step 3: Detach A' from A   
       it = head;
       Node*clonedHead = it->next;
       while(it) {
           Node*clonedNode = it->next;
           it->next = it->next->next;
           if(clonedNode->next) {
               clonedNode->next = clonedNode->next->next; 
           }
           it=it->next;
       }
       return clonedHead;
    }
};
   

 



