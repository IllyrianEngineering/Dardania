// Copyright (C) 2006-2009 Menhirs NV. All rights reserved.
#pragma once

#include "BmSurface.h"

namespace AModeler
{

class ImplRevolutionSurface;

class BM_IMPORTEXPORT RevolutionSurface: public Surface
{
private:
    std::shared_ptr<ImplRevolutionSurface> m_pBrxImp;

public:
    RevolutionSurface();
    RevolutionSurface(const Line3d&,const Vector3d&,Body* = NULL);

    virtual bool isEqual(const Surface*) const;
    virtual bool transform(const Transf3d&,Transf3d::Type = Transf3d::kUnknown,const Vector3d& = Vector3d::kNull);
    virtual void restore(SaveRestoreCallback*);
    virtual void save(SaveRestoreCallback*) const;

    Line3d axis() const;
    Vector3d startDir() const;
};

}
