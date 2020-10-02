// Add two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        
        int carry = 0;
        ListNode *a, *b, *result, *p;
        p = a = l1;
        b = l2;
        
        
        result = a;
        
        while (a != NULL && b!=NULL) {

            int t = (a->val+b->val+carry);
            carry = t/10;
            a->val = t%10;
            
            p = a;
            a = a->next;
            b = b->next;
            
        }
        
        while (b != NULL) {
            
            ListNode* node = new ListNode;
            
            int t = b->val+carry;
            carry = t/10;
            node->val = t%10;
            
            node->next = NULL;
            p->next = node;
            if (p->next != NULL)
                p = p->next;
            
            b = b->next;
            
        }
        
        while (a != NULL) {
            
            // a->next = b;
            int t = a->val+carry;
            carry = t/10;
            a->val = t%10;
            p = a;
            a = a->next;
            // b = b->next;
            
        }
        
        cout << carry;
        if (carry != 0) {
            ListNode* node = new ListNode;
            node->val = 1;
            node->next = NULL;
            p->next = node;
        }
        
        return result;
    }
};
