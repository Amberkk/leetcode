#include<studio.h>

struct ListNode *NewNode(int data)
{
  struct ListNode *NewNode=(struct ListNode*)malloce(sizeof(struct ListNode));
  NewNode->val=data;
  NewNode->next=NULL;
  return NewNode;
}
struct ListNode* AddTwoNumbers(struct ListNode* l1,struct ListNode* l2)
{
  struct ListNode *current=NULL;
  struct ListNode *root=NULL;
  struct ListNode *rear=NULL;
  int carry=0;
  int ans=0;
  while(l1||l2)
  {
    //result
    ans=carry+(l1?l1->val:0)+(l2?l2->val:0);
    //carry
    carry=(ans>=10)?1:0;
    ans=(ans>=10)?(ans-10):ans;
    
    //node
    current=NewNode(ans);
    if(!root)//沒有root
      root=current;
    else
      rear->next=cuttent;
    rear=current;
    
    if(l1)
      l1=l1->next;
    if(l2)
      l2=l2->next;
    
    //最後的carry
    if(carry==1)
      rear->next=NewNode(1);
  }
  return root;
}
