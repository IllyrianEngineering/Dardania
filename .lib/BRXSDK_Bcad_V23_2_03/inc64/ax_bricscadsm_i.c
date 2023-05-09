

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for OdSmX.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_BricscadSm,0x8044A067,0xA790,0x4400,0xA1,0x1B,0x75,0x21,0x9A,0x18,0x21,0x48);


MIDL_DEFINE_GUID(IID, IID_IAcSmPersist,0xab9e4650,0xc3a8,0x4747,0x8d,0x89,0x80,0x73,0x1a,0x46,0x44,0xa1);


MIDL_DEFINE_GUID(IID, IID_IAcSmObjectId,0x42634426,0xcdfb,0x4e32,0xad,0x46,0x99,0x2c,0xeb,0x3b,0x15,0x96);


MIDL_DEFINE_GUID(IID, IID_IAcSmComponent,0x0e463002,0x12a4,0x4828,0xb4,0xcf,0x28,0xd8,0xcb,0xf8,0xc7,0x68);


MIDL_DEFINE_GUID(IID, IID_IAcSmSubset,0x8cceb838,0xacf5,0x4048,0xb9,0xf0,0x09,0xa8,0x43,0xca,0x2a,0xc4);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSet,0x537476a6,0xe9e9,0x4e25,0xb6,0xea,0xfb,0x5b,0x8b,0x08,0x61,0x53);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheet,0x59bc91bb,0xfad8,0x44f9,0x86,0xf9,0x5c,0x99,0xfa,0x6b,0x4e,0xdd);


MIDL_DEFINE_GUID(IID, IID_IAcSmViewCategories,0xb28b23eb,0xff5e,0x4910,0x8c,0xa6,0xad,0x54,0x93,0x10,0x13,0xf3);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetViews,0x5d2d1da2,0x97ca,0x48d9,0x93,0xfd,0xbb,0xc5,0xb5,0x85,0x29,0x62);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumSheetView,0x07bb6db5,0x2198,0x4ea2,0x87,0x52,0xe5,0xa5,0x20,0xd0,0x1a,0x47);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetView,0xf69ceaf1,0x819f,0x4b7a,0xb5,0xe6,0xd3,0x93,0x95,0x41,0x5f,0x55);


MIDL_DEFINE_GUID(IID, IID_IAcSmFiler,0x8e974876,0xff7f,0x48d3,0x84,0x35,0xa6,0x32,0x8c,0xcc,0x49,0x6f);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbDatabase,0x0070c60f,0x987a,0x4349,0x9e,0x0a,0x3a,0xcb,0xa0,0xcc,0x9c,0x5b);


MIDL_DEFINE_GUID(IID, IID_IAcSmDatabase,0x5585723a,0x4859,0x4dd9,0x99,0x13,0x99,0x64,0x84,0xd6,0x06,0x0d);


MIDL_DEFINE_GUID(IID, IID_IAcSmDatabase_Internal,0xce030fd3,0x3646,0x4924,0xa4,0x45,0xa1,0x49,0x82,0xa9,0x64,0x08);


MIDL_DEFINE_GUID(IID, IID_IAcSmCustomPropertyValue,0xda800d3b,0x975c,0x4381,0x95,0x31,0x35,0x83,0x28,0x79,0x26,0x50);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumProperty,0x476cbb88,0x8878,0x419d,0xa8,0xc5,0xa9,0xce,0xd8,0x9d,0x5a,0x37);


MIDL_DEFINE_GUID(IID, IID_IAcSmCustomPropertyBag,0xfa893fe9,0x247c,0x44ec,0xb4,0x37,0x54,0x1c,0x0f,0x09,0xf5,0xfc);


MIDL_DEFINE_GUID(IID, IID_IAcSmFileReference,0xb86d90c3,0x7d13,0x4180,0x8f,0x97,0x61,0xc0,0x9f,0xa1,0x59,0x02);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbObjectReference,0x25b22534,0xb1f7,0x402c,0x82,0xd6,0xd3,0x6f,0xac,0x62,0x0d,0x69);


MIDL_DEFINE_GUID(IID, IID_IAcSmNamedAcDbObjectReference,0xc5e0c361,0x9e43,0x4574,0xa0,0xab,0xde,0xfa,0x48,0x35,0x11,0xe4);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbLayoutReference,0xc91d5f15,0x0faa,0x4787,0x8f,0x12,0x89,0xe2,0xf5,0x14,0x92,0x4e);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumComponent,0x330cd4d2,0x73fe,0x43dc,0x85,0xcc,0x48,0x26,0x38,0x63,0xcf,0xba);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbViewReference,0x978f1c91,0xbb5f,0x46e8,0xbd,0x7a,0xac,0x20,0xd0,0x05,0x26,0x06);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbBlockRecordReference,0xe44501c6,0xa13f,0x487c,0x96,0xa7,0x63,0xda,0x20,0x85,0xf4,0xea);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumAcDbBlockRecordReference,0x19c204ed,0x39d8,0x4060,0x82,0x56,0xb5,0xa2,0xc8,0x1d,0x6f,0x25);


MIDL_DEFINE_GUID(IID, IID_IAcSmCalloutBlocks,0xcfbf491d,0x19c4,0x4893,0x9c,0x4b,0xbc,0x3d,0xfb,0x6d,0x5e,0x64);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSelSet,0x1bea479e,0xec3a,0x49b8,0x94,0xe5,0xcf,0xce,0xe9,0x2c,0x4a,0xfe);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumSheetSelSet,0xe8c8d548,0x3b80,0x4810,0xb8,0x66,0x61,0x7a,0x7b,0x91,0x6f,0xe8);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSelSets,0x20786806,0xb251,0x4277,0xb1,0x19,0x94,0x20,0x9c,0x2e,0xa7,0xf9);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumFileReference,0x73fcecfa,0x6343,0x4630,0x88,0x9b,0xd0,0x3c,0xbf,0xbc,0x24,0x31);


MIDL_DEFINE_GUID(IID, IID_IAcSmResources,0xb448171b,0xd56c,0x4834,0xbf,0x45,0x3d,0x2e,0xd0,0xa6,0x62,0x29);


MIDL_DEFINE_GUID(IID, IID_IAcSmPublishOptions,0x147981d1,0xaf77,0x42a1,0x8b,0x91,0x49,0x94,0xa1,0x6a,0x59,0xfd);


MIDL_DEFINE_GUID(IID, IID_IAcSmEvents,0x56832073,0xa227,0x43f5,0xb5,0xe9,0xbb,0x4f,0x0e,0x4c,0x7a,0xd4);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumPersist,0x746e7d4f,0x0024,0x44ae,0x87,0x53,0xf1,0xcc,0xae,0x44,0x07,0x2c);


MIDL_DEFINE_GUID(IID, IID_IAcSmPersistProxy,0xd5bb3e7e,0x2af7,0x4d10,0x94,0xb3,0x21,0x3f,0xfd,0xaf,0x16,0xc8);


MIDL_DEFINE_GUID(IID, IID_IAcSmObjectReference,0xadf37497,0xa661,0x4306,0xb0,0x48,0xa7,0x03,0xe8,0x42,0xd2,0xfa);


MIDL_DEFINE_GUID(IID, IID_IAcSmProjectPointLocation,0x0b79150e,0xc037,0x48ad,0xa9,0x3f,0x2f,0xf6,0xd3,0x10,0x4d,0x11);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumProjectPointLocation,0xaf02d3b1,0xa2e4,0x44c7,0x85,0xae,0x01,0x03,0x83,0x65,0xde,0xc2);


MIDL_DEFINE_GUID(IID, IID_IAcSmProjectPointLocations,0x2760e2a6,0xc735,0x4a97,0x82,0x60,0xf1,0xaf,0x21,0x2c,0x8a,0x4d);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumDatabase,0x02aacc99,0x5c5a,0x4528,0xa0,0x0a,0x73,0xf7,0x1c,0x51,0x43,0x9b);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSetMgr,0x4cc6fc8f,0xf1c6,0x486d,0xb5,0x50,0x83,0x8b,0x02,0x34,0xe0,0x3c);


MIDL_DEFINE_GUID(IID, IID_IAcSmViewCategory,0xa5b52086,0xa849,0x4a06,0x9b,0x77,0x41,0xd8,0x60,0xe5,0xa1,0x1b);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumViewCategory,0x460b347f,0xc804,0x42f0,0x91,0xd5,0x7d,0xdd,0x92,0x5e,0x50,0x58);


MIDL_DEFINE_GUID(IID, IID_IOdSmInternal,0x66512850,0x2BEB,0x4a6b,0xB4,0x71,0x2D,0xEC,0xF7,0x6C,0x87,0x6E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmPersist,0xF9330314,0x1230,0x4A54,0x97,0xF4,0xBB,0x57,0x18,0x08,0xB4,0x61);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmComponent,0xDD9A472B,0xA88C,0x4663,0xA9,0x5B,0xFF,0x4D,0x17,0xD5,0x94,0x85);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmObjectId,0xB23D162E,0xB428,0x40BD,0xA7,0xD0,0xEC,0xC0,0xCE,0x0D,0x18,0x60);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumComponent,0x79E324E8,0xB542,0x4008,0x93,0x3B,0xE8,0x4A,0x11,0x74,0x27,0x1A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSubset,0xFDB08D44,0x275B,0x4F15,0xA3,0xF7,0x49,0x4C,0x16,0xAE,0x04,0x30);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbBlockRecordReference,0x68CFEC3B,0xE359,0x46CA,0x9C,0xDF,0x12,0x67,0xD2,0x02,0x61,0x08);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbDatabase,0xADE954B8,0x3A43,0x49A0,0xAE,0x65,0x9E,0xC8,0xA0,0xEF,0xC2,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbLayoutReference,0xAAAC5C83,0x6439,0x44D2,0xAF,0xC3,0x4A,0xC9,0xF8,0xA8,0x07,0xE5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbObjectReference,0x1802B2E5,0x63AF,0x485E,0xAE,0xD9,0xDC,0x74,0xF9,0xEA,0x29,0x53);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbViewReference,0xF7781E1C,0x7660,0x4044,0x9E,0x4B,0xCB,0xAC,0x61,0xBD,0x2E,0xB7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCalloutBlocks,0x13749138,0x2F11,0x4588,0xAC,0x54,0x0C,0xD9,0x0D,0x5E,0xEB,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCustomPropertyBag,0x16CB4168,0xB128,0x4D6A,0xAF,0x26,0x1E,0x81,0x59,0x05,0xDC,0xBB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCustomPropertyValue,0x27E2427C,0xAEED,0x4645,0x8F,0x91,0x6D,0x0E,0x73,0x1D,0xF8,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmDatabase,0x1F09CE45,0xF724,0x46EF,0xBF,0x35,0x32,0x34,0x98,0xA6,0x04,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSet,0xCFEB326E,0xD28D,0x4370,0x80,0xCB,0x45,0xBA,0x56,0x44,0x24,0x47);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumAcDbBlockRecordReference,0x716CDF78,0xF2F2,0x4B6A,0x94,0x9A,0xB0,0x12,0x95,0x98,0xF1,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumDatabase,0x7EB09C79,0x4AA5,0x4C9F,0x9C,0xB9,0x02,0x37,0x9E,0xBE,0x26,0x0F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumFileReference,0x71E42A79,0x3271,0x426C,0x8A,0x25,0x55,0x97,0x2E,0x70,0x00,0xC7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmNamedAcDbObjectReference,0xCE91A7A1,0xC532,0x4A64,0xBA,0x3D,0x0B,0x35,0x4A,0xC4,0x57,0x06);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmProjectPointLocation,0x8838AAAD,0x2684,0x4121,0x96,0x0C,0x98,0xB8,0xD0,0x98,0x40,0xF7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmProjectPointLocations,0xD556CA7C,0x0A49,0x40CD,0x97,0xA1,0xD5,0x90,0xB4,0x9A,0xFC,0xEA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmPublishOptions,0x46455B51,0x7EE0,0x4858,0x93,0xEF,0xAE,0x51,0xDD,0x1E,0x2E,0x8C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmResources,0x8B263B16,0xAF74,0x4E75,0x94,0xCC,0x79,0xE7,0x19,0x14,0x6E,0x40);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheet,0x1563D4FD,0xC3F5,0x49E1,0x99,0xF4,0x11,0x22,0xD5,0x47,0xB6,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSelSet,0xD0B62D64,0x4C38,0x407E,0x85,0x3A,0xBE,0xE6,0x90,0x36,0xA2,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSelSets,0x977B1F35,0xBC06,0x4410,0xAE,0x93,0xEE,0x44,0xCD,0x2F,0xD2,0xCE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSetMgr,0xB5B0C189,0x9C8B,0x43F1,0x80,0xAD,0xAE,0xC5,0x54,0xBE,0x19,0x07);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetView,0x3FDC59D6,0x34D4,0x4BF6,0xB9,0xFC,0x9A,0x54,0xFE,0x5D,0xFF,0xA3);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetViews,0xE0EC3D3F,0x4EFD,0x4E92,0xB8,0x91,0xDB,0x13,0x54,0x38,0x52,0xC5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmViewCategories,0x9FA288E6,0x50C9,0x44AF,0xB4,0x69,0x52,0xBF,0xD7,0x58,0x38,0x77);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmViewCategory,0xFA58248F,0x1E5A,0x4E9A,0xB2,0x27,0x64,0xA8,0x2D,0xBE,0x3E,0x3A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumPersist,0x42D88C36,0x2556,0x4237,0xA4,0x0B,0xDE,0x0D,0x49,0x37,0xF2,0x22);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCalloutBlockReferences,0x0973DE89,0x05D9,0x44F6,0x8B,0x2B,0xEC,0x44,0xB7,0x07,0x37,0x9F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumProperty,0xB70D3CBF,0x5F1C,0x4200,0x80,0xDB,0x0D,0xB3,0xAE,0x8A,0xE3,0x99);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumViewCategory,0x0F7A4EDD,0xED7F,0x438D,0xB8,0xCD,0xCA,0xFD,0x09,0x44,0x06,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumSheetView,0x5BD2B8F7,0x8177,0x49C8,0xA9,0xD2,0x6B,0xB5,0xCB,0x24,0xB8,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumProjectPointLocation,0x133FFB4B,0x8A36,0x4768,0xAC,0x23,0x09,0x2F,0xF8,0x9A,0x5A,0x56);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmFileReference,0x2D6B0230,0xD622,0x4A68,0x92,0xF0,0x98,0x3F,0xAD,0x12,0x7B,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumSheetSelSet,0x27D5F7AD,0x6E73,0x4E1E,0x83,0x30,0x5F,0x75,0x8C,0x3A,0x57,0xDA);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



