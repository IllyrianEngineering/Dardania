// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

class AcDbGeoCoordinateSystem;
class BrxDbGeoCoordinateSystemCategoryImp;


class BRX_IMPORTEXPORT AcDbGeoCoordinateSystemCategory
{
public:
    AcDbGeoCoordinateSystemCategory();
    virtual ~AcDbGeoCoordinateSystemCategory();

    static Acad::ErrorStatus createAll(AcArray<AcDbGeoCoordinateSystemCategory*>&);

    virtual Acad::ErrorStatus getCoordinateSystemAt(int, AcDbGeoCoordinateSystem*&) const = 0;
    virtual Acad::ErrorStatus getId(AcString&) const = 0;
    virtual Acad::ErrorStatus getNumOfCoordinateSystem(int&) const = 0;

private:
    friend BrxDbGeoCoordinateSystemCategoryImp;
    BrxDbGeoCoordinateSystemCategoryImp* m_pBrxImp;
};
