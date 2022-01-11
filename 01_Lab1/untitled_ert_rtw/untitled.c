/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan  9 18:46:52 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  codertarget_arduinobase_inter_T *obj;
  real_T u0;

  /* MATLABSystem: '<Root>/PWM1' */
  obj = &untitled_DW.obj;
  obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(5UL);

  /* Gain: '<S1>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant'
   */
  u0 = untitled_P.SliderGain_gain * untitled_P.Constant_Value;

  /* MATLABSystem: '<Root>/PWM1' */
  if (!(u0 < 255.0)) {
    u0 = 255.0;
  }

  if (!(u0 > 0.0)) {
    u0 = 0.0;
  }

  MW_PWM_SetDutyCycle(untitled_DW.obj.PWMDriverObj.MW_PWM_HANDLE, u0);
}

/* Model initialize function */
void untitled_initialize(void)
{
  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/PWM1' */
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    untitled_DW.obj.isInitialized = 0L;
    untitled_DW.obj.matlabCodegenIsDeleted = false;
    obj = &untitled_DW.obj;
    untitled_DW.obj.isSetupComplete = false;
    untitled_DW.obj.isInitialized = 1L;
    obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(5UL, 0.0, 0.0);
    untitled_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  codertarget_arduinobase_inter_T *obj;

  /* Terminate for MATLABSystem: '<Root>/PWM1' */
  obj = &untitled_DW.obj;
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    if ((untitled_DW.obj.isInitialized == 1L) && untitled_DW.obj.isSetupComplete)
    {
      obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(5UL);
      MW_PWM_SetDutyCycle(untitled_DW.obj.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(5UL);
      MW_PWM_Close(untitled_DW.obj.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
