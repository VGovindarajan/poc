#ifndef CURVE_SYMBOLS_H_
#define CURVE_SYMBOLS_H_

#include <vector>
#include <iostream>
#include "curve_type.h"
#include "curve_symbol.h"
using namespace std;

namespace Poc {
    class CurveSymbols {
        public:

            CurveSymbols(CurveType curveType, std::vector<CurveSymbol> curveSymbolVector);
            CurveSymbols(CurveSymbols const &cs);

            CurveType getCurveType()const {return _curveType;};
            std::vector<CurveSymbol> getCurveSymbolVector()const {return _curveSymbolVector;};

        private:
            CurveType _curveType;
            std::vector<CurveSymbol> _curveSymbolVector;
    };
    std::ostream& operator<<(std::ostream& out, const CurveSymbols &cs);
}
#endif //CURVE_SYMBOLS_H_
