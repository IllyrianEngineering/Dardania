// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

#include "AcDb/AcDbEntity.h"

/** _ */
class BRX_EXPORT AcDbBlockEnd: public AcDbEntity
{
public:
    ACDB_DECLARE_MEMBERS(AcDbBlockEnd);

    AcDbBlockEnd();
    ~AcDbBlockEnd();

    virtual bool castShadows() const;
    virtual bool receiveShadows() const;
    virtual void setCastShadows(bool);
    virtual void setReceiveShadows(bool);
};