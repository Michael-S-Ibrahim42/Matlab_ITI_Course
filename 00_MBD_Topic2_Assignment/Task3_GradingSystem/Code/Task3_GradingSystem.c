/*
 * File: Task3_GradingSystem.c
 *
 * Code generated for Simulink model 'Task3_GradingSystem'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 18:44:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task3_GradingSystem.h"
#include "Task3_GradingSystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task3_GradingSystem_T Task3_GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task3_GradingSystem_T Task3_GradingSystem_Y;

/* Real-time model */
static RT_MODEL_Task3_GradingSystem_T Task3_GradingSystem_M_;
RT_MODEL_Task3_GradingSystem_T *const Task3_GradingSystem_M =
  &Task3_GradingSystem_M_;

/* Model step function */
void Task3_GradingSystem_step(void)
{
  /* If: '<Root>/If1' incorporates:
   *  Inport: '<Root>/Grade'
   */
  if (Task3_GradingSystem_U.Grade >= 85.0) {
    /* ASCIIToString: '<Root>/ASCII to String' incorporates:
     *  Constant: '<S3>/Constant'
     *  Outport: '<Root>/GradeLetter'
     */
    Task3_GradingSystem_Y.GradeLetter[0] = (int8_T)
      Task3_GradingSystem_P.Constant_Value;
  } else if ((Task3_GradingSystem_U.Grade >= 75.0) &&
             (Task3_GradingSystem_U.Grade < 85.0)) {
    /* ASCIIToString: '<Root>/ASCII to String' incorporates:
     *  Constant: '<S1>/Constant'
     *  Outport: '<Root>/GradeLetter'
     */
    Task3_GradingSystem_Y.GradeLetter[0] = (int8_T)
      Task3_GradingSystem_P.Constant_Value_a;
  } else {
    /* ASCIIToString: '<Root>/ASCII to String' incorporates:
     *  Constant: '<S2>/Constant'
     *  Outport: '<Root>/GradeLetter'
     */
    Task3_GradingSystem_Y.GradeLetter[0] = (int8_T)
      Task3_GradingSystem_P.Constant_Value_g;
  }

  /* End of If: '<Root>/If1' */

  /* ASCIIToString: '<Root>/ASCII to String' incorporates:
   *  Outport: '<Root>/GradeLetter'
   */
  Task3_GradingSystem_Y.GradeLetter[1] = '\x00';
}

/* Model initialize function */
void Task3_GradingSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task3_GradingSystem_M, (NULL));

  /* external inputs */
  Task3_GradingSystem_U.Grade = 0.0;

  /* external outputs */
  (void) memset(&Task3_GradingSystem_Y.GradeLetter[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void Task3_GradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
