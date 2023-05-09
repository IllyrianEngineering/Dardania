// Copyright (C) Menhirs NV. All rights reserved.

#pragma once

#ifdef _WIN32

#include <atlcom.h>

/** _ */
template <class T>
class CProxy_PropertyNotifySink
    : public IConnectionPointImpl<T, &IID_IPropertyNotifySink, CComDynamicUnkArray>
{
public:
    void Fire_OnChanged()
    {
        Fire_OnChanged(DISPID_UNKNOWN);
    }

    void Fire_OnChanged(DISPID dispId)
    {
        T* pT = static_cast<T*>(this);
        pT->Lock();
        for(IUnknown** pI = this->m_vec.begin(); pI < this->m_vec.end(); pI++)
            if(*pI) reinterpret_cast<IPropertyNotifySink*>(*pI)->OnChanged(dispId);
        pT->Unlock();
    }
};

#endif // _WIN32
