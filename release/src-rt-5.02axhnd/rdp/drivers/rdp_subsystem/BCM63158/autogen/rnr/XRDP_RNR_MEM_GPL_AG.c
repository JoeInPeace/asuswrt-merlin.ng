/*
   Copyright (c) 2015 Broadcom
   All Rights Reserved

    <:label-BRCM:2015:DUAL/GPL:standard

    Unless you and Broadcom execute a separate written software license
    agreement governing use of this software, this software is licensed
    to you under the terms of the GNU General Public License version 2
    (the "GPL"), available at http://www.broadcom.com/licenses/GPLv2.php,
    with the following added to such license:

       As a special exception, the copyright holders of this software give
       you permission to link this software with independent modules, and
       to copy and distribute the resulting executable under terms of your
       choice, provided that you also meet, for each linked independent
       module, the terms and conditions of the license of that module.
       An independent module is a module which is not derived from this
       software.  The special exception does not apply to any modifications
       of the software.

    Not withstanding the above, under no circumstances may you combine
    this software in any way with any other Broadcom software provided
    under a license other than the GPL, without Broadcom's express prior
    written consent.

:>
*/

#include "ru.h"

/******************************************************************************
 * Register: RNR_MEM_HIGH
 ******************************************************************************/
const ru_reg_rec RNR_MEM_HIGH_REG = 
{
    "HIGH",
#if RU_INCLUDE_DESC
    "DATA_MEMORY_ENTRY Register",
    "Data memory entry",
#endif
    RNR_MEM_HIGH_REG_OFFSET,
    RNR_MEM_HIGH_REG_RAM_CNT,
    8,
    303,
};

/******************************************************************************
 * Register: RNR_MEM_LOW
 ******************************************************************************/
const ru_reg_rec RNR_MEM_LOW_REG = 
{
    "LOW",
#if RU_INCLUDE_DESC
    "DATA_MEMORY_ENTRY Register",
    "Data memory entry",
#endif
    RNR_MEM_LOW_REG_OFFSET,
    RNR_MEM_LOW_REG_RAM_CNT,
    8,
    304,
};

/******************************************************************************
 * Block: RNR_MEM
 ******************************************************************************/
static const ru_reg_rec *RNR_MEM_REGS[] =
{
    &RNR_MEM_HIGH_REG,
    &RNR_MEM_LOW_REG,
};

unsigned long RNR_MEM_ADDRS[] =
{
    0x82c00000,
    0x82c20000,
    0x82c40000,
    0x82c60000,
    0x82c80000,
    0x82ca0000,
};

const ru_block_rec RNR_MEM_BLOCK = 
{
    "RNR_MEM",
    RNR_MEM_ADDRS,
    6,
    2,
    RNR_MEM_REGS
};

/* End of file XRDP_RNR_MEM.c */
