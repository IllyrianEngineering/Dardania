// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

#include "AcDb/AcDbObjectReactor.h"
#include "AcDb/AcDbRasterImageDefReactor.h"

/** _ */
class AcDbRasterImageDefTransReactor: public AcDbObjectReactor
{
public:
    ACRX_DECLARE_MEMBERS(AcDbRasterImageDefTransReactor);

    virtual ~AcDbRasterImageDefTransReactor();

    virtual Adesk::Boolean onDeleteImage(const AcDbRasterImageDef*,Atil::Image*,AcDbRasterImageDefReactor::DeleteImageEvent,Adesk::Boolean) = 0;
};
