#include <iostream>
#include <string>

int SumOfStrings(std::string string);
void tolower (std::string& string);
void FirstDifference (std::string& str1, std::string& str2);

int main()
{
    std::string s1, s2;

    std::cin >> s1 >> s2;

    int i1, i2;

    tolower(s1);
    tolower(s2);

    FirstDifference(s1, s2);

    i1 = SumOfStrings(s1);
    i2 = SumOfStrings(s2);

    std::cout << (i1 > i2 ? 1 : (i1 == i2 ? 0 : -1));

    return 0;
}

int SumOfStrings (std::string string)
{
    int sum { };

    for(auto x : string)
        sum += static_cast<int>(x);
    
    return sum;
}

void tolower (std::string& string)
{
    for(auto& c : string)
    {
       c = tolower(c);
    }
}

void FirstDifference (std::string& str1, std::string& str2)
{
    std::string fs1 { }, fs2 { };

    for(int i { }; i < str1.length(); ++i)
    {
        if(str1[i] == str2[i])
        {
            fs1 += str1[i];
            fs2 += str2[i];
        }
        else
        {
            fs1 += str1[i];
            fs2 += str2[i];
            break;
        }
    }
    
    str1 = fs1;
    str2 = fs2;
}
