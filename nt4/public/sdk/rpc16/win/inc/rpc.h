
/*++

Copyright (c) 1991-1993 Microsoft Corporation

Module Name:

    rpc.h

Abstract:

    Master include file for RPC applications.

--*/

#ifndef __RPC_H__
#define __RPC_H__

// Set the packing level for RPC structures.

#pragma warning(disable:4103)
#pragma pack(2)

#ifdef __cplusplus
extern "C" {
#endif

#define __RPC_WIN16__

#ifndef __MIDL_USER_DEFINED
#define midl_user_allocate MIDL_user_allocate
#define midl_user_free     MIDL_user_free
#define __MIDL_USER_DEFINED
#endif

typedef unsigned short RPC_STATUS;

#define RPCXCWORD 7

#define __RPC_FAR  __far
#define __RPC_API  __far __pascal
#define __RPC_USER __far __pascal __export
#define __RPC_STUB __far __pascal __export
#define RPC_ENTRY  __pascal __export __far

typedef void _near * I_RPC_HANDLE;

#include "rpcdce.h"
#include "rpcnsi.h"
#include "rpcerr.h"
#include "rpcx86.h"

#ifdef PASCAL
extern RPC_STATUS RPC_ENTRY RpcWinSetYieldInfo(HWND, BOOL, WORD, DWORD);
extern RPC_STATUS RPC_ENTRY RpcWinSetYieldTimeout(unsigned int);
extern RPC_STATUS RPC_ENTRY I_RpcWinSetTaskYielding(unsigned);
#endif

#ifdef __cplusplus
}
#endif

// Reset the packing level.

#pragma pack()
#pragma warning(default:4103)

#endif // __RPC_H__

