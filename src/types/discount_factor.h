#ifndef DISCOUNT_FACTOR_H_
#define DISCOUNT_FACTOR_H_

#include <iostream>
using namespace std;
namespace Poc {
    class DiscountFactor {
        public:
            DiscountFactor(unsigned serialDate, double value);
            DiscountFactor(DiscountFactor const &df);
            unsigned getSerialDate() const {return _serialDate;}; 
            double getValue() const {return _value;}; 

        private:
            unsigned _serialDate;
            double _value;

    };

    std::ostream& operator<<(std::ostream& out, const DiscountFactor &df);
}
#endif //DISCOUNT_FACTOR_H_ 
