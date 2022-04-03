/*
 * File: Task2_CalculatorSubsystem.c
 *
 * Code generated for Simulink model 'Task2_CalculatorSubsystem'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 18:22:27 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task2_CalculatorSubsystem.h"
#include "Task2_CalculatorSubsystem_private.h"

/* Block signals (default storage) */
B_Task2_CalculatorSubsystem_T Task2_CalculatorSubsystem_B;

/* External inputs (root inport signals with default storage) */
ExtU_Task2_CalculatorSubsyste_T Task2_CalculatorSubsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task2_CalculatorSubsyste_T Task2_CalculatorSubsystem_Y;

/* Real-time model */
static RT_MODEL_Task2_CalculatorSubs_T Task2_CalculatorSubsystem_M_;
RT_MODEL_Task2_CalculatorSubs_T *const Task2_CalculatorSubsystem_M =
  &Task2_CalculatorSubsystem_M_;

/* Model step function */
void Task2_CalculatorSubsystem_step(void)
{
  /* Outport: '<Root>/Addition' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Sum: '<S1>/Add'
   */
  Task2_CalculatorSubsystem_Y.Addition = Task2_CalculatorSubsystem_U.Operand1 +
    Task2_CalculatorSubsystem_U.Operand2;

  /* Outport: '<Root>/Subtraction' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Sum: '<S1>/Subtract'
   */
  Task2_CalculatorSubsystem_Y.Subtraction = Task2_CalculatorSubsystem_U.Operand1
    - Task2_CalculatorSubsystem_U.Operand2;

  /* Outport: '<Root>/Multiplication' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Product: '<S1>/Product'
   */
  Task2_CalculatorSubsystem_Y.Multiplication =
    Task2_CalculatorSubsystem_U.Operand1 * Task2_CalculatorSubsystem_U.Operand2;

  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/Operand2'
   *  Inport: '<S2>/In1'
   */
  if (Task2_CalculatorSubsystem_U.Operand2 != 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    Task2_CalculatorSubsystem_B.In1_m = Task2_CalculatorSubsystem_U.Operand2;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/Division Error' incorporates:
     *  Constant: '<S1>/Inf'
     *  Inport: '<S3>/In1'
     */
    Task2_CalculatorSubsystem_Y.DivisionError =
      Task2_CalculatorSubsystem_P.Inf_Value;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  }

  /* End of If: '<S1>/If' */

  /* Outport: '<Root>/Division' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Product: '<S1>/Divide'
   */
  Task2_CalculatorSubsystem_Y.Division = Task2_CalculatorSubsystem_U.Operand1 /
    Task2_CalculatorSubsystem_B.In1_m;
}

/* Model initialize function */
void Task2_CalculatorSubsystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  Task2_CalculatorSubsystem_P.Inf_Value = rtInf;

  /* initialize error status */
  rtmSetErrorStatus(Task2_CalculatorSubsystem_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Task2_CalculatorSubsystem_B), 0,
                sizeof(B_Task2_CalculatorSubsystem_T));

  /* external inputs */
  (void)memset(&Task2_CalculatorSubsystem_U, 0, sizeof
               (ExtU_Task2_CalculatorSubsyste_T));

  /* external outputs */
  (void) memset((void *)&Task2_CalculatorSubsystem_Y, 0,
                sizeof(ExtY_Task2_CalculatorSubsyste_T));
}

/* Model terminate function */
void Task2_CalculatorSubsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
