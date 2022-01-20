#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
int main()
{
    int count;

    std::cin >> count;

    for(int i { }; i < count; ++i)
    {
        int n, down { };
        std::string s;
        std::vector<int> p { };

        std::cin >> n;

        for(int j { }, k; j < n; ++j)
        {
            std::cin >> k;

            p.push_back(k);
        }

        std::cin >> s;

        for(auto x : s)
        {
            if(x == '0') down++;
        }

        std::vector<int> nh ( static_cast<int>(p.size()) - down ), ns ( down );

        for(int j { }; j < static_cast<int>(nh.size()); ++j) 
            nh[j] = j + 1 + down;
        for(int j { }; j < down; ++j) ns[j] = j + 1;

        int in { }, ih { }; 

        for(int j { }; j < static_cast<int>(p.size()); ++j)
        {
            if(s[j] == '1')
            {
                if(p[j] > down) 
                {
                    std::cout << p[j] << ' ';
                }
                else 
                {
                    for(int k { }; k < static_cast<int>(s.size()); ++k)
                    {
                        if(s[k] == '1') 
                        { 
                            if(!(p[k] > down))
                            {
                                std::cout << nh[in] << ' ';
                                in++;
                                break;
                            }

                        }
                    }
                }
            }
            else
            {
                if(p[j] <= down) 
                {
                    std::cout << p[j] << ' ';
                }
                else 
                {
                    for(int k { }; k < static_cast<int>(s.size()); ++k)
                    {
                        if(s[k] == '0') 
                        { 
                            if(!(p[k] <= down))
                            {
                                std::cout << ns[ih] << ' ';
                                ih++;
                                break;
                            }

                        }
                    }
                }
            }
        }
        
        std::cout << std::endl;
    }
}