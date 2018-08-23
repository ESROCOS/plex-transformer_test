/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_printer__
#define __USER_CODE_H_printer__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void printer_startup();

void printer_PI_update_amp(const asn1SccBase_samples_RigidBodyState *);

void printer_PI_update_arp(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
