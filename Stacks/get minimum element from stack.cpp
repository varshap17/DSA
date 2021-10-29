#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
   if(s.empty())
   {
       return -1;
   }
   else
   {
       return minEle;
   }
}

/*returns poped element from stack*/
int _stack ::pop()
{
    int x;
    if(s.empty())
    {
        return -1;
    }
    else if(minEle>s.top())
    {
        int top=minEle;
        minEle=(minEle*2)-s.top();
        s.pop();
        return top;
    }
    else
    {
        int top=s.top();
        s.pop();
        return top;
    }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   if(s.empty())
   {
       s.push(x);
       minEle=x;
       return ;
   }
   else if(minEle>x)
   {
       s.push((2*x)-minEle);
       minEle=x;
       return ;
   }
   else
    {
        s.push(x);
        return ;
    }
}

