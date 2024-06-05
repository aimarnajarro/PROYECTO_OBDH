/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

/*
// Definir los tiempos para cada paso del test
#define FT_129_0010_TIME_step0 (UNITIME_AFTER_POWER_ON + 5)
#define FT_129_0010_TIME_step1 (UNITIME_AFTER_POWER_ON + 15)
#define FT_129_0010_TIME_step2 (UNITIME_AFTER_POWER_ON + 50)


#define FT_UAH_EXP_SERV_129_0010

#ifdef FT_UAH_EXP_SERV_129_0010

// Paso 0: Fijar el valor de las velocidades CVx y CVy
EmuGSS_TCProgram129_1 prog_FT_129_0010_step_0(
    FT_129_0010_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 0, Set CVx and CVy values",
    0.34, 0.12
);

// Paso 1: Fijar el valor de las velocidades CVx y CVy fuera de rango para que salte la 1.8
EmuGSS_TCProgram129_1 prog_FT_129_0010_step_1(
    FT_129_0010_TIME_step1,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 1, Set CVx value out of range",
    3.54, 0.12
);

EmuGSS_TCProgram128_1 prog_FT_129_0010_step_2(
    FT_129_0010_TIME_step2,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 2, Reboot when finished");

#endif
*/


#define FT_SOLO_EPD_ICU_SERV_129_0020
#ifdef FT_SOLO_EPD_ICU_SERV_129_0020

// Definir los tiempos para cada paso del test
#define FT_129_0020_TIME_step0 (UNITIME_AFTER_POWER_ON + 1)
#define FT_129_0020_TIME_step1 (UNITIME_AFTER_POWER_ON + 5)
#define FT_129_0020_TIME_step2 (UNITIME_AFTER_POWER_ON + 10)
#define FT_129_0020_TIME_step3 (UNITIME_AFTER_POWER_ON + 50)

// Paso 0: Fijar el valor de las velocidades CVx y CVy para que haya un DV
EmuGSS_TCProgram129_1 prog_FT_129_0020_step_0(
    FT_129_0020_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 0, Set CVx and CVy values",
    0.34, 0.12
	);

// Paso 1: Fijar el valor de las constantes Kpx y Kpy
EmuGSS_TCProgram129_2 prog_FT_129_0020_step_1(FT_129_0020_TIME_step1,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 1, Set Kpx and Kpy values",
    0.45, 0.45
	);

   // Paso 1: Fijar el valor de las velocidades kVy fuera de rango para que salte la 1.8
	EmuGSS_TCProgram129_2 prog_FT_129_0020_step_2(
    FT_129_0020_TIME_step2,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 2, Set Kpy value out of range",
    0.34, 8.12
	);

EmuGSS_TCProgram128_1 prog_FT_129_0020_step_3(
    FT_129_0020_TIME_step3,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 3, Reboot when finished");

#endif




