/*
 * File: Task1_ScientificCalculator.c
 *
 * Code generated for Simulink model 'Task1_ScientificCalculator'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 15:04:46 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task1_ScientificCalculator.h"
#include "Task1_ScientificCalculator_private.h"

/* Block signals (default storage) */
B_Task1_ScientificCalculator_T Task1_ScientificCalculator_B;

/* External inputs (root inport signals with default storage) */
ExtU_Task1_ScientificCalculat_T Task1_ScientificCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task1_ScientificCalculat_T Task1_ScientificCalculator_Y;

/* Real-time model */
static RT_MODEL_Task1_ScientificCalc_T Task1_ScientificCalculator_M_;
RT_MODEL_Task1_ScientificCalc_T *const Task1_ScientificCalculator_M =
  &Task1_ScientificCalculator_M_;

/* Model step function */
void Task1_ScientificCalculator_step(void)
{
  /* Outport: '<Root>/Addition' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Sum: '<Root>/Add'
   */
  Task1_ScientificCalculator_Y.Addition = Task1_ScientificCalculator_U.Operand1
    + Task1_ScientificCalculator_U.Operand2;

  /* Outport: '<Root>/Subtraction' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Sum: '<Root>/Subtract'
   */
  Task1_ScientificCalculator_Y.Subtraction =
    Task1_ScientificCalculator_U.Operand1 -
    Task1_ScientificCalculator_U.Operand2;

  /* Outport: '<Root>/Multiplication' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Product: '<Root>/Product'
   */
  Task1_ScientificCalculator_Y.Multiplication =
    Task1_ScientificCalculator_U.Operand1 *
    Task1_ScientificCalculator_U.Operand2;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Operand2'
   *  Inport: '<S1>/In1'
   */
  if (Task1_ScientificCalculator_U.Operand2 != 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    Task1_ScientificCalculator_B.In1_m = Task1_ScientificCalculator_U.Operand2;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Division Error' incorporates:
     *  Constant: '<Root>/Inf'
     *  Inport: '<S2>/In1'
     */
    Task1_ScientificCalculator_Y.DivisionError =
      Task1_ScientificCalculator_P.Inf_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Division' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Product: '<Root>/Divide'
   */
  Task1_ScientificCalculator_Y.Division = Task1_ScientificCalculator_U.Operand1 /
    Task1_ScientificCalculator_B.In1_m;
}

/* Model initialize function */
void Task1_ScientificCalculator_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  Task1_ScientificCalculator_P.Inf_Value = rtInf;

  /* initialize error status */
  rtmSetErrorStatus(Task1_ScientificCalculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Task1_ScientificCalculator_B), 0,
                sizeof(B_Task1_ScientificCalculator_T));

  /* external inputs */
  (void)memset(&Task1_ScientificCalculator_U, 0, sizeof
               (ExtU_Task1_ScientificCalculat_T));

  /* external outputs */
  (void) memset((void *)&Task1_ScientificCalculator_Y, 0,
                sizeof(ExtY_Task1_ScientificCalculat_T));
}

/* Model terminate function */
void Task1_ScientificCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
