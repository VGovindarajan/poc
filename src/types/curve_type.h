#ifndef CURVE_TYPE_H_
#define CURVE_TYPE_H_
#include <iosfwd>

#include "all.h"

// for convenience
using json = nlohmann::json;

namespace Poc {
    enum CurveType
    {
        OverNight=1,
        Ibor1m=2,
        Ibor3m=3,
        Ibor6m=4,
        Treasury=5
    };

    std::ostream& operator<<(std::ostream& out, const CurveType& ct);
    void to_json(json& j, const CurveType& ct);
    void from_json(json& j, CurveType& ct);

}
#endif //CURVE_TYPE_H_

