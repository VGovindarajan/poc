
#include <iostream>
#include "discount_factor.h"

using namespace std;
namespace Poc {
            DiscountFactor::DiscountFactor(unsigned serialDate, double value):_serialDate(serialDate), _value(value){}

            DiscountFactor::DiscountFactor(DiscountFactor const &df):_serialDate(df.getSerialDate()), _value(df.getValue()){}

    std::ostream& operator<<(std::ostream& out, const DiscountFactor &df){
        out << df.getSerialDate() << ", " << df.getValue() << std::endl;    
        return out;
    }
}
