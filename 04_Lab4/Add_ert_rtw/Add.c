/*
 * File: Add.c
 *
 * Code generated for Simulink model 'Add'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 30 23:03:04 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Add.h"
#include "Add_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Add_T Add_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Add_T Add_Y;

/* Real-time model */
static RT_MODEL_Add_T Add_M_;
RT_MODEL_Add_T *const Add_M = &Add_M_;

/* Model step function */
void Add_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  Add_Y.Out1 = Add_U.In1 + Add_U.In2;

  /* MinMax: '<Root>/Max' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  if (Add_U.In1 > Add_U.In2) {
    /* Outport: '<Root>/Out2' */
    Add_Y.Out2 = Add_U.In1;
  } else {
    /* Outport: '<Root>/Out2' */
    Add_Y.Out2 = Add_U.In2;
  }

  /* End of MinMax: '<Root>/Max' */

  /* MinMax: '<Root>/Min' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  if (Add_U.In1 < Add_U.In2) {
    /* Outport: '<Root>/Out3' */
    Add_Y.Out3 = Add_U.In1;
  } else {
    /* Outport: '<Root>/Out3' */
    Add_Y.Out3 = Add_U.In2;
  }

  /* End of MinMax: '<Root>/Min' */

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  Add_Y.Out4 = Add_U.In1 & Add_P.BitwiseOperator_BitMask;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/FixPt Bitwise Operator3'
   *  S-Function (sfix_bitop): '<S1>/FixPt Bitwise Operator4'
   *  S-Function (sfix_bitop): '<S1>/FixPt Bitwise Operator5'
   */
  Add_Y.Out5 = ~(~Add_U.In1 | Add_P.FixPtBitwiseOperator3_BitMask);

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S2>/FixPt Bitwise Operator1'
   */
  Add_Y.Out7 = Add_U.In1 | Add_P.FixPtBitwiseOperator1_BitMask;

  /* Outport: '<Root>/Out6' incorporates:
   *  DataTypeConversion: '<S3>/Extract Desired Bits'
   *  Inport: '<Root>/In1'
   */
  Add_Y.Out6 = (uint16_T)(Add_U.In1 >> 16);
}

/* Model initialize function */
void Add_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Add_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
