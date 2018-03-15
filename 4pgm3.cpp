#include<iostream.h>
void countFile (ifstream &fp, string &filename, int &charactercount, int &linecount, int &spacecount)
{
char c;
while (fp >> c&& fp.eof == false)
{
charactercount++;
}
fp.close();
fp.clear();
fp.open(filename.c_str());
string n;
while (!fp.eof())
{
getline(fp, n);
linecount++;
}
fp.close();
fp.clear();
fp.open(filename.c_str());
char sc;
while (fp >> sc && fp.eof() == false)
{
if (c == ' ')
{
spacecount++;
}
}
