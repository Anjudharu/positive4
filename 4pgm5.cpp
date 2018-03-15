#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
ifstream  fin(“STORY.TXT”);
char ch;
int i,al=0,sp=0,di=0;
while(fin)
{
fin.get(ch);
i=ch;
if(i>63&&i<91||i>96&&i<123)
al++;
else
if(ch==’ ‘)
sp++;
else
if(i>47&&i<58)
di++;
}
cout<<“No. of Alphabates:”<<al;
cout<<“nNo. Of Digits:”<<di;
cout<<“nNo. Of Spaces:”<<sp;
getch();
}


 
