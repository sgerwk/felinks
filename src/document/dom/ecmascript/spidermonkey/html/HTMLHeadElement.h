#ifndef EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLHEADELEMENT_H
#define EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLHEADELEMENT_H

#include "document/dom/ecmascript/spidermonkey/html/HTMLElement.h"
#include "ecmascript/spidermonkey/util.h"

extern const JSClass HTMLHeadElement_class;
extern const JSFunctionSpec HTMLHeadElement_funcs[];
extern const JSPropertySpec HTMLHeadElement_props[];

struct HEAD_struct {
	struct HTMLElement_struct html;
	unsigned char *profile;
};

#endif