/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#ifndef RABBITIZER_INSTRDESCRIPTOR_H
#define RABBITIZER_INSTRDESCRIPTOR_H
#pragma once

#include <stdbool.h>

#include "common/Utils.h"
#include "RabbitizerOperandType.h"
#include "RabbitizerInstrId.h"
#include "RabbitizerInstrSuffix.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef enum RabbitizerInstrType {
    RABBITIZER_INSTR_TYPE_UNKNOWN,
    RABBITIZER_INSTR_TYPE_J,
    RABBITIZER_INSTR_TYPE_I,
    RABBITIZER_INSTR_TYPE_R,
    RABBITIZER_INSTR_TYPE_REGIMM,
    RABBITIZER_INSTR_TYPE_MAX,
} RabbitizerInstrType;

typedef enum RabbitizerArchitectureVersion {
    RABBITIZER_ARCHVERSION_INVALID=-1,
    RABBITIZER_ARCHVERSION_UNKNOWN,
    RABBITIZER_ARCHVERSION_MIPS_I,
    RABBITIZER_ARCHVERSION_MIPS_II,
    RABBITIZER_ARCHVERSION_MIPS_III,
    RABBITIZER_ARCHVERSION_MIPS_IV
} RabbitizerArchitectureVersion;

typedef struct RabbitizerInstrDescriptor {
    RabbitizerOperandType operands[4];
    RabbitizerInstrType instrType;

    RabbitizerInstrSuffix instrSuffix;

    /**
     * Local branch with "restricted" range, usually it doesn't jump outside the current function
     */
    bool isBranch;
    bool isBranchLikely;
    /**
     * The instruction can jump inside or outside its current function
     */
    bool isJump;
    /**
     * The target address of this jump is encoded in the instruction (MIPS: J and JAL)
     */
    bool isJumpWithAddress;
    /**
     * Triggers a trap on the processor
     */
    bool isTrap;

    /**
     * The instruction performs float (any kind of float, including double precision) operations
     */
    bool isFloat;
    /**
     * The instruction performs double precision float operations
     */
    bool isDouble;

    /**
     * The instruction holds an immediate which is treated as an unsigned value,
     * otherwise the immediate it may hold should be treated as a Two's complement value
     */
    bool isUnsigned;

    /**
     * The instruction modifies the state of the MIPS `rt` register
     */
    bool modifiesRt;
    /**
     * The instruction modifies the state of the MIPS `rd` register
     */
    bool modifiesRd;

    /**
     * This instruction is not emited by a C compiler
     */
    bool notEmitedByCompilers;

    /**
     * The instruction can hold the "hi" value of a %hi/%lo pair
     */
    bool canBeHi;
    /**
     * The instruction can hold the "lo" value of a %hi/%lo pair
     */
    bool canBeLo;
    /**
     * "and link" family of instructions
     * The instruction stores the return address link in the MIPS $ra (GPR 31) register
     */
    bool doesLink;

    /**
     * This instruction performs a pointer dereference, either by loading from RAM or storing into RAM
     */
    bool doesDereference;
    /**
     * Dereferences a pointer and loads data from RAM
     */
    bool doesLoad;
    /**
     * Dereferences a pointer and stores data to RAM
     */
    bool doesStore;

    /**
     * This instruction may be the result of expanding the `move` pseudo-instruction
     */
    bool maybeIsMove;

    /**
     * This instruction is a pseudo-instruction
     */
    bool isPseudo;

    RabbitizerArchitectureVersion architectureVersion; // TODO: consider removing
} RabbitizerInstrDescriptor;

// TODO: less redundant name
extern const RabbitizerInstrDescriptor RabbitizerInstrDescriptor_Descriptors[];


NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isUnknownType(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isJType(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isIType(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isRType(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isRegimmType(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
RabbitizerInstrSuffix RabbitizerInstrDescriptor_instrSuffix(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isBranch(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isBranchLikely(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isJump(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isJumpWithAddress(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isTrap(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isFloat(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isDouble(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isUnsigned(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_modifiesRt(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_modifiesRd(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_notEmitedByCompilers(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_canBeHi(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_canBeLo(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_doesLink(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_doesDereference(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_doesLoad(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_doesStore(const RabbitizerInstrDescriptor *self);
NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_maybeIsMove(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
bool RabbitizerInstrDescriptor_isPseudo(const RabbitizerInstrDescriptor *self);

NODISCARD NON_NULL(1) PURE
RabbitizerArchitectureVersion RabbitizerInstrDescriptor_getArchitectureVersion(const RabbitizerInstrDescriptor *self);


#ifdef __cplusplus
}
#endif

#endif
