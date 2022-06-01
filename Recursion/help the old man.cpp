class Solution{
    int count=0;
    vector<int> vec;
public:
void movePlates(int plates,int nthMove,int box1,int box3,int box2)
{
    if(plates==0)
    {
        return ;
    }
    movePlates(plates-1,nthMove,box1,box2,box3);
    count++;
    if(count==nthMove)
    {
        vec.push_back(box1);
        vec.push_back(box3);
        return ;
    }
    movePlates(plates-1,nthMove,box2,box3,box1);
}
    vector<int> shiftPile(int N, int n)
    {
        int box1=1, box2=2, box3=3;
        movePlates(N,n,box1,box3, box2);
        return vec;
    }
};
