void swapVal(node *first,node *sec)
{
    int temp=first->data;
    first->data=sec->data;
    sec->data=temp;
}
node* partition(struct node *start,struct node *end)
{
    int pivotVal=start->data;
    node *i=start;
    node *j=start->next;
    while(j!=end)
    {
        if(j->data<pivotVal)
        {
            i=i->next;
            swapVal(i,j);
        }
        j=j->next;
    }
    swapVal(i,start);
    return i;
}
void QuickSort(node *start, node *end)
{
    if(start!=end)
    {
        node *pivot=partition(start,end);
        QuickSort(start,pivot);
        QuickSort(pivot->next,end);
    }
}
void quickSort(struct node **headRef) 
{
    QuickSort(*headRef,NULL);
}
