/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

/* bits 26..31 (OPCODE) */

RABBITIZER_DEF_INSTR_ID(powerpc, 0x03, twi,     .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0x07, mulli,   .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0x08, subfic,  .operands={0})


RABBITIZER_DEF_INSTR_ID(powerpc, 0b001010, cmpli, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b001011, cmpi, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b001100, addic, .operands={0})
RABBITIZER_DEF_INSTR_ID_ALTNAME(powerpc, 0b001101, addic_, addic., .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b001110, addi, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b001111, addis, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b010000, bcx, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b010001, sc, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b010010, bx, .operands={0})

RABBITIZER_DEF_INSTR_ID(powerpc, 0b010100, rlwimix, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b010101, rlwinmx, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b010111, rlwnmx , .operands={0})


RABBITIZER_DEF_INSTR_ID(powerpc, 0b011000, ori  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b011001, oris , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b011010, xori , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b011011, xoris , .operands={0})
RABBITIZER_DEF_INSTR_ID_ALTNAME(powerpc, 0b011100, andi_, andi., .operands={0})
RABBITIZER_DEF_INSTR_ID_ALTNAME(powerpc, 0b011101, andis_, andis., .operands={0})


RABBITIZER_DEF_INSTR_ID(powerpc, 0b100000, lwz  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b100001, lwzu  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b100010, lbz  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b100011, lbzu  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b100100, stw  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b100101, stwu  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b100110, stb  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b100111, stbu  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b101000, lhz  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b101001, lhzu  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b101010, lha  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b101011, lhau  , .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b101100, sth  , .operands={0})

RABBITIZER_DEF_INSTR_ID(powerpc, 0b101101, sthu, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b101110, lmw, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b101111, stmw, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110000, lfs, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110001, lfsu, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110010, lfd, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110011, lfdu, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110100, stfs, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110101, stfsu, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110110, stfd, .operands={0})
RABBITIZER_DEF_INSTR_ID(powerpc, 0b110111, stfdu, .operands={0})

