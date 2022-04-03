/*
 * File: Task2_ProgrammingCalculator.c
 *
 * Code generated for Simulink model 'Task2_ProgrammingCalculator'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 15:44:51 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task2_ProgrammingCalculator.h"
#include "Task2_ProgrammingCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task2_ProgrammingCalcula_T Task2_ProgrammingCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task2_ProgrammingCalcula_T Task2_ProgrammingCalculator_Y;

/* Real-time model */
static RT_MODEL_Task2_ProgrammingCal_T Task2_ProgrammingCalculator_M_;
RT_MODEL_Task2_ProgrammingCal_T *const Task2_ProgrammingCalculator_M =
  &Task2_ProgrammingCalculator_M_;

/* Model step function */
void Task2_ProgrammingCalculator_step(void)
{
  /* Outport: '<Root>/AND' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Logic: '<Root>/Logical Operator'
   */
  Task2_ProgrammingCalculator_Y.AND = (Task2_ProgrammingCalculator_U.Operand1 &&
    Task2_ProgrammingCalculator_U.Operand2);

  /* Outport: '<Root>/OR' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Logic: '<Root>/Logical Operator1'
   */
  Task2_ProgrammingCalculator_Y.OR = (Task2_ProgrammingCalculator_U.Operand1 ||
    Task2_ProgrammingCalculator_U.Operand2);

  /* Outport: '<Root>/XOR' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Logic: '<Root>/Logical Operator2'
   */
  Task2_ProgrammingCalculator_Y.XOR = Task2_ProgrammingCalculator_U.Operand1 ^
    Task2_ProgrammingCalculator_U.Operand2;

  /* Outport: '<Root>/XNOR' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Logic: '<Root>/Logical Operator3'
   */
  Task2_ProgrammingCalculator_Y.XNOR = (Task2_ProgrammingCalculator_U.Operand1 ==
    Task2_ProgrammingCalculator_U.Operand2);

  /* Outport: '<Root>/NOT_Op1' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Logic: '<Root>/Logical Operator4'
   */
  Task2_ProgrammingCalculator_Y.NOT_Op1 =
    !Task2_ProgrammingCalculator_U.Operand1;

  /* Outport: '<Root>/NOT_Op2' incorporates:
   *  Inport: '<Root>/Operand2'
   *  Logic: '<Root>/Logical Operator5'
   */
  Task2_ProgrammingCalculator_Y.NOT_Op2 =
    !Task2_ProgrammingCalculator_U.Operand2;
}

/* Model initialize function */
void Task2_ProgrammingCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task2_ProgrammingCalculator_M, (NULL));

  /* external inputs */
  (void)memset(&Task2_ProgrammingCalculator_U, 0, sizeof
               (ExtU_Task2_ProgrammingCalcula_T));

  /* external outputs */
  (void) memset((void *)&Task2_ProgrammingCalculator_Y, 0,
                sizeof(ExtY_Task2_ProgrammingCalcula_T));
}

/* Model terminate function */
void Task2_ProgrammingCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
