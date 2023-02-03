	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	   
	   int rows=0;
	    int cols=M-1;
        while(rows<N && cols>=0)
        {
            int element=mat[rows][cols];
            if(element==X) 
            return 1;
            if(element<X) 
            rows++;
            else 
            cols--;
        }
    return 0;
	    
	}
