/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#ifndef RABBITIZER_REGISTER_TYPE_H
#define RABBITIZER_REGISTER_TYPE_H
#pragma once


// TODO: rename to OperandType
typedef enum RabbitizerRegisterType {
    RABBITIZER_REGISTER_TYPE_INVALID,
    RABBITIZER_REGISTER_TYPE_rs,
    RABBITIZER_REGISTER_TYPE_rt,
    RABBITIZER_REGISTER_TYPE_rd,
    RABBITIZER_REGISTER_TYPE_cop0d,
    RABBITIZER_REGISTER_TYPE_fs,
    RABBITIZER_REGISTER_TYPE_ft,
    RABBITIZER_REGISTER_TYPE_fd,
    RABBITIZER_REGISTER_TYPE_cop1cs, // Coprocessor 1 control fs
    RABBITIZER_REGISTER_TYPE_cop2t,
    RABBITIZER_REGISTER_TYPE_sa,
    RABBITIZER_REGISTER_TYPE_op,
    RABBITIZER_REGISTER_TYPE_code,
    RABBITIZER_REGISTER_TYPE_LABEL,
    RABBITIZER_REGISTER_TYPE_IMM,
    RABBITIZER_REGISTER_TYPE_IMM_base,

    // rsp
    RABBITIZER_REGISTER_TYPE_RSP_rs,
    RABBITIZER_REGISTER_TYPE_RSP_rt,
    RABBITIZER_REGISTER_TYPE_RSP_rd,
    RABBITIZER_REGISTER_TYPE_RSP_cop0d,
    RABBITIZER_REGISTER_TYPE_RSP_vs,
    RABBITIZER_REGISTER_TYPE_RSP_vt,
    RABBITIZER_REGISTER_TYPE_RSP_vd,
    RABBITIZER_REGISTER_TYPE_RSP_vt_elementhigh,
    RABBITIZER_REGISTER_TYPE_RSP_vt_elementlow,
    RABBITIZER_REGISTER_TYPE_RSP_vd_vs,
    RABBITIZER_REGISTER_TYPE_RSP_vd_index,
    RABBITIZER_REGISTER_TYPE_RSP_offset_rs,
    // rsp

    RABBITIZER_REGISTER_TYPE_MAX,
} RabbitizerRegisterType;

#endif
