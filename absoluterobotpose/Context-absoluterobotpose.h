#ifndef GENERATED_ASN1SCC_Context_absoluterobotpose_H
#define GENERATED_ASN1SCC_Context_absoluterobotpose_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccVizkit3D_FilePath configfile;
    asn1SccVizkit3D_PluginLabel id;
} asn1SccContext_absoluterobotpose;

flag asn1SccContext_absoluterobotpose_Equal(const asn1SccContext_absoluterobotpose* pVal1, const asn1SccContext_absoluterobotpose* pVal2);

void asn1SccContext_absoluterobotpose_Initialize(asn1SccContext_absoluterobotpose* pVal);

#define ERR_CONTEXT_ABSOLUTEROBOTPOSE_CONFIGFILE		1  /**/
#define ERR_CONTEXT_ABSOLUTEROBOTPOSE_ID		12  /**/
flag asn1SccContext_absoluterobotpose_IsConstraintValid(const asn1SccContext_absoluterobotpose* pVal, int* pErrCode);

extern const asn1SccContext_absoluterobotpose absoluterobotpose_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif