
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    if(K>num)
    {
        return head;
    }
    Node *p=head;
    Node *r=head;
    Node *q=NULL;
    Node *s=NULL;
    if(K==1 || K==num)
    {
        while(p->next)
        {
            q=p;
            p=p->next;
        }
        q->next=head;
        q=q->next;
        p->next=q->next;
        q->next=NULL;
        return p;;
    }
    int c=num-K;
    while(K>1)
    {
        q=p;
        p=p->next;
        K--;
    }
    while(c>0)
    {
        s=r;
        r=r->next;
        c--;
    }
    Node *temp=q->next;
    q->next=s->next;
    s->next=temp;
    temp=r->next;
    r->next=p->next;
    p->next=temp;
    return head;
}
