#include <iostream>
#include <cctype>
int main(){
	std::string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string text = " ";
	int n = 0;
	int s= 0;
	std::cout << "Enter text: ";
	std::cin >> text;
	for(unsigned int i = 0; i < text.size(); i++)
{
		if(islower(text[i])){
			text[i] = toupper(text[i]);
		}
	}
	for(unsigned int y = 0; y < text.size(); y++){
		for(unsigned int w = 0; w < alpha.size(); w++)
{
			if(text[y] == alpha[w]){
				n= (int)(alpha[w] - 'A' + 1);
				s+= n;
			}
		}
	}
	std::cout << s;
	return 0;
}
