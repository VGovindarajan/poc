#ifndef CURVE_SYMBOLS_H_
#define CURVE_SYMBOLS_H_

#include <vector>
#include "curve_type.h"
#include "curve_symbol.h"

class CurveSymbols{
    public:
        CurveSymbols(CurveType curveType, vector<CurveSymbol> curveSymbolVector):
        _curveType(curveType), _curveSymbolVector(curveSymbolVector)    
        {
        };
        
        CurveSymbols(CurveSymbols &cs):
        _curveType(cs.getCurveType()), _curveSymbolVector(cs.getCurveSymbolVectors())    
        {
        };

        std::ostream& operator<<(std::ostream& out, CurveSymbols const &cs){
            out << cs.getCurveType() << ", " << cs.getCurveSymbolsVectors().count() << std::endl;
            return out;
        }


        CurveType getCurveType(){return _curveType;};
        vector<CurveSymbol> getCurveSymbolVectors(){return _curveSymbolVector;};

    private:
        CurveType _curveType;
        vector<CurveSymbol> _curveSymbolVector;
};
#endif //CURVE_SYMBOLS_H_
