#ifndef CURVE_SYMBOL_H_
#define CURVE_SYMBOL_H_
#include <string>

class CurveSymbol {
    public:
        std::string Symbol;
        double Quote;

        CurveSymbol(std::string symbol, double quote):Symbol(symbol),Quote(quote){};
        CurveSymbol(CurveSymbol &cs):Symbol(cs.Symbol),Quote(cs.Quote){};
};

#endif //CURVE_SYMBOL_H_
