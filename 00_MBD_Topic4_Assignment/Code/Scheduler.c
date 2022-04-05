/*
 * File: Scheduler.c
 *
 * Code generated for Simulink model 'Scheduler'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 20:56:28 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Scheduler.h"
#include "Scheduler_private.h"

/* Block states (default storage) */
DW_Scheduler_T Scheduler_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Scheduler_T Scheduler_Y;

/* Real-time model */
static RT_MODEL_Scheduler_T Scheduler_M_;
RT_MODEL_Scheduler_T *const Scheduler_M = &Scheduler_M_;

/* Model step function */
void Scheduler_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Scheduler_DW.temporalCounter_i1 < 1U) {
    Scheduler_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Scheduler_DW.is_active_c3_Scheduler == 0U) {
    /* Entry: Chart */
    Scheduler_DW.is_active_c3_Scheduler = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    Scheduler_DW.temporalCounter_i1 = 0U;

    /* During 'CallFunction': '<S1>:1' */
  } else if (Scheduler_DW.temporalCounter_i1 >= 1U) {
    /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
    /* Outport: '<Root>/Output' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<S2>/In1'
     */
    /* Transition: '<S1>:3' */
    /* Event: '<S1>:4' */
    Scheduler_Y.Output = Scheduler_P.Constant_Value;

    /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
    Scheduler_DW.temporalCounter_i1 = 0U;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Scheduler_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Scheduler_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Scheduler_DW, 0,
                sizeof(DW_Scheduler_T));

  /* external outputs */
  Scheduler_Y.Output = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Scheduler_DW.temporalCounter_i1 = 0U;
  Scheduler_DW.is_active_c3_Scheduler = 0U;
}

/* Model terminate function */
void Scheduler_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
