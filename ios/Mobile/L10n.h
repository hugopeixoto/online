// -*- Mode: ObjC; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; fill-column: 100 -*-
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <config_version.h>

#define _(id, catalog) app_translate(id, catalog)

#if (LIBO_VERSION_MAJOR > 7 && LIBO_VERSION_MAJOR < 21) || (LIBO_VERSION_MAJOR == 7 && LIBO_VERSION_MINOR >= 3)

#define LIBO_INTERNAL_ONLY

#import <rtl/string.hxx>
#import <unotools/resmgr.hxx>

char *app_translate(TranslateId id, const char *catalog);
#else
char *app_translate(const char *id, const char *catalog);
#endif

// vim:set shiftwidth=4 softtabstop=4 expandtab:
