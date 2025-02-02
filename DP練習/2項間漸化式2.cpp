#include <iostream>
#include <vector>

class ReccurenceFormula
{
private:
    int first_term;
    int tolerance;
    
public:
    ReccurenceFormula(int first_term, int tolerance)
    {
        this->first_term = first_term;
        this->tolerance = tolerance;
    }

    int get_nth_num(int num)
    {
        std::vector<int> nums;
        nums.push_back(this->first_term);
        for(int i = 1; i < num; i++)
        {
            nums.push_back(nums[i - 1] + this->tolerance);
        }
        
        return *(nums.end() - 1);
    }
};



int main(){
    int x, d, Q;
    std::cin >> x >> d >> Q;
    
    auto reccurence_formula = new ReccurenceFormula(x, d);
    
    for(int i = 0; i < Q; i++)
    {
        int num;
        std::cin >> num;
        
        std::cout << reccurence_formula->get_nth_num(num) << std::endl;
    }
    
    delete reccurence_formula;
    
    return 0;
}
