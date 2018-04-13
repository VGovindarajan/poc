#include <iostream>
#include "curve_symbol.h"
using namespace std;

namespace Poc {
    std::ostream& operator<<(std::ostream& out, const CurveSymbol& cs){
        out << cs.Symbol() << ", " << cs.Quote() << std::endl;
        return out;
    }

    CurveSymbol::CurveSymbol(CurveSymbol const &cs):_symbol(cs.Symbol()), _quote(cs.Quote()){}
    CurveSymbol::CurveSymbol(std::string symbol, double quote):_symbol(symbol), _quote(quote){}

}
