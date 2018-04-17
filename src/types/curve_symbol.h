#ifndef CURVE_SYMBOL_H_
#define CURVE_SYMBOL_H_
#include <string>
#include "all.h"

namespace Poc {
    class CurveSymbol {
        public:
            std::string _symbol;
            double _quote;

            CurveSymbol(std::string symbol, double quote);
            CurveSymbol(CurveSymbol const &cs);
            std::string Symbol() const{return _symbol;};
            double Quote()const {return _quote;};
    };

    std::ostream& operator<<(std::ostream& out, const CurveSymbol& cs);
    void to_json(nlohmann::json& j, const CurveSymbol& cs);
    void from_json(nlohmann::json& j, CurveSymbol& cs);
}
#endif //CURVE_SYMBOL_H_
