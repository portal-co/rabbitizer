/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#ifndef RABBITIZER_REGISTER_H
#define RABBITIZER_REGISTER_H
#pragma once

#include <stdint.h>


#define RABBITIZER_DEF_REG(prefix, name, numeric) \
    RABBITIZER_REG_##prefix##_##name

#define RABBITIZER_DEF_REG_NODOLLAR(prefix, name, numeric) \
    RABBITIZER_REG_##prefix##_##name


typedef enum RabbitizerRegister_GprO32 {
    #include "instructions/registers/RabbitizerRegister_GprO32.inc"
} RabbitizerRegister_GprO32;

typedef enum RabbitizerRegister_GprN32 {
    #include "instructions/registers/RabbitizerRegister_GprN32.inc"
} RabbitizerRegister_GprN32;

typedef enum RabbitizerRegister_Cop0 {
    #include "instructions/registers/RabbitizerRegister_Cop0.inc"
} RabbitizerRegister_Cop0;

// Float registers
typedef enum RabbitizerRegister_Cop1O32 {
    #include "instructions/registers/RabbitizerRegister_Cop1O32.inc"
} RabbitizerRegister_Cop1O32;

typedef enum RabbitizerRegister_Cop1N32 {
    #include "instructions/registers/RabbitizerRegister_Cop1N32.inc"
} RabbitizerRegister_Cop1N32;

typedef enum RabbitizerRegister_Cop1N64 {
    #include "instructions/registers/RabbitizerRegister_Cop1N64.inc"
} RabbitizerRegister_Cop1N64;

typedef enum RabbitizerRegister_Cop1Control {
    #include "instructions/registers/RabbitizerRegister_Cop1Control.inc"
} RabbitizerRegister_Cop1Control;

typedef enum RabbitizerRegister_Cop2 {
    #include "instructions/registers/RabbitizerRegister_Cop2.inc"
} RabbitizerRegister_Cop2;

typedef enum RabbitizerRegister_RspGpr {
    #include "instructions/registers/RabbitizerRegister_RspGpr.inc"
} RabbitizerRegister_RspGpr;

typedef enum RabbitizerRegister_RspCop0 {
    #include "instructions/registers/RabbitizerRegister_RspCop0.inc"
} RabbitizerRegister_RspCop0;

typedef enum RabbitizerRegister_RspVector {
    #include "instructions/registers/RabbitizerRegister_RspVector.inc"
} RabbitizerRegister_RspVector;

#undef RABBITIZER_DEF_REG
#undef RABBITIZER_DEF_REG_NODOLLAR

extern const char *RabbitizerRegister_GprO32_Names[][2];
extern const char *RabbitizerRegister_GprN32_Names[][2];
extern const char *RabbitizerRegister_Cop0_Names[][2];
extern const char *RabbitizerRegister_Cop0_Names[][2];
extern const char *RabbitizerRegister_Cop1O32_Names[][2];
extern const char *RabbitizerRegister_Cop1N32_Names[][2];
extern const char *RabbitizerRegister_Cop1N64_Names[][2];
extern const char *RabbitizerRegister_Cop2_Names[][2];
extern const char *RabbitizerRegister_RspGpr_Names[][2];
extern const char *RabbitizerRegister_RspCop0_Names[][2];
extern const char *RabbitizerRegister_RspVector_Names[][2];


const char *RabbitizerRegister_GetNameGpr(uint8_t regValue);
const char *RabbitizerRegister_GetNameCop0(uint8_t regValue);
const char *RabbitizerRegister_GetNameCop1(uint8_t regValue);
const char *RabbitizerRegister_GetNameCop1Control(uint8_t regValue);
const char *RabbitizerRegister_GetNameCop2(uint8_t regValue);
const char *RabbitizerRegister_GetNameRspGpr(uint8_t regValue);
const char *RabbitizerRegister_GetNameRspCop0(uint8_t regValue);
const char *RabbitizerRegister_GetNameRspVector(uint8_t regValue);

#endif
