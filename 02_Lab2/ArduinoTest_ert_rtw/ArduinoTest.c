/*
 * File: ArduinoTest.c
 *
 * Code generated for Simulink model 'ArduinoTest'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan  2 19:21:28 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ArduinoTest.h"
#include "ArduinoTest_private.h"

/* Block states (default storage) */
DW_ArduinoTest_T ArduinoTest_DW;

/* Real-time model */
static RT_MODEL_ArduinoTest_T ArduinoTest_M_;
RT_MODEL_ArduinoTest_T *const ArduinoTest_M = &ArduinoTest_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void ArduinoTest_step(void)
{
  real_T tmp;
  uint8_T tmp_0;

  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp = rt_roundd_snf(ArduinoTest_P.Constant_Value);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(13, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output' */
}

/* Model initialize function */
void ArduinoTest_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Output' */
  ArduinoTest_DW.obj.matlabCodegenIsDeleted = false;
  ArduinoTest_DW.obj.isInitialized = 1L;
  digitalIOSetup(13, 1);
  ArduinoTest_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void ArduinoTest_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!ArduinoTest_DW.obj.matlabCodegenIsDeleted) {
    ArduinoTest_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
