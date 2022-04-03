/*
 * File: Factorial.c
 *
 * Code generated for Simulink model 'Factorial'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 19:30:06 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial.h"
#include "Factorial_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_T Factorial_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_T Factorial_Y;

/* Real-time model */
static RT_MODEL_Factorial_T Factorial_M_;
RT_MODEL_Factorial_T *const Factorial_M = &Factorial_M_;

/* Model step function */
void Factorial_step(void)
{
  real_T iterator;
  real_T rtb_result;

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:1' */
  /*  Factorial */
  /* Transition: '<S1>:2' */
  /* '<S1>:2:1' iterator=1; */
  iterator = 1.0;

  /* '<S1>:2:1' result=1; */
  rtb_result = 1.0;

  /* '<S1>:3:1' sf_internal_predicateOutput = iterator<=input; */
  while (iterator <= Factorial_U.Number) {
    /* Transition: '<S1>:3' */
    /* Transition: '<S1>:4' */
    /* '<S1>:4:1' result = result * iterator; */
    rtb_result *= iterator;

    /* Transition: '<S1>:7' */
    /* '<S1>:7:1' iterator = iterator + 1; */
    iterator++;

    /* Transition: '<S1>:5' */
  }

  /* Outport: '<Root>/Fact' */
  /* Transition: '<S1>:6' */
  Factorial_Y.Fact = rtb_result;
}

/* Model initialize function */
void Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_M, (NULL));

  /* external inputs */
  Factorial_U.Number = 0.0;

  /* external outputs */
  Factorial_Y.Fact = 0.0;
}

/* Model terminate function */
void Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
