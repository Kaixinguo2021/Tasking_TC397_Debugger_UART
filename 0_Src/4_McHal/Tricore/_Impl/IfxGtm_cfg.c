/**
 * \file IfxGtm_cfg.c
 * \brief GTM on-chip implementation data
 *
 * \version iLLD_1_0_1_12_0
 * \copyright Copyright (c) 2020 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxGtm_cfg.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

IFX_CONST IfxGtm_Cdtm        IfxGtm_dtmAtom_map[IFXGTM_NUM_ATOM_OBJECTS] = {
    IfxGtm_Cdtm_0,              /* ATOM0 */
    IfxGtm_Cdtm_1,              /* ATOM1 */
    IfxGtm_Cdtm_2,              /* ATOM2 */
    IfxGtm_Cdtm_3,              /* ATOM3 */
    IfxGtm_Cdtm_4,              /* ATOM4 */
    IfxGtm_Cdtm_5,              /* ATOM5 */
    IfxGtm_Cdtm_none,           /* ATOM6 */
    IfxGtm_Cdtm_none,           /* ATOM7 */
    IfxGtm_Cdtm_none,           /* ATOM8 */
};

IFX_CONST IfxGtm_Cdtm        IfxGtm_dtmTom_map[IFXGTM_NUM_TOM_OBJECTS] = {
    IfxGtm_Cdtm_0,              /* TOM0 */
    IfxGtm_Cdtm_1,              /* TOM1 */
    IfxGtm_Cdtm_2,              /* TOM2 */
    IfxGtm_Cdtm_3,              /* TOM3 */
    IfxGtm_Cdtm_none,           /* TOM4 */
};

IFX_CONST IfxModule_IndexMap IfxGtm_spe_indexMap[IFXGTM_NUM_SPE_OBJECTS] = {
    {&(MODULE_GTM.SPE[0]), (uint32)IfxGtm_Spe_0},
    {&(MODULE_GTM.SPE[1]), (uint32)IfxGtm_Spe_1},
    {&(MODULE_GTM.SPE[2]), (uint32)IfxGtm_Spe_2},
    {&(MODULE_GTM.SPE[3]), (uint32)IfxGtm_Spe_3},
    {&(MODULE_GTM.SPE[4]), (uint32)IfxGtm_Spe_4},
    {&(MODULE_GTM.SPE[5]), (uint32)IfxGtm_Spe_5}
};
