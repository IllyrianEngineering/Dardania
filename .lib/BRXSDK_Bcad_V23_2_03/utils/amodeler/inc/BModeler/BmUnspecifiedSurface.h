// Copyright (C) 2006-2009 Menhirs NV. All rights reserved.
#pragma once

#include "BmSurface.h"

namespace AModeler
{

class BM_IMPORTEXPORT UnspecifiedSurface: public Surface
{
public:
    UnspecifiedSurface(Body* = NULL);

    virtual bool containsPoint(const Point3d&) const;
    virtual bool isEqual(const Surface*) const;
    virtual bool transform(const Transf3d&,Transf3d::Type = Transf3d::kUnknown,const Vector3d& = Vector3d::kNull);
    virtual Circle3d circle(const Plane&,const Line3d&) const;
    virtual Surface* copy() const;
    virtual Type type() const;
    virtual Vector3d normal(const Point3d&) const;
    virtual void print(FILE* = NULL) const;
};

}
