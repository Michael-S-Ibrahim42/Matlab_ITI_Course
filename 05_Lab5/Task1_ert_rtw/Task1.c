/*
 * File: Task1.c
 *
 * Code generated for Simulink model 'Task1'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb 10 18:01:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task1.h"
#include "Task1_private.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task1_T Task1_Y;

/* Real-time model */
static RT_MODEL_Task1_T Task1_M_;
RT_MODEL_Task1_T *const Task1_M = &Task1_M_;

/* Model step function */
void Task1_step(void)
{
  real_T tmp;

  /* SwitchCase: '<Root>/Switch Case' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (Task1_P.Constant_Value_k < 0.0) {
    tmp = ceil(Task1_P.Constant_Value_k);
  } else {
    tmp = floor(Task1_P.Constant_Value_k);
  }

  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  switch (tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp) {
   case 1L:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S1>/Constant'
     */
    Task1_Y.Out1 = Task1_P.Constant_Value;

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem' */
    break;

   case 2L:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S2>/Constant'
     */
    Task1_Y.Out1 = Task1_P.Constant_Value_f;

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem1' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Task1_Y.Out1 = Task1_P.Constant_Value_c;

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem2' */
    break;
  }

  /* End of SwitchCase: '<Root>/Switch Case' */
}

/* Model initialize function */
void Task1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
}

/* Model terminate function */
void Task1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
