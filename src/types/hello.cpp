#include <iostream>
#include <string>
#include "curve_type.h"
#include "curve_symbol.h"
#include "curve_symbols.h"
#include "discount_factor.h"
#include "discount_factors.h"
#include "all.h"

using namespace std;

int main(){
    std::cout << "OverNight Curve : " << Poc::CurveType::OverNight << std::endl;
    Poc::CurveSymbol us0003m("US0003M Index", 0.0231);
    Poc::CurveSymbol ed1("ED1 Comdty", 98.25);
    Poc::CurveSymbol ed2("ED2 Comdty", 98.5);
    vector<Poc::CurveSymbol> ibor3mSymbols;
    ibor3mSymbols.push_back(us0003m);
    ibor3mSymbols.push_back(ed1);
    ibor3mSymbols.push_back(ed2);

    Poc::CurveSymbols threeMCurve(Poc::CurveType::Ibor3m, ibor3mSymbols);
    std::cout << "threeMCurve built" << std::endl;
    std::cout << threeMCurve << std::endl;

    nlohmann::json j = us0003m;
    std::cout << j << std::endl;

    assert(j == us0003m);
    return 0;
}

