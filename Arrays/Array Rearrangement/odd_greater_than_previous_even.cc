// Link : https://practice.geeksforgeeks.org/problems/play-with-an-array/1

// Rearrange the elements of array such that number at the odd index is greater than the number at the previous even index.

vector<int> formatArray(vector<int> a,int n)
{
	for(int i=0;i<n-1;i+=2) // jump to evrey even index
	{   
    if(a[i] > a[i+1])   // check
        swap(a[i], a[i+1]); // swap if true
	}

	return a;
}