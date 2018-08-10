/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Context-absoluterobotpose.h"


const asn1SccContext_absoluterobotpose absoluterobotpose_ctxt = {
    .configfile = "config-bodystate.yml",
    .id = "arp"
};


flag asn1SccContext_absoluterobotpose_Equal(const asn1SccContext_absoluterobotpose* pVal1, const asn1SccContext_absoluterobotpose* pVal2)
{
	flag ret=TRUE;

    ret = (strcmp(pVal1->configfile, pVal2->configfile) == 0);

    if (ret) {
        ret = (strcmp(pVal1->id, pVal2->id) == 0);

    }
	return ret;

}

void asn1SccContext_absoluterobotpose_Initialize(asn1SccContext_absoluterobotpose* pVal)
{


	/*set configfile */
	asn1SccVizkit3D_FilePath_Initialize(pVal->configfile);
	/*set id */
	asn1SccVizkit3D_PluginLabel_Initialize(pVal->id);
}

flag asn1SccContext_absoluterobotpose_IsConstraintValid(const asn1SccContext_absoluterobotpose *pVal, int* pErrCode)
{
    flag ret = TRUE;
	
    ret = (strlen(pVal->configfile) <= 255);
    *pErrCode = ret ? 0 :  ERR_CONTEXT_ABSOLUTEROBOTPOSE_CONFIGFILE;
    if (ret) {
        ret = ((1 <= strlen(pVal->id)) && (strlen(pVal->id) <= 31));
        *pErrCode = ret ? 0 :  ERR_CONTEXT_ABSOLUTEROBOTPOSE_ID;
    }

	return ret;
}

