//-----------------------------------------------------------------------------
// Copyright (C) 2019 Merlok
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// NFC Data Exchange Format (NDEF) functions
//-----------------------------------------------------------------------------

#ifndef _NDEF_H_
#define _NDEF_H_

#include <stdint.h>
#include <stdbool.h>

extern int NDEFDecodeAndPrint(uint8_t *ndef, size_t ndefLen, bool verbose);

#endif // _NDEF_H_
