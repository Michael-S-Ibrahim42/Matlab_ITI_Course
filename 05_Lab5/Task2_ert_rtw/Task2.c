/*
 * File: Task2.c
 *
 * Code generated for Simulink model 'Task2'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb 10 20:08:00 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task2.h"
#include "Task2_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task2_T Task2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task2_T Task2_Y;

/* Real-time model */
static RT_MODEL_Task2_T Task2_M_;
RT_MODEL_Task2_T *const Task2_M = &Task2_M_;

/* Model step function */
void Task2_step(void)
{
  real_T UnitDelay_DSTATE;
  int32_T s1_iter;
  int32_T tmp;
  int16_T i;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = Task2_P.UnitDelay_InitialCondition;

  /* Constant: '<Root>/Constant' */
  if (Task2_P.Constant_Value_p < 2.147483648E+9) {
    if (Task2_P.Constant_Value_p >= -2.147483648E+9) {
      tmp = (int32_T)Task2_P.Constant_Value_p;
    } else {
      tmp = MIN_int32_T;
    }
  } else {
    tmp = MAX_int32_T;
  }

  /* End of Constant: '<Root>/Constant' */
  if (tmp < 0L) {
    tmp = 0L;
  }

  for (s1_iter = 0L; (uint32_T)s1_iter < (uint32_T)tmp; s1_iter++) {
    /* Outport: '<Root>/Out3' incorporates:
     *  Constant: '<Root>/Constant1'
     *  MultiPortSwitch: '<S1>/Index Vector'
     *  Sum: '<S1>/Add'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Task2_Y.Out3 = Task2_P.Constant1_Value_g[s1_iter] + UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out3'
     */
    UnitDelay_DSTATE = Task2_Y.Out3;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/In2'
   */
  Task2_Y.Out2 = 1.0;
  for (i = 0; i < (int16_T)Task2_U.In2; i++) {
    Task2_Y.Out2 *= (real_T)i + 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/In1'
   */
  if ((Task2_U.In1 > 0.0) && (Task2_U.In1 < 256.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S2>/Constant'
     *  Sum: '<S2>/Add'
     */
    Task2_Y.Out1 = Task2_U.In1 + Task2_P.Constant_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     *  Sum: '<S3>/Add'
     */
    Task2_Y.Out1 = Task2_P.Constant_Value_l - Task2_P.Constant1_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void Task2_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Task2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
