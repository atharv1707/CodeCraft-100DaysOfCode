/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> store;
    Solution(ListNode* head) {

        ListNode* temp = head;

        while(temp){
            store.push_back(temp->val);
            temp = temp->next;
        }

        
    }
    
    int getRandom() {
        int n = store.size();

        int random_index = rand()%n ;
        return store[random_index];

        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */