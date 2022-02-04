
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ACTCTRL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ACTCTRL_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef ACTCTRL_EXPORTS
#define ACTCTRL_API __declspec(dllexport)
#else
#define ACTCTRL_API __declspec(dllimport)
#endif

#include "CyAPI.h"

CCyUSBDevice *USBDevice;
HANDLE		  ParentWnd;
HWND		  hwnd;

extern "C" 
{ 
	__declspec(dllexport) int __stdcall CreateDevice(HANDLE Parent);
	__declspec(dllexport) int __stdcall VenderComm(int usbDirection,int usbReqCode,int usbValue,int usbIndex,long usbLength,unsigned char &retChar);
	__declspec(dllexport) bool __stdcall DownLoadFW(void);
}

// This class is exported from the ActCtrl.dll
class ACTCTRL_API CActCtrl {
public:
	CActCtrl(void);
	// TODO: add your methods here.
};

extern ACTCTRL_API int nActCtrl;

ACTCTRL_API int fnActCtrl(void);



