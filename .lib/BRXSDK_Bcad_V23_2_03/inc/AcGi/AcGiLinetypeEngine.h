// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

#include "AcGi/AcGiWorldDraw.h"

/** _ */
class AcGiLinetypeEngine: public AcRxObject
{
public:
    ACRX_DECLARE_MEMBERS(AcGiLinetypeEngine);

    AcGiLinetypeEngine();
    virtual ~AcGiLinetypeEngine();

    virtual Acad::ErrorStatus tessellate(bool,bool,const Adesk::UInt32,const AcGePoint3d*,AcGiViewportDraw*,const AcDbObjectId,double,const AcGeVector3d*,bool = false);
    virtual Acad::ErrorStatus tessellate(bool,bool,const Adesk::UInt32,const AcGePoint3d*,AcGiWorldDraw*,const AcDbObjectId,double,const AcGeVector3d*,bool = false);
    virtual Acad::ErrorStatus tessellate(const AcGeCircArc3d&,const AcGeMatrix3d&,double,double,AcGiCommonDraw*,const AcDbObjectId,double,double);
    virtual Acad::ErrorStatus tessellate(const AcGeLineSeg3d&,const AcGeMatrix3d&,double,double,AcGiCommonDraw*,const AcDbObjectId,double);
};