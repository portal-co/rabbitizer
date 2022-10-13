/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#include "instructions/RabbitizerInstructionPowerPC.h"


void RabbitizerInstructionPowerPC_init(RabbitizerInstruction *self, uint32_t word, uint32_t vram) {
    RabbitizerInstruction_init(self, word, vram);

    self->uniqueId = RABBITIZER_INSTR_ID_powerpc_INVALID;
    self->descriptor = &RabbitizerInstrDescriptor_Descriptors[self->uniqueId];

    self->category = RABBITIZER_INSTRCAT_POWERPC;
}

void RabbitizerInstructionPowerPC_destroy(RabbitizerInstruction *self) {
    RabbitizerInstruction_destroy(self);
}
