// Copyright (C) 2010-2014 Menhirs NV. All rights reserved.

// Windows MFC CArchiveException type and functions

#pragma once

#ifndef _BS_ARCHIVEEXCEPTION_INCLUDED_
#define _BS_ARCHIVEEXCEPTION_INCLUDED_

#include "Platform/mfc/CString.h"
#include "Platform/mfc/CException.h"

#ifndef BRXEXPORT // for client build : import
#define BRXEXPORT
#endif

// ========== Platform independent ==========

#ifdef _WIN32
namespace Mfc
{
#endif

class BRXEXPORT CArchiveException : public CException
{
    // DECLARE_DYNAMIC(CArchiveException)

public:
    enum
    {
        none,
        genericException,
        readOnly,
        endOfFile,
        writeOnly,
        badIndex,
        badClass,
        badSchema
    };

    CArchiveException(int reason = CArchiveException::none,
                         LPCTSTR szArchivename = NULL);

    virtual ~CArchiveException() noexcept;

    virtual BOOL GetErrorMessage(LPTSTR szError, UINT maxError,
                                 PUINT helpContext = NULL) const;

public:
// #ifdef _DEBUG
//     virtual void Dump(CDumpContext& dc) const;
// #endif

public:
    int      m_cause;
    CString  m_strFileName;
};

#ifdef _WIN32
} // namespace Mfc
#endif

// ========== Platform specific ==========

#ifdef _WIN32
    typedef Mfc::CArchiveException      CMfcArchiveException;
#else
    typedef      CArchiveException      CMfcArchiveException;
#endif

#endif // _BS__ARCHIVEEXCEPTION_INCLUDED_
