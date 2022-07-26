int take_count(Node * f, Node * b){
   int count =0;
   while(f && b){
       if(f->data == b->data) count+=2;
       else break;
       
       f=f->next;
       b= b->next;
   }
   return count;
}
int maxPalindrome(Node *head)
{
    int ans=1;
   Node * curr = head ; 
   Node* nxt = NULL;
   Node * prev = NULL;
   while(curr->next){
       nxt = curr->next;
       curr->next = prev;
       
       int odd_count = take_count(curr, nxt->next) +1;
        ans = max(odd_count,ans);
        
        int even_count = take_count(curr,nxt);
        ans = max(even_count, ans);
        
        prev = curr;
        curr= nxt;
       
   }
   return ans;
}
