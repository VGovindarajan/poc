#include <iostream>
#include "curve_type.h"
using namespace std;

namespace Poc {
    std::ostream& operator<<(std::ostream& out, const CurveType& ct){
        switch(ct){
            case OverNight:
                return out << "OverNight";
            case Ibor1m:
                return out << "Ibor1m";
            case Ibor3m:
                return out << "Ibor3m";
            case Ibor6m:
                return out << "Ibor6m";
            case Treasury:
                return out << "Treasury";
        }
        return out;
    }
    void to_json(json& j, const CurveType& ct){
        j = json{{"CurveType",ct}};
    }
    void from_json(json& j, CurveType& ct){
        ct = j.at("CurveType").get<Poc::CurveType>();
    }
}
