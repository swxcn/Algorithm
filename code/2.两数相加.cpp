/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode();
        ListNode* temp = root;
        int up = 0;
        while(l1 || l2 || up){
            int val = (l1?l1->val:0) + (l2?l2->val:0) + up;
            temp -> next = new ListNode(val%10);
            up = val / 10;
            temp = temp -> next;
            if(l1)l1 = l1 -> next;
            if(l2)l2 = l2 -> next;
        }
        return root -> next;
    }
};
// @lc code=end

