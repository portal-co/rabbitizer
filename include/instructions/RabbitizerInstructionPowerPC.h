/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#ifndef RABBITIZER_INSTRUCTION_POWERPC_H
#define RABBITIZER_INSTRUCTION_POWERPC_H
#pragma once

#include "RabbitizerInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif


NON_NULL(1)
void RabbitizerInstructionPowerPC_init(RabbitizerInstruction *self, uint32_t word, uint32_t vram);
NON_NULL(1)
void RabbitizerInstructionPowerPC_destroy(RabbitizerInstruction *self);

NON_NULL(1)
void RabbitizerInstructionPowerPC_processUniqueId_Normal(RabbitizerInstruction *self);

NON_NULL(1)
void RabbitizerInstructionPowerPC_processUniqueId(RabbitizerInstruction *self);


#ifdef __cplusplus
}
#endif

#endif
