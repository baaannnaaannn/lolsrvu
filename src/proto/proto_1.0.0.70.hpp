#pragma once
#include "proto_1.0.0.66.hpp"

IMPL_PROTO_VER(PROTO_VER(1.0.0.70), PROTO_VER(1.0.0.66)) {
public:
    using ProtoBase::read;
    using ProtoBase::write;

    std::string_view name() const override;
};
