#ifndef DISCOUNT_FACTORS_H_
#define DISCOUNT_FACTORS_H_

#include <vector>
#include <iostream>

#include "discount_factor.h"
#include "curve_type.h"
using namespace std;

namespace Poc {
    class DiscountFactors{
        public:
            DiscountFactors(CurveType curveType, std::vector<DiscountFactor> discountFactorVector);
            std::vector<DiscountFactor> getDiscountFactors() const {return _discountFactorVector;};
            CurveType getCurveType() const {return _curveType;};

        private:
            CurveType _curveType;
            std::vector<DiscountFactor> _discountFactorVector;
    };
    std::ostream& operator<<(std::ostream& out, const DiscountFactors &dfs);

}


#endif //DISCOUNT_FACTORS_H_
