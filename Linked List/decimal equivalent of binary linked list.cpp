long long unsigned int decimalValue(Node *head)
{
    long long unsigned int tot=0;
    long long mod=1000000007;
    while(head)
    {
        tot=(tot*2)%mod+head->data;
        head=head->next;
    }
    return tot%mod;
}
