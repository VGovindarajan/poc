#ifndef DISCOUNT_FACTORS_H_
#define DISCOUNT_FACTORS_H_

#include <vector>
#include "discount_factor.h"

class DiscountFactors{
    public:
        DiscountFactors(vector<DiscountFactor> discountFactorVector, CurveType curveType);
        vector<DiscountFactor> getDiscountFactors(){return _discountFactorVector;};
        CurveType getCurveType({return _curveType;});

    private:
        vector<DiscountFactor> _discountFactorVector;
        CurveType _curveType;
}



#endif //DISCOUNT_FACTORS_H_
