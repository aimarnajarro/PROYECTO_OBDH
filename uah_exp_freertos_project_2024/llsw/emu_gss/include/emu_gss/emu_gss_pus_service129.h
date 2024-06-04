/*
 * emu_gss_pus_service129.h
 *
 *  Created on: 3 jun 2024
 *      Author: atcsol
 */

#ifndef LLSW_EMU_GSS_INCLUDE_EMU_GSS_EMU_GSS_PUS_SERVICE129_H_
#define LLSW_EMU_GSS_INCLUDE_EMU_GSS_EMU_GSS_PUS_SERVICE129_H_

#include "public/emu_gss_v1.h"
#include "public/icuasw_pus_services_iface_v1.h"
#include <public/emu_uah_exp_kinematics.h>

class EmuGSS_TCProgram129_1 : public EmuGSS_TCProgram {
    float mCVx;
    float mCVy;

    virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor) override;

public:
    EmuGSS_TCProgram129_1(uint32_t uniTime2YK, const char *brief, float mCVx, float mCVy);
};

class EmuGSS_TCProgram129_2 : public EmuGSS_TCProgram {
    float mKpx;
    float mKpy;

    virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor) override;

public:
    EmuGSS_TCProgram129_2(uint32_t uniTime2YK, const char *brief, float mKpx, float mKpy);
};

#endif /* LLSW_EMU_GSS_INCLUDE_EMU_GSS_EMU_GSS_PUS_SERVICE129_H_ */
