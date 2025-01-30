#include <iostream>
#include <vector>
#include <algorithm>

class VegetablePrices
{
    std::vector<int> prices;

public:
    VegetablePrices()
    {
    }

    ~VegetablePrices()
    {
    }

    void add_price(int price)
    {
        this->prices.push_back(price);
    }

    int get_lowest_price_stores()
    {
        std::vector<int> copied = this->prices;
        std::sort(copied.begin(), copied.end());

        //std::cout << *copied.begin() << std::endl;
        
        for(int i = 0; i < this->prices.size(); i++)
        {
            if(this->prices[i] == *copied.begin())
            {
                return i;
            }
        }
    }
};

int main()
{
    int store_num, vegi_num;
    std::cin >> store_num >> vegi_num;
    std::vector<VegetablePrices> vegetables(vegi_num);

    for(int i = 0; i < store_num; i++)
    {
        for(auto&& vegi : vegetables)
        {
            int price;
            std::cin >> price;
            vegi.add_price(price);
        }
    }
    
    int lowest_store_num = 0;
    std::vector<int> store_idxs;
    for(auto&& vegi : vegetables)
    {
        int store_idx = vegi.get_lowest_price_stores();
        
        //std::cout << store_idx << std::endl;
        
        if (std::find(store_idxs.begin(), store_idxs.end(), store_idx) == store_idxs.end()) 
        {
            lowest_store_num++;
        }
        
        store_idxs.push_back(store_idx);
        //std::cout << vegi.get_lowest_price_stores() << std::endl;
    }
    
    std::cout << lowest_store_num << std::endl;
}