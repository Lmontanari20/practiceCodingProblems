/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <unordered_map>
using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // go through both linked list and make a visited ds of nodes
        // if a node is in both A and B then that is the intersection point
        // else return "No intersection"
        if(headA == headB) {
            return headA;
        }
        unordered_map<ListNode*, int> aVisited = {};
        unordered_map<ListNode*, int> bVisited = {};
        int acount = 0;
        int bcount = 0;
        getVisited(headA, aVisited, acount);
        getVisited(headB, bVisited, bcount);
        
        unordered_map<ListNode*, int> sameVisited = {};
        
        for(auto x : aVisited) {
            if(bVisited.count(x.first) > 0) {
                sameVisited.emplace(x.first, x.second);
            }
        }
        if(sameVisited.size() == 0) {
            return NULL;
        }
        ListNode* result;
        int min = 900000;
        for(auto x : sameVisited) {
            if(x.second < min) {
                result = x.first;
                min = x.second;
            }
        }
        
        return result;
    }
    
    void getVisited(ListNode *head, unordered_map<ListNode*, int> &visited, int &count) {
        count++;
        visited.emplace(head,count);
        if(head->next == NULL) {
            return;
        }
        getVisited(head->next, visited, count);
    }
};

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         set<ListNode *> nodes_in_B;

//         while (headB != nullptr) {
//             nodes_in_B.insert(headB);
//             headB = headB->next;
//         }

//         while (headA != nullptr) {
//             // if we find the node pointed to by headA,
//             // in our set containing nodes of B, then return the node
//             if (nodes_in_B.find(headA) != nodes_in_B.end()) {
//                 return headA;
//             }
//             headA = headA->next;
//         }

//         return nullptr;
//     }
// };