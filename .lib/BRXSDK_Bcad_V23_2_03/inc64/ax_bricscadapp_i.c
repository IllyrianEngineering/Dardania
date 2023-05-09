

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for D:/dev/release/bricscad/bricscad/src/appx/ax_bricscadapp.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_BricscadApp,0x96586CB6,0x6D0C,0x416C,0xA6,0x80,0xB6,0xD5,0x5C,0x40,0xC0,0x9C);


MIDL_DEFINE_GUID(IID, IID_ITransmittalOperation,0x7EFB484A,0x0280,0x4ed6,0xA7,0x3F,0x6D,0xBE,0x66,0x3D,0xB7,0x9D);


MIDL_DEFINE_GUID(IID, IID_ITransmittalFilesGraph,0xDE88EA7C,0x176A,0x42c7,0xBF,0x1A,0xCF,0xCC,0xDE,0xAB,0x3E,0xDB);


MIDL_DEFINE_GUID(IID, IID_ITransmittalFile,0x0A107B59,0x34CE,0x4f40,0x9A,0xF2,0x26,0x06,0x0A,0x3C,0x20,0x99);


MIDL_DEFINE_GUID(IID, IID_ITransmittalInfo,0x122D84E7,0xA507,0x414c,0xA5,0x17,0xC3,0x3B,0x19,0xAF,0x6B,0xA5);


MIDL_DEFINE_GUID(IID, IID_IAcadMenuGroups,0x798225D3,0x984D,0x471e,0x84,0xF3,0xD1,0xEC,0x56,0xFA,0x05,0xEA);


MIDL_DEFINE_GUID(IID, IID_IAcadMenuGroup,0xDF14CB14,0xCDC6,0x463f,0xB7,0x1C,0x35,0x61,0x49,0xD1,0xF9,0x35);


MIDL_DEFINE_GUID(IID, IID_IAcadPopupMenus,0x3305CB53,0xF955,0x41f3,0xA4,0x7B,0xB7,0xAA,0x53,0xB2,0x2D,0x48);


MIDL_DEFINE_GUID(IID, IID_IAcadPopupMenu,0xE63FD651,0x4B1B,0x40be,0xB7,0xFA,0xCB,0xAE,0x74,0xD9,0x7F,0xE5);


MIDL_DEFINE_GUID(IID, IID_IAcadPopupMenuItem,0x5B5C5A15,0x81D2,0x4360,0x93,0x7A,0x4F,0x2F,0xA1,0x8F,0xB2,0x66);


MIDL_DEFINE_GUID(IID, IID_IAcadToolbars,0xF7DF12AA,0x4EF4,0x4eee,0x8D,0x00,0x68,0xBB,0x80,0xD7,0xF0,0x92);


MIDL_DEFINE_GUID(IID, IID_IAcadToolbar,0x618F1FE3,0x4CF9,0x41d4,0xA0,0x70,0x38,0x7C,0x85,0x60,0xD4,0xEC);


MIDL_DEFINE_GUID(IID, IID_IAcadToolbarItem,0xEBCED992,0x0BB7,0x4165,0xB4,0xD6,0x44,0x26,0x1F,0x37,0x75,0x65);


MIDL_DEFINE_GUID(IID, IID_IAcadMenuBar,0xA174CCC8,0xD19F,0x421f,0x8F,0x4E,0x65,0xC2,0xE4,0xF4,0x31,0x67);


MIDL_DEFINE_GUID(IID, IID_IAcadApplication,0xD48F17B7,0x773E,0x4238,0xA6,0xC6,0xB2,0xBB,0xEB,0xAA,0x9A,0x1E);


MIDL_DEFINE_GUID(IID, IID_IAcadUtility,0x5046A00A,0x7C22,0x4d39,0xAD,0xE0,0xFB,0x1A,0xE3,0x70,0x9B,0x4D);


MIDL_DEFINE_GUID(IID, IID_IAcadDocument,0x5896DFEB,0x2488,0x49f7,0x8A,0x9D,0xCF,0x0D,0xEA,0x5A,0xC6,0xFB);


MIDL_DEFINE_GUID(IID, IID_IAcadDocuments,0xCFFD1390,0x466A,0x49d9,0x9E,0xE0,0x18,0x84,0xE9,0x30,0xDF,0xF9);


MIDL_DEFINE_GUID(IID, IID_IAcadSelectionSets,0x37E34D42,0x8CD8,0x4e25,0x83,0xBF,0x80,0xC7,0x91,0xAF,0xEA,0xDE);


MIDL_DEFINE_GUID(IID, IID_IAcadSelectionSet,0x01374CB7,0x5D3B,0x4556,0x80,0x0C,0x9B,0xFC,0x71,0xBB,0xEC,0x42);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferences,0x03CE46C1,0x93A9,0x4e5c,0xB7,0xF5,0x7A,0xC7,0xE2,0xD4,0x89,0x48);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesFiles,0x125FA500,0x9ABC,0x4f98,0x87,0xAD,0x86,0x9A,0xEF,0xA4,0xAD,0x72);


MIDL_DEFINE_GUID(IID, IID_IAcadPlot,0x445545BB,0x394E,0x481a,0xAC,0x4F,0xF0,0x73,0xE5,0x30,0x30,0xE8);


MIDL_DEFINE_GUID(IID, IID_IAcadLayerStateManager,0x65CDCC9F,0xF651,0x4dc4,0xA3,0x61,0xA8,0x30,0x7F,0x08,0xAE,0xE3);


MIDL_DEFINE_GUID(IID, IID_IAcadSecurityParams,0xA058E098,0x4DCF,0x4e3b,0x93,0xBC,0xEF,0x0F,0xA1,0x9B,0x71,0x8A);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesDisplay,0x0D71BC3C,0x9854,0x4076,0xBD,0x32,0xD5,0x45,0x25,0x9A,0xB7,0x52);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesOpenSave,0x5E24ED87,0xDC43,0x4771,0xB7,0xE6,0x7F,0xE3,0x5C,0x21,0xCA,0xB1);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesOutput,0x1560A14A,0xD97B,0x4b3b,0xBF,0x95,0xD0,0xF7,0x03,0x72,0x34,0x42);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesPdfOutput,0x21F2EB66,0xF27E,0x40af,0xA3,0xF5,0x7F,0x2E,0x7D,0x6F,0x6A,0xA6);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesSystem,0x408546BA,0xFF59,0x4aa8,0x98,0xC5,0xA1,0xDB,0xA4,0xB7,0x30,0xF8);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesUser,0x689AE380,0xB75C,0x430e,0x8A,0x70,0xD1,0x16,0xD8,0xB4,0xFA,0x63);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesDrafting,0x35D9C296,0xC2E9,0x4dab,0x93,0xCA,0x4A,0x62,0xF7,0x1C,0x9F,0xC1);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesSelection,0xCE512178,0xE98E,0x4225,0x80,0x0E,0x0A,0x29,0xDE,0xE3,0x9B,0xCD);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesProfiles,0x52F0656B,0x9D63,0x4c67,0xAD,0xBF,0xE9,0xC7,0x32,0xED,0x27,0x1B);


MIDL_DEFINE_GUID(IID, IID_IAcadState,0xC2016470,0x443B,0x40d0,0xAD,0x93,0x23,0x1A,0xCF,0xDC,0xF5,0x94);


MIDL_DEFINE_GUID(IID, IID_IOdaDwfTemplate,0x8F2A46C2,0x4D8A,0x46D5,0x8B,0xBE,0xB0,0x6A,0x40,0x27,0xBE,0x10);


MIDL_DEFINE_GUID(IID, IID_IOdaDwfPageData,0x6C2751B5,0xA21F,0x46d8,0x8E,0xBE,0x59,0xF0,0xA1,0x52,0x88,0xD9);


MIDL_DEFINE_GUID(IID, IID_IOdaDwfImporter,0xC5631279,0x833D,0x4fe0,0x89,0x65,0xB0,0x6E,0x2F,0xEC,0x0E,0x9C);


MIDL_DEFINE_GUID(IID, IID_IOdaDwfImporter2,0x7E8D21F1,0x6343,0x4ccc,0x9F,0x7D,0x0B,0x27,0x0A,0x05,0xDC,0x12);


MIDL_DEFINE_GUID(IID, IID_IOdaSvgExporter,0xFDAF1115,0x5A20,0x4D16,0xA5,0x09,0x01,0x01,0x2B,0x71,0xE4,0xF7);


MIDL_DEFINE_GUID(IID, IID_IOdaAuditInfo,0x56B202FE,0xBE71,0x43b4,0xB5,0x04,0x19,0x02,0xED,0xE8,0x96,0x44);


MIDL_DEFINE_GUID(IID, IID_IOdaBmpOut,0x11c4f7aa,0xd8cc,0x4762,0x8c,0x7c,0x30,0x64,0xe6,0x5e,0xed,0xbd);


MIDL_DEFINE_GUID(IID, IID_IOdaDwf3dExport,0x4e99c4a8,0xafc0,0x45e9,0xb3,0x12,0x61,0xd7,0xdb,0x4f,0x2e,0xe6);


MIDL_DEFINE_GUID(CLSID, CLSID_TransmittalOperation,0x90E28445,0xA9C6,0x4CFB,0x8A,0x61,0xE1,0xCA,0x48,0x99,0x87,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_TransmittalFilesGraph,0xDBBD2B70,0x4EC1,0x4E25,0x85,0x87,0xCC,0xD8,0x2B,0xDF,0xE5,0x67);


MIDL_DEFINE_GUID(CLSID, CLSID_TransmittalFile,0x76613406,0x3C1E,0x4E3D,0x86,0x72,0x29,0x0C,0x36,0x79,0xEF,0xE2);


MIDL_DEFINE_GUID(CLSID, CLSID_TransmittalInfo,0xE5D9AAFD,0x4748,0x4B77,0xB7,0xB7,0x70,0x79,0x92,0xF7,0x82,0x50);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMenuGroups,0x3C8594D3,0x2898,0x4B07,0xBC,0xB2,0x91,0xFB,0xDE,0x35,0xD1,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMenuGroup,0xFDAF94F0,0x224C,0x422F,0xA9,0x72,0xD3,0x68,0x03,0x01,0x89,0x72);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMenuBar,0xCA0CD0D5,0x917D,0x46F7,0xA6,0xD4,0xA7,0x2E,0xD0,0x8B,0x1F,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPopupMenus,0x4364A21D,0xF5AA,0x4EE3,0x8F,0xD1,0x7D,0x04,0x4E,0x1A,0x67,0x99);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPopupMenu,0x1037231F,0x1762,0x4C18,0x84,0xA2,0x1B,0x49,0x60,0x39,0xEC,0x5F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPopupMenuItem,0xBD3D0D76,0xF070,0x4448,0x96,0x5B,0x75,0x06,0xDB,0x93,0xAF,0xCD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadToolbars,0x83F261BA,0xD8A3,0x4B3E,0xBE,0xDA,0x08,0xF0,0xDD,0x6D,0x37,0x7D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadToolbar,0xF3F29EF3,0x1ADF,0x47CC,0x89,0x79,0x8C,0xC7,0xC0,0x05,0xAA,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadToolbarItem,0x520C6D71,0xCFF7,0x4FCB,0xBA,0xD9,0x3D,0xAC,0xC5,0x36,0x48,0x9E);


MIDL_DEFINE_GUID(IID, DIID__DAcadApplicationEvents,0x93E291E9,0xBB72,0x429b,0xB4,0xDE,0xDF,0x76,0xB8,0x86,0x03,0xEB);


MIDL_DEFINE_GUID(IID, DIID__DAcadDocumentEvents,0x63A90E32,0xCB8B,0x4a3b,0xAD,0xFF,0xEF,0x94,0xA3,0x52,0x78,0xB2);


MIDL_DEFINE_GUID(IID, IID_IOdaHostApp,0xE789E253,0xBEDC,0x44ff,0xB2,0x28,0xAD,0x3A,0x17,0xD9,0xAB,0x3A);


MIDL_DEFINE_GUID(IID, IID_IOdaConsole,0x9DFDB619,0xA15D,0x43cd,0x92,0xD5,0x79,0x87,0xD4,0x52,0xB9,0xF1);


MIDL_DEFINE_GUID(IID, IID_IOdaHostApp2,0xCFE29DD1,0x2A1B,0x49f9,0x85,0x3E,0x11,0x91,0x8A,0x78,0x9C,0x6D);


MIDL_DEFINE_GUID(IID, IID_IOdaBagFiler,0x6eba6b5a,0x1d9f,0x4b21,0xbc,0x0b,0x35,0xef,0xdb,0xab,0x54,0x3d);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorColor,0x9EAF472F,0xA6A0,0x4289,0x82,0x86,0x50,0xC5,0x0C,0x5A,0xAF,0xCD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorTextStyle,0x1001C4DD,0x801C,0x4819,0xA5,0x66,0x02,0xE2,0x93,0xC2,0xBA,0x86);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLType,0x336167B1,0x10F3,0x4E59,0xA2,0x2A,0xA7,0xA9,0x2F,0xA3,0x67,0xA4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLayer,0xFD6A8531,0xFB29,0x423A,0xAC,0xF5,0xFE,0x00,0xDB,0x1E,0x5E,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorLWeight,0x4C0E9D71,0x1F85,0x4048,0x9E,0x17,0x3D,0x3F,0x4F,0x1F,0x23,0x91);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePropertyEditorEllipses,0x46FC79C1,0xB4D8,0x47DB,0xB5,0x93,0x02,0xAC,0xB2,0x66,0x8F,0x62);


MIDL_DEFINE_GUID(CLSID, CLSID_AcPePick2PointsCtrl,0x85C8628A,0xE84D,0x431A,0xB0,0xB5,0xD0,0xB1,0x42,0xC1,0xB6,0x7B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadApplication,0xBC27895B,0x1197,0x40D7,0x9C,0x9A,0xC9,0x4E,0xB5,0x2B,0x1F,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDocuments,0x80893A4A,0x712F,0x4404,0xAE,0x88,0x66,0xD7,0x66,0x4B,0x50,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDocument,0x4F626FA0,0x3C33,0x49D9,0xB1,0xB1,0xCF,0x0B,0xEF,0x14,0xB3,0x31);


MIDL_DEFINE_GUID(IID, DIID__IOdaHostAppEvents,0x5FA75E80,0xD112,0x4186,0xAD,0x8E,0x09,0x92,0xD7,0xF1,0x34,0x75);


MIDL_DEFINE_GUID(CLSID, CLSID_OdaHostApp,0x43C3A6C8,0x6BD0,0x4AF0,0xB3,0x26,0x0E,0xFE,0x59,0x77,0x9D,0x74);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadUtility,0xCA2C73B7,0xB493,0x4C3C,0x9A,0x1C,0xE5,0xD4,0x88,0xEF,0xA9,0xF8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferences,0xEAF56FFE,0xEE84,0x41B1,0x95,0x26,0x06,0xB5,0x08,0x81,0xD2,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesFiles,0x02B6D693,0x202E,0x465E,0x8B,0x06,0x78,0x03,0x98,0x3F,0xD2,0x49);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesDisplay,0xB6FCE2E9,0xD455,0x493C,0xBD,0xB6,0x30,0x68,0x43,0xFE,0x1E,0x38);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesOpenSave,0xEFDD44D0,0x34AC,0x41BE,0xAA,0x6D,0x3B,0x33,0x9F,0x44,0xC6,0x8D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesOutput,0x299D00E6,0xD6D1,0x4D38,0x81,0xE2,0x01,0x7E,0xA8,0x0B,0xB9,0x19);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesPdfOutput,0x72E369C3,0x6DD9,0x486C,0x9B,0x56,0x87,0xC0,0xA4,0x25,0x83,0xCB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesSystem,0x1EF574F7,0xD6DD,0x44DC,0x99,0x5E,0x5B,0xBC,0x4F,0x02,0x74,0xFD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesUser,0x98F09E3D,0x80E5,0x42AA,0x8C,0x88,0xD1,0xD5,0xF4,0xCA,0xD7,0xC9);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesDrafting,0xF99EEC2C,0x749E,0x4F86,0xBF,0xEA,0x0D,0x8B,0xCC,0x35,0x54,0x04);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesSelection,0x14C9A247,0xBE9F,0x47A4,0x94,0x27,0x15,0x6A,0x6B,0xDC,0x80,0xE4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesProfiles,0x3D38B082,0xD0C2,0x4C7F,0x8C,0xED,0xD0,0xF5,0x80,0x78,0x38,0x9C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadState,0xBF3D0EB4,0xEDFC,0x4265,0x94,0x39,0xDD,0x5E,0x96,0x15,0x7F,0x25);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSelectionSet,0xB920B495,0x3B8D,0x4C6E,0xAB,0xDF,0x95,0x3E,0x2D,0x98,0xB2,0x83);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSelectionSets,0x9B5C4472,0x7F02,0x4AC2,0x81,0xF1,0xBA,0xBA,0xA9,0xA8,0xA1,0xCF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlot,0x76792DF9,0x426B,0x478F,0xAE,0x4E,0xFA,0x01,0x04,0x67,0x88,0x4D);


MIDL_DEFINE_GUID(CLSID, CLSID_OdaDwfTemplate,0x42B88772,0x290A,0x44BD,0x8F,0x2B,0x75,0xA3,0x35,0x75,0x43,0x1D);


MIDL_DEFINE_GUID(CLSID, CLSID_OdaDwf3dExport,0x0D9B5D8B,0xD7C6,0x4821,0xAE,0x5C,0x6B,0x07,0xE9,0x1C,0x8E,0xE2);


MIDL_DEFINE_GUID(CLSID, CLSID_OdaDwfImporter,0xDF0316BA,0x2E05,0x481C,0x99,0xE2,0x4C,0x3B,0xB9,0x31,0x4D,0x4A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayerStateManager,0x6A719532,0xC7A1,0x4EAA,0xAC,0x12,0x07,0xDA,0x92,0x77,0xB2,0xA4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSecurityParams,0xA8D627D8,0xC61D,0x44A9,0xBF,0x0F,0xD4,0xA0,0x3B,0x85,0x10,0x73);


MIDL_DEFINE_GUID(CLSID, CLSID_OdaSvgExporter,0x3C8C6839,0x45AD,0x4C0F,0xA6,0x29,0x44,0xB7,0x84,0xD5,0xAA,0x4F);


MIDL_DEFINE_GUID(CLSID, CLSID_OdaBmpOut,0x7AEB9EC4,0xCAC0,0x4808,0xB8,0xF0,0xFF,0xEB,0x70,0x4A,0x5D,0x13);


MIDL_DEFINE_GUID(CLSID, CLSID_OdaBagFiler,0x593E1179,0x2DB2,0x4185,0xB7,0x0B,0x3F,0x7E,0xA2,0xEE,0x5C,0xBC);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



