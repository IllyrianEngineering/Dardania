// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

#include "AcRx/AcRxObject.h"

/** _ */
class AcDbLongTransWorkSetIterator: public AcRxObject
{
public:
    ACRX_DECLARE_MEMBERS(AcDbLongTransWorkSetIterator);

    virtual ~AcDbLongTransWorkSetIterator() {}

    virtual AcDbObjectId objectId() const = 0;
    virtual bool curObjectIsErased() const = 0;
    virtual bool curObjectIsPrimary() const = 0;
    virtual bool curObjectIsRemoved() const = 0;
    virtual bool done() = 0;
    virtual void start(bool = false,bool = false) = 0;
    virtual void step() = 0;
};
