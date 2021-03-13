class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num=0;//carry
        int sum=0;//sum
        ListNode* ans=new ListNode(0);
        ListNode *thi=ans;//pointer
        while(l1 && l2) //when l1 and l2 is not null
        {
            sum=l1->val+l2->val+num;
            num=sum/10;
            thi->next=new ListNode(sum%10);
            l1=l1->next;
            l2=l2->next;
            thi=thi->next;
        }
        while(l1||l2||num) //when l1 or l2 is not null
        {
            sum=num;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            else if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            num=sum/10;
            thi->next=new ListNode(sum%10);
            thi=thi->next;
        }
        return ans->next;
    }
};
