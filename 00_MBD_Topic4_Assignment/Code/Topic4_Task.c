/*
 * File: Topic4_Task.c
 *
 * Code generated for Simulink model 'Topic4_Task'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 21:24:00 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Topic4_Task.h"
#include "Topic4_Task_private.h"

/* Block states (default storage) */
DW_Topic4_Task_T Topic4_Task_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Topic4_Task_T Topic4_Task_Y;

/* Real-time model */
static RT_MODEL_Topic4_Task_T Topic4_Task_M_;
RT_MODEL_Topic4_Task_T *const Topic4_Task_M = &Topic4_Task_M_;

/* Model step function */
void Topic4_Task_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Topic4_Task_DW.temporalCounter_i1 < 1U) {
    Topic4_Task_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Topic4_Task_DW.is_active_c3_Topic4_Task == 0U) {
    /* Entry: Chart */
    Topic4_Task_DW.is_active_c3_Topic4_Task = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    Topic4_Task_DW.temporalCounter_i1 = 0U;

    /* During 'CallFunction': '<S1>:1' */
  } else if (Topic4_Task_DW.temporalCounter_i1 >= 1U) {
    /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
    /* Outport: '<Root>/Output' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<S2>/In1'
     */
    /* Transition: '<S1>:3' */
    /* Event: '<S1>:4' */
    Topic4_Task_Y.Output = Topic4_Task_P.Constant_Value;

    /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
    Topic4_Task_DW.temporalCounter_i1 = 0U;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Topic4_Task_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Topic4_Task_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Topic4_Task_DW, 0,
                sizeof(DW_Topic4_Task_T));

  /* external outputs */
  Topic4_Task_Y.Output = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Topic4_Task_DW.temporalCounter_i1 = 0U;
  Topic4_Task_DW.is_active_c3_Topic4_Task = 0U;
}

/* Model terminate function */
void Topic4_Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
