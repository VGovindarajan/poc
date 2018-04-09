#include <iostream>
#include "curve_type.h"
/*
 *  #include "curve_symbol.h"
 *  #include "curve_symbols.h"
 *  #include "discount_factor.h"
 *  #include "discount_factors.h"
 */
using namespace std;

int main(){
    std::cout << "OverNight Curve : " << CurveType::OverNight << std::endl;
    /*CurveSymbol us0003m("US0003M Index", 0.0231);
    CurveSymbol ed1("ED1 Comdty", 98.25);
    CurveSymbol ed2("ED2 Comdty", 98.5);
    vector<CurveSymbol> ibor3mSymbols();
    ibor3mSymbols.push_back(us0003m);
    ibor3mSymbols.push_back(ed1);
    ibor3mSymbols.push_back(ed2);

    CurveSymbols threeMCurve(CurveType::Ibor3m, ibor3mSymbols);
    std::cout << "threeMCurve built" << std::endl;
   */
    return 0;
}

