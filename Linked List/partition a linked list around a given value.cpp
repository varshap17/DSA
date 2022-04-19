// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) 
{
    struct Node* left = new Node(-1);
    struct Node* equal = new Node(-1);
    struct Node* right = new Node(-1);
    struct Node* head1 = left;
    struct Node* head2 = equal;
    struct Node* head3 = right;
    while(head != nullptr)
   {
       if(head->data < x)
       {
           left->next = head;
            head = head->next;
           left = left->next;
           left->next = nullptr;
       }
       else if(head->data == x)
       {
           equal->next = head;
            head = head->next;
           equal = equal->next;
           equal->next = nullptr;
       }
       else
       {
           right->next = head;
           head = head->next;
           right = right->next;
           right->next = nullptr;
       }
   }
   
   
   equal->next = head3->next;
   left->next = head2->next;
   // cout << endl;
   return head1->next;
}
