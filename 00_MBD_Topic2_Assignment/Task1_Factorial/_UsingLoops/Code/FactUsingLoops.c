/*
 * File: FactUsingLoops.c
 *
 * Code generated for Simulink model 'FactUsingLoops'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 16:51:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactUsingLoops.h"
#include "FactUsingLoops_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_FactUsingLoops_T FactUsingLoops_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactUsingLoops_T FactUsingLoops_Y;

/* Real-time model */
static RT_MODEL_FactUsingLoops_T FactUsingLoops_M_;
RT_MODEL_FactUsingLoops_T *const FactUsingLoops_M = &FactUsingLoops_M_;

/* Model step function */
void FactUsingLoops_step(void)
{
  uint32_T Delay1_DSTATE;
  uint32_T s1_iter;
  uint32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for Delay: '<S1>/Delay1' */
  Delay1_DSTATE = FactUsingLoops_P.Delay1_InitialCondition;

  /* Inport: '<Root>/Number' */
  tmp = FactUsingLoops_U.Number;
  if (FactUsingLoops_U.Number > 2147483646UL) {
    tmp = 2147483646UL;
  }

  /* End of Inport: '<Root>/Number' */
  for (s1_iter = 1UL; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Factorial' incorporates:
     *  Delay: '<S1>/Delay1'
     *  Product: '<S1>/Product'
     */
    FactUsingLoops_Y.Factorial = s1_iter * Delay1_DSTATE;

    /* Update for Delay: '<S1>/Delay1' incorporates:
     *  Outport: '<Root>/Factorial'
     */
    Delay1_DSTATE = FactUsingLoops_Y.Factorial;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void FactUsingLoops_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactUsingLoops_M, (NULL));

  /* external inputs */
  FactUsingLoops_U.Number = 0UL;

  /* external outputs */
  FactUsingLoops_Y.Factorial = 0U;
}

/* Model terminate function */
void FactUsingLoops_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
