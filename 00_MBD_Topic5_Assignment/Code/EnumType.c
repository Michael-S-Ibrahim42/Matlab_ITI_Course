/*
 * File: EnumType.c
 *
 * Code generated for Simulink model 'EnumType'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 23:21:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EnumType.h"
#include "EnumType_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_EnumType_T EnumType_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_EnumType_T EnumType_Y;

/* Real-time model */
static RT_MODEL_EnumType_T EnumType_M_;
RT_MODEL_EnumType_T *const EnumType_M = &EnumType_M_;

/* Model step function */
void EnumType_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Constant: '<S1>/Constant'
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  Inport: '<Root>/Input'
   */
  EnumType_Y.Output[0] = (Enum)EnumType_U.Input;
  EnumType_Y.Output[1] = EnumType_P.EnumeratedConstant_Value;
}

/* Model initialize function */
void EnumType_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(EnumType_M, (NULL));

  /* external inputs */
  EnumType_U.Input = 0L;

  /* external outputs */
  EnumType_Y.Output[0] = Zero;
  EnumType_Y.Output[1] = Zero;
}

/* Model terminate function */
void EnumType_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
