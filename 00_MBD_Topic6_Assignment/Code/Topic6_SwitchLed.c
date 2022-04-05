/*
 * File: Topic6_SwitchLed.c
 *
 * Code generated for Simulink model 'Topic6_SwitchLed'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 21:59:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Topic6_SwitchLed.h"
#include "Topic6_SwitchLed_private.h"

/* Block states (default storage) */
DW_Topic6_SwitchLed_T Topic6_SwitchLed_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Topic6_SwitchLed_T Topic6_SwitchLed_Y;

/* Real-time model */
static RT_MODEL_Topic6_SwitchLed_T Topic6_SwitchLed_M_;
RT_MODEL_Topic6_SwitchLed_T *const Topic6_SwitchLed_M = &Topic6_SwitchLed_M_;

/* Model step function */
void Topic6_SwitchLed_step(void)
{
  int16_T rtb_Flag;

  /* Chart: '<Root>/Chart' */
  if (Topic6_SwitchLed_DW.temporalCounter_i1 < 1U) {
    Topic6_SwitchLed_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Topic6_SwitchLed_DW.is_active_c3_Topic6_SwitchLed == 0U) {
    /* Entry: Chart */
    Topic6_SwitchLed_DW.is_active_c3_Topic6_SwitchLed = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    Topic6_SwitchLed_DW.temporalCounter_i1 = 0U;

    /* During 'CallFunction': '<S1>:1' */
  } else if (Topic6_SwitchLed_DW.temporalCounter_i1 >= 1U) {
    /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
    /* Chart: '<S2>/CheckSwitch' incorporates:
     *  Constant: '<Root>/Constant'
     */
    /* Transition: '<S1>:3' */
    /* Event: '<S1>:4' */
    /* Gateway: Function-Call
       Subsystem/CheckSwitch */
    /* During: Function-Call
       Subsystem/CheckSwitch */
    /* Entry Internal: Function-Call
       Subsystem/CheckSwitch */
    /* Transition: '<S3>:1' */
    /*  CheckButton */
    /* '<S3>:2:1' sf_internal_predicateOutput = Switch == 1; */
    if (Topic6_SwitchLed_P.Constant_Value == 1.0) {
      /* Transition: '<S3>:2' */
      /* Transition: '<S3>:4' */
      /* '<S3>:4:1' Flag = 1; */
      rtb_Flag = 1;

      /* Transition: '<S3>:5' */
    } else {
      /* Transition: '<S3>:3' */
      /* '<S3>:3:1' Flag = 0; */
      rtb_Flag = 0;
    }

    /* End of Chart: '<S2>/CheckSwitch' */

    /* Chart: '<S2>/LedControl' */
    /* Transition: '<S3>:6' */
    /* Gateway: Function-Call
       Subsystem/LedControl */
    /* During: Function-Call
       Subsystem/LedControl */
    /* Entry Internal: Function-Call
       Subsystem/LedControl */
    /* Transition: '<S4>:1' */
    /*  LedControl */
    /* '<S4>:2:1' sf_internal_predicateOutput = LedControl == 1; */
    if (rtb_Flag == 1) {
      /* Outport: '<Root>/Output' */
      /* Transition: '<S4>:2' */
      /* Transition: '<S4>:4' */
      /* '<S4>:4:1' Led = 1; */
      Topic6_SwitchLed_Y.Output = 1.0;

      /* Transition: '<S4>:5' */
    } else {
      /* Outport: '<Root>/Output' */
      /* Transition: '<S4>:3' */
      /* '<S4>:3:1' Led = 0; */
      Topic6_SwitchLed_Y.Output = 0.0;
    }

    /* End of Chart: '<S2>/LedControl' */
    /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
    /* Transition: '<S4>:6' */
    Topic6_SwitchLed_DW.temporalCounter_i1 = 0U;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Topic6_SwitchLed_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Topic6_SwitchLed_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Topic6_SwitchLed_DW, 0,
                sizeof(DW_Topic6_SwitchLed_T));

  /* external outputs */
  Topic6_SwitchLed_Y.Output = 0.0;
  Topic6_SwitchLed_DW.temporalCounter_i1 = 0U;
  Topic6_SwitchLed_DW.is_active_c3_Topic6_SwitchLed = 0U;

  /* SystemInitialize for Chart: '<Root>/Chart' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* InitializeConditions for Outport: '<Root>/Output' incorporates:
   *  Chart: '<S2>/LedControl'
   */
  Topic6_SwitchLed_Y.Output = 0.0;
}

/* Model terminate function */
void Topic6_SwitchLed_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
