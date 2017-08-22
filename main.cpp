#include <iostream>

using namespace std;

typedef enum
{
    EECode_OK = 0,

    EECode_NotInitilized = 0x001,
    EECode_NotRunning = 0x002,

    EECode_Error = 0x003,
    EECode_Closed = 0x004,
    EECode_Busy = 0x005,
    EECode_OSError = 0x006,
    EECode_IOError = 0x007,
    EECode_TimeOut = 0x008,
    EECode_TooMany = 0x009,
    EECode_OutOfCapability = 0x00a,
    EECode_TimeTick = 0x00b,

    EECode_NoMemory = 0x00c,
    EECode_NoPermission = 0x00d,
    EECode_NoImplement = 0x00e,
    EECode_NoInterface = 0x00f,

    EECode_NotExist = 0x010,
    EECode_NotSupported = 0x011,

    EECode_BadState = 0x012,
    EECode_BadParam = 0x013,
    EECode_BadCommand = 0x014,
    EECode_BadFormat = 0x015,
    EECode_BadMsg = 0x016,
    EECode_BadSessionNumber = 0x017,

    EECode_TryAgain = 0x018,

    EECode_DataCorruption = 0x019,
    EECode_DataMissing = 0x01a,

    EECode_InternalMemoryBug = 0x01b,
    EECode_InternalLogicalBug = 0x01c,
    EECode_InternalParamsBug = 0x01d,

    EECode_ProtocolCorruption = 0x01e,
    EECode_AbortTimeOutAPI = 0x01f,
    EECode_AbortSessionQuitAPI = 0x020,

    EECode_UnknownError = 0x021,
    EECode_MandantoryDelete = 0x022,

    EECode_NetConnectFail = 0x023,

    EECode_NetSocketSend_Error = 0x024,
    EECode_NetSocketRecv_Error = 0x025,

    EECode_NotLogin = 0x026,
    EECode_AlreadyExist = 0x027,


} EECode;

EECode MyStatus(){
    EECode eStatus = EECode_Error;
    return eStatus;
}

int main()
{
    EECode eStatus = MyStatus();

    if(eStatus == EECode_Error){
        cout << "EECode_Error" << endl;
    }
    return 0;
}
