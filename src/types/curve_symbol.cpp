#include <iostream>
#include "curve_symbol.h"
using namespace std;

namespace Poc {
    std::ostream& operator<<(std::ostream& out, const CurveSymbol& cs){
        out << cs.Symbol() << ", " << cs.Quote() << std::endl;
        return out;
    }
    
    void to_json(nlohmann::json& j, const CurveSymbol& cs){
        j = nlohmann::json{{"Symbol",cs.Symbol()}, {"Quote", cs.Quote()}};
    }
    void from_json(nlohmann::json& j, CurveSymbol& cs){
        cs._symbol = j.at("Symbol").get<std::string>();
        cs._quote = j.at("Quote").get<double>();
    }

    CurveSymbol::CurveSymbol(CurveSymbol const &cs):_symbol(cs.Symbol()), _quote(cs.Quote()){}
    CurveSymbol::CurveSymbol(std::string symbol, double quote):_symbol(symbol), _quote(quote){}

}
