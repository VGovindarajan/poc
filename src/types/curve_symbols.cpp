
#include <vector>
#include <iostream>
#include "curve_type.h"
#include "curve_symbol.h"
#include "curve_symbols.h"
using namespace std;

namespace Poc {
    CurveSymbols::CurveSymbols(CurveType curveType, std::vector<CurveSymbol> curveSymbolVector):
            _curveType(curveType), _curveSymbolVector(curveSymbolVector)    
            {
            }

            
    CurveSymbols::CurveSymbols(CurveSymbols const &cs):
            _curveType(cs.getCurveType()), _curveSymbolVector(cs.getCurveSymbolVector())    
            {
            }

            std::ostream& operator<<(std::ostream& out, const CurveSymbols &cs){
                out << cs.getCurveType() << ",  " << cs.getCurveSymbolVector().size()  << std::endl;
                return out;
            }
}
