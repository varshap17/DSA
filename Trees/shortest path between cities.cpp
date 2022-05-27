int shortestPath( int x, int y)
    { 
        if(x==y) 
        {
            return 0;
        }
        if(x>y)
        {
            return 1+shortestPath(x/2,y);
        }
        else
        {
            return 1+shortestPath(x,y/2);
        }
    }
