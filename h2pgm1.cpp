#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <cctype>
int main()
{
    std::string str = " cat cow dog wolf lobster";
    std::string result;
    auto i = str.begin();
    while (i!= str.end())
 {
        while (i!= str.end() && isspace(*i)) 
{
            result += *i;
            ++i;
        }
        auto begin = i;
        while (i != str.end() && !isspace(*i)) 
{
            ++i;
        }
        auto end = i;
        result.append(std::reverse_iterator<decltype(end)>(end),
                      std::reverse_iterator<decltype(begin)>(begin));
        std::reverse(begin, end);
    }
    std::cout << result <<'\n';
}
