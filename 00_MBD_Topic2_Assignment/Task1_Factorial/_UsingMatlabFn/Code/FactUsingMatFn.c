/*
 * File: FactUsingMatFn.c
 *
 * Code generated for Simulink model 'FactUsingMatFn'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 17:22:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactUsingMatFn.h"
#include "FactUsingMatFn_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_FactUsingMatFn_T FactUsingMatFn_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactUsingMatFn_T FactUsingMatFn_Y;

/* Real-time model */
static RT_MODEL_FactUsingMatFn_T FactUsingMatFn_M_;
RT_MODEL_FactUsingMatFn_T *const FactUsingMatFn_M = &FactUsingMatFn_M_;

/* Model step function */
void FactUsingMatFn_step(void)
{
  real_T Fact;
  int16_T i;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Number'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:2' Fact = 1; */
  Fact = 1.0;

  /* '<S1>:1:3' for i = 1:Number */
  for (i = 0; i < (int16_T)FactUsingMatFn_U.Number; i++) {
    /* '<S1>:1:4' Fact = Fact * i; */
    Fact *= (real_T)i + 1.0;
  }

  /* Outport: '<Root>/Factorial' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  FactUsingMatFn_Y.Factorial = Fact;
}

/* Model initialize function */
void FactUsingMatFn_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactUsingMatFn_M, (NULL));

  /* external inputs */
  FactUsingMatFn_U.Number = 0.0;

  /* external outputs */
  FactUsingMatFn_Y.Factorial = 0.0;
}

/* Model terminate function */
void FactUsingMatFn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
