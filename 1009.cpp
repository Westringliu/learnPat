#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<string> words;
	do
	{
		string word;
		cin >> word;
		words.push_back(word);
	}while('\n' != getchar());
	for(vector<string>::reverse_iterator it = words.rbegin();it != words.rend() - 1;++it){
		cout << *it << " ";
	}
	cout << *(words.rend()-1) << endl; 
} 
