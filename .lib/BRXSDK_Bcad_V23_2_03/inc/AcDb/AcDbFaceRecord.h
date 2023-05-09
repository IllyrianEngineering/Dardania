// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

#include "AcDb/AcDbVertex.h"

/** _ */
class BRX_EXPORT AcDbFaceRecord: public AcDbVertex
{
public:
    ACDB_DECLARE_MEMBERS(AcDbFaceRecord);

    AcDbFaceRecord();
    AcDbFaceRecord(Adesk::Int16,Adesk::Int16,Adesk::Int16,Adesk::Int16);
    ~AcDbFaceRecord();

    Acad::ErrorStatus getVertexAt(Adesk::UInt16,Adesk::Int16&) const;
    Acad::ErrorStatus isEdgeVisibleAt(Adesk::UInt16,Adesk::Boolean&) const;
    Acad::ErrorStatus makeEdgeInvisibleAt(Adesk::UInt16);
    Acad::ErrorStatus makeEdgeVisibleAt(Adesk::UInt16);
    Acad::ErrorStatus setVertexAt(Adesk::UInt16,Adesk::Int16);
};
