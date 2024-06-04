/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

// Definir los tiempos para cada paso del test
#define FT_129_0010_TIME_step0 (UNITIME_AFTER_POWER_ON + 5)

#define FT_UAH_EXP_SERV_129_0010

#ifdef FT_UAH_EXP_SERV_129_0010

// Paso 0: Fijar el valor de las velocidades CVx y CVy
EmuGSS_TCProgram129_1 prog_FT_129_0010_step_1(
    FT_129_0010_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 1, Set CVx and CVy values",
    1.5, 0.12
);

#endif


/*
// Definir los tiempos para cada paso del test
#define FT_129_0020_TIME_step0 (UNITIME_AFTER_POWER_ON + 5)

#define FT_SOLO_EPD_ICU_SERV_129_0020
#ifdef FT_SOLO_EPD_ICU_SERV_129_0020

// Paso 0: Fijar el valor de las constantes Kpx y Kpy
EmuGSS_TCProgram129_2 prog_FT_129_0020_step_0(FT_129_0020_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 0, Set Kpx and Kpy values",
    0.34, 0.05);
#endif
*/



