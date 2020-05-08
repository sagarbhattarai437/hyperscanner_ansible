/****************************************************************************
SDS_API.H - header file containing definitions and function prototypes
****************************************************************************/
/* Copyright 1998-2019, Honeywell International, Incorporated.  All Rights Reserved */

/* Preamble */
#ifndef SDS_API_H_INCLUDED
#define SDS_API_H_INCLUDED

// #define SD_API2_IS_DLL
#include "SD.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

SD_API2 int SD_STDCALL2 SD_RemoteLicenseActivation(char *License_key, char *storagePath);
SD_API2 int SD_STDCALL2 SD_GenerateLicenseRequest(char *License_key, char *storagePath, char *filename);
SD_API2 int SD_STDCALL2 SD_ConsumeLicenseResponse(char *License_key, char *storagePath, char *filename);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* SDS_API_H_INCLUDED */
