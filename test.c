/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#include "instructions/RabbitizerInstr.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    uint32_t word = 0x8D4A7E18;
    RabbitizerInstr instr;
    char *buffer;
    int extraLJust = 10;

    RabbitizerInstr_Init(&instr, word);

    RabbitizerInstr_ProcessUniqueId(&instr);

    buffer = malloc(RabbitizerInstr_GetSizeForBuffer(&instr, 0, extraLJust) + 1);
    assert(buffer != NULL);

    RabbitizerInstr_Disassemble(&instr, buffer, NULL, 0, extraLJust);

    printf("%08X: %s\n", word, buffer);

    free(buffer);
    RabbitizerInstr_Destroy(&instr);

    return 0;
}
