/* 
 * Copyright 2004-2007 Freescale Semiconductor, Inc. All Rights Reserved. 
 */
 
/* 
 * The code contained herein is licensed under the GNU General Public 
 * License. You may obtain a copy of the GNU General Public License 
 * Version 2 or later at the following locations: 
 * 
 * http://www.opensource.org/licenses/gpl-license.html 
 * http://www.gnu.org/copyleft/gpl.html 
 */

/*!
 * @file   mc13783_test_S_IT_U.h 
 * @brief  Test scenario C header PMIC.
 */

#ifndef MC13783_TEST_S_IT_U_H
#define MC13783_TEST_S_IT_U_H

#ifdef __cplusplus
extern "C" {
#endif

/*==============================================================================
                                         INCLUDE FILES
==============================================================================*/

/*==============================================================================
                                           CONSTANTS
==============================================================================*/

/*==============================================================================
                                       DEFINES AND MACROS
==============================================================================*/

/*==============================================================================
                                             ENUMS
==============================================================================*/

/*==============================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==============================================================================*/

/*==============================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==============================================================================*/

/*==============================================================================
                                     FUNCTION PROTOTYPES
==============================================================================*/
	int VT_mc13783_S_IT_U_setup();
	int VT_mc13783_S_IT_U_cleanup();

	int VT_mc13783_test_S_IT_U(void);

#ifdef __cplusplus
}
#endif
#endif				// MC13783_TEST_S_IT_U_H //
