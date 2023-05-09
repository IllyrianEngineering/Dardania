// Copyright (C) 2017-2018 Menhirs NV. All rights reserved.
#pragma once

#include "Atil/Defs.h"
#include "Atil/Size.h"


namespace Atil
{;


class DataBuffer;
class DataModel;


class ATIL_IMPORTEXPORT RowProviderInterface
{
public:
    virtual ~RowProviderInterface() {}

    virtual int bytesPerRow() const = 0;
    virtual const DataModel& dataModel() const = 0;
    virtual void getNextRow(DataBuffer& oneRow) = 0;
    virtual bool getNextSpan(int& start, int& count) = 0;
    virtual bool hasSpanInfo() const = 0;
    virtual bool isValid() const = 0;
    virtual int numSpans() = 0;
    virtual void restartSpans() = 0;
    virtual int rowsRemaining() = 0;
    virtual Size size() const = 0;
};


} //namespace Atil
