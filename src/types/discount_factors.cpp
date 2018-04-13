
#include <vector>
#include <iostream>

#include "curve_type.h"
#include "discount_factor.h"
#include "discount_factors.h"

using namespace std;

namespace Poc {
    DiscountFactors::DiscountFactors(CurveType curveType, std::vector<DiscountFactor> discountFactorVector):_curveType(curveType),_discountFactorVector(discountFactorVector){}

    std::ostream& operator<<(std::ostream& out, const DiscountFactors &dfs){
        out << dfs.getCurveType() << ", " << dfs.getDiscountFactors().size() << std::endl;
        return out;
    }
}


