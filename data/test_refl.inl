// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Point>
    : Ubpa::USRefl::TypeInfoBase<Point>
{
    static constexpr AttrList attrs = {
        Attr {"size", 8 }, 
    };
    static constexpr FieldList fields = {
        Field {"x", &Point::x,
            AttrList {
                Attr {"not_serialize" },
            }
        },
        Field {"y", &Point::y,
            AttrList {
                Attr {"info", "hello" },
            }
        },
        Fields{"Sum", static_cast<float(Point::*)()const>(&Point::Sum),
            AttrList {
                Attr{"attr", "great"},
            }
        },
        Fields{"Sum", static_cast<float(Point::*)(float)const>(&Point::Sum),
            AttrList {
                Attr{"attr", "great too"},
                Attr{"__@0",
                    AttrList{
                        Attr{"__name", "z"},
                        Attr{"__default_value", 3.f},
                        Attr{"range", std::pair{1.f,10.f}},
                    }
                },
            }
        },
        Fields{"operator+", &Point::operator+,
            AttrList {
                Attr{"__@0",
                    AttrList{
                        Attr{"__name", "rhs"},
                        Attr{"__default_value"},
                    }
                },
            }
        },
    };
};
