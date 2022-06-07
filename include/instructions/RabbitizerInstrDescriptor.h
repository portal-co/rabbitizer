/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#ifndef RABBITIZER_INSTRDESCRIPTOR_H
#define RABBITIZER_INSTRDESCRIPTOR_H
#pragma once

#include <stdbool.h>

#include "RabbitizerRegisterType.h"
#include "RabbitizerInstrId.h"

typedef enum RabbitizerInstrType {
    RABBITIZER_INSTR_TYPE_UNKNOWN,
    RABBITIZER_INSTR_TYPE_J,
    RABBITIZER_INSTR_TYPE_I,
    RABBITIZER_INSTR_TYPE_R,
    RABBITIZER_INSTR_TYPE_REGIMM,
    RABBITIZER_INSTR_TYPE_MAX,
} RabbitizerInstrType;

typedef struct RabbitizerInstrDescriptor {
    RabbitizerRegisterType operands[4];
    RabbitizerInstrType instrType;

    bool isBranch;
    bool isBranchLikely;
    bool isJump;
    bool isTrap;

    bool isFloat;
    bool isDouble;

    bool isUnsigned;

    bool modifiesRt;
    bool modifiesRd;

    int mipsVersion;
} RabbitizerInstrDescriptor;

// TODO: less redundant name
extern const RabbitizerInstrDescriptor RabbitizerInstrDescriptor_Descriptors[];


bool RabbitizerInstrDescriptor_isJType(const RabbitizerInstrDescriptor *self);
bool RabbitizerInstrDescriptor_isIType(const RabbitizerInstrDescriptor *self);
bool RabbitizerInstrDescriptor_isRType(const RabbitizerInstrDescriptor *self);

bool RabbitizerInstrDescriptor_isBranch(const RabbitizerInstrDescriptor *self);
bool RabbitizerInstrDescriptor_isBranchLikely(const RabbitizerInstrDescriptor *self);
bool RabbitizerInstrDescriptor_isJump(const RabbitizerInstrDescriptor *self);
bool RabbitizerInstrDescriptor_isTrap(const RabbitizerInstrDescriptor *self);

bool RabbitizerInstrDescriptor_isFloat(const RabbitizerInstrDescriptor *self);
bool RabbitizerInstrDescriptor_isDouble(const RabbitizerInstrDescriptor *self);

bool RabbitizerInstrDescriptor_isUnsigned(const RabbitizerInstrDescriptor *self);

bool RabbitizerInstrDescriptor_modifiesRt(const RabbitizerInstrDescriptor *self);
bool RabbitizerInstrDescriptor_modifiesRd(const RabbitizerInstrDescriptor *self);

#endif
