#include <iostream>
#include <vector>

class ReccurenceFormula
{
private:
    int first_term;
    int tolerance_even;
    int torelance_odd;
    
public:
    ReccurenceFormula(int first_term, int tolerance_even, int torelance_odd)
    {
        this->first_term = first_term;
        this->tolerance_even = tolerance_even;
        this->tolerance_odd = tolerance_odd;
    }

    int get_tolerance(int term_num)
    {
        if(term_num % 2 == 0)
        {
            return this->tolerance_even;
        }
        else
        {
            return this->tolerance_odd;
        }
    }

    int get_nth_num(int num)
    {
        std::vector<int> nums;
        nums.push_back(this->first_term);
        for(int i = 1; i < num; i++)
        {
            auto tolerance = this->get_toerance(i);
            nums.push_back(nums[i - 1] + tolerance);
        }
        
        return *num.back();
    }
};



int main(){
    int first_term, tolerance_even, tolerance_odd, term;
    std::cin >> first_term >> tolerance_even >> tolerance_odd >> term;
    
    auto reccurence_formula = new ReccurenceFormula(first_term, tolerance_even, tolerance_odd);
    
    std::cout << reccurence_formula->get_nth_num(num) << std::endl;
    
    delete reccurence_formula;
    
    return 0;
}
