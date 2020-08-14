// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 CHINESESIMPLIFIED_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// CHINESESIMPLIFIED_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef CHINESESIMPLIFIED_EXPORTS
#define CHINESESIMPLIFIED_API __declspec(dllexport)
#else
#define CHINESESIMPLIFIED_API __declspec(dllimport)
#endif

extern CHINESESIMPLIFIED_API LPCTSTR IDS_TITLE;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_LOGO_DESC;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_LOGO_AGORAWEB;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_CONTACT;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_PHONENUMBER;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_PRE_TITLE;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_PRE_OPTDSC1;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_PRE_OPTDSC2;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_PRE_WEBDSC1;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_PRE_WEBDSC2;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_PRE_BTNOPT;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_PRE_BTNWEB;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_TITLE;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_DSC1;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_DSC2;
//extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_DSC3;
//extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_DSC4;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_BTBACK;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_BTTEST;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_BTJOIN;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_CHTIP;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_KEYTIP;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_ENCTYPE;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES128XTS;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES128GCM;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES128CCM;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES128CTR;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES256XTS;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES256GCM;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES256CCM;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES256CTR;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_AES_128_ECB;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_CHN_SM4_128ECB;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_SET_RESOLUTION;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_SET_MFR;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_SET_MR;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_SET_BTCONFIRM;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_SET_CODEC;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_SET_SWAPWH;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_SET_SAVESETTING;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_AUDIOIN;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_AUDIOOUT;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_CAMERA;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_VOLUME;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_BTNTEST;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_BTNTESTOFF;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_CANCEL;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_DEVICE_CONFIRM;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_VIDEO_SCRSHARE;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_VIDEO_WNDSHARE;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_VIDEO_WBHOST;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_VIDEO_WBGUEST;

extern CHINESESIMPLIFIED_API LPCTSTR IDS_VIDEO_MOREINFO;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_VIDEO_MOREDEVICE;
extern CHINESESIMPLIFIED_API LPCTSTR IDS_VIDEO_MOREFILTER;


