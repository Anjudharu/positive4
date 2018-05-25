#include<iostream> 
using namespace std;
int main() 
{
char string[10],evennum[10],oddnum[10],i,j,k,count;
i=j=k=count=0;
    do
    {
    cout<<"Enter your input string:";
    fgets(string, 10, stdin);
    string[strlen(string) - 1] = '\0';
     cout<<"Given Input string:%s", string;
        while (string[i] != '\0')
        {
            if (i % 2 == 0) {
            odd[j++] = string[i];
            }
            else {
            evennum[k++] = string[i];
            }
        i++;
        }
    oddnum[j] = evennum[k] = '\0';
   cout<<oddnum<<evennum;
    oddnum[0]=evennum[0]='\0';
    count++;
    }
while(count<2);
return 0;
}
