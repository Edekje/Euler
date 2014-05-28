#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	ifstream tree("tree.txt");	// Start the file, read the treesize, start the tree array, set its size
	int treesize;
	tree >> treesize;
	vector <vector <int> > vectortree(treesize);
	
	for( int i = 0; i < treesize; i++)	// Read the file and fill the vector array, setting the size of the elements note: >> stops at whitespace and converts to int!
	{
		vectortree[i].resize(i+1);
		for(int j = 0; j <= i; j++)
		{
			tree >> vectortree[i][j];
		}
		
	}
	
	for( int i = 0; i < treesize; i++)	// Couts the tree for debugging purposes: was it read well?
	{
		for(int j = 0; j <= i; j++)
		{
			cout  << vectortree[i][j] << ' ';
		}
		cout << '\n';
		
	}
	
	for( int i = treesize-2; i >= 0; i--)	// Compares the two numbers under another. The greatest one gets added to the top number.
											//This way, the greatest total works its way to the top
	{
		for(int j = 0; j <= i; j++)
		{
			vectortree[i][j] = ((vectortree[i+1][j] > vectortree[i+1][j+1]) ? vectortree[i+1][j] : vectortree[i+1][j+1]) + vectortree[i][j];
		}
		
	}
	
	cout << vectortree[0][0];				// Cout the greatest total, which reached the 'top'
	
	return 0;
}