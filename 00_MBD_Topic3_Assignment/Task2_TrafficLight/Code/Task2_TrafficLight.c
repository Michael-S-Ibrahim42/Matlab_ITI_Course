/*
 * File: Task2_TrafficLight.c
 *
 * Code generated for Simulink model 'Task2_TrafficLight'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 20:11:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task2_TrafficLight.h"
#include "Task2_TrafficLight_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Task2_Traffi_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Task2_TrafficLight_IN_GreenLed ((uint8_T)1U)
#define Task2_TrafficLight_IN_RedLed   ((uint8_T)2U)
#define Task2_TrafficLight_IN_YellowLed ((uint8_T)3U)

/* Block states (default storage) */
DW_Task2_TrafficLight_T Task2_TrafficLight_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task2_TrafficLight_T Task2_TrafficLight_Y;

/* Real-time model */
static RT_MODEL_Task2_TrafficLight_T Task2_TrafficLight_M_;
RT_MODEL_Task2_TrafficLight_T *const Task2_TrafficLight_M =
  &Task2_TrafficLight_M_;

/* Model step function */
void Task2_TrafficLight_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Task2_TrafficLight_DW.temporalCounter_i1 < 15U) {
    Task2_TrafficLight_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Task2_TrafficLight_DW.is_active_c3_Task2_TrafficLight == 0U) {
    /* Entry: Chart */
    Task2_TrafficLight_DW.is_active_c3_Task2_TrafficLight = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    Task2_TrafficLight_DW.is_c3_Task2_TrafficLight =
      Task2_TrafficLight_IN_RedLed;
    Task2_TrafficLight_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/red' */
    /* Entry 'RedLed': '<S1>:1' */
    /* '<S1>:1:3' red = uint8(0); */
    Task2_TrafficLight_Y.red = 0U;

    /* Outport: '<Root>/yellow' */
    /* '<S1>:1:4' yellow = uint8(0); */
    Task2_TrafficLight_Y.yellow = 0U;

    /* Outport: '<Root>/green' */
    /* '<S1>:1:5' green = uint8(0); */
    Task2_TrafficLight_Y.green = 0U;
  } else {
    switch (Task2_TrafficLight_DW.is_c3_Task2_TrafficLight) {
     case Task2_TrafficLight_IN_GreenLed:
      /* Outport: '<Root>/red' */
      /* During 'GreenLed': '<S1>:4' */
      /* '<S1>:4:7' red = uint8(0); */
      Task2_TrafficLight_Y.red = 0U;

      /* Outport: '<Root>/yellow' */
      /* '<S1>:4:8' yellow = uint8(0); */
      Task2_TrafficLight_Y.yellow = 0U;

      /* Outport: '<Root>/green' */
      /* '<S1>:4:9' green = uint8(1); */
      Task2_TrafficLight_Y.green = 1U;
      break;

     case Task2_TrafficLight_IN_RedLed:
      /* During 'RedLed': '<S1>:1' */
      /* '<S1>:7:1' sf_internal_predicateOutput = after(3,sec); */
      if (Task2_TrafficLight_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:7' */
        /* Exit 'RedLed': '<S1>:1' */
        /* '<S1>:1:11' red = uint8(1); */
        /* '<S1>:1:12' yellow = uint8(0); */
        /* '<S1>:1:13' green = uint8(0); */
        Task2_TrafficLight_DW.is_c3_Task2_TrafficLight =
          Task2_TrafficLight_IN_YellowLed;
        Task2_TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/red' */
        /* Entry 'YellowLed': '<S1>:3' */
        /* '<S1>:3:3' red = uint8(1); */
        Task2_TrafficLight_Y.red = 1U;

        /* Outport: '<Root>/yellow' */
        /* '<S1>:3:4' yellow = uint8(0); */
        Task2_TrafficLight_Y.yellow = 0U;

        /* Outport: '<Root>/green' */
        /* '<S1>:3:5' green = uint8(0); */
        Task2_TrafficLight_Y.green = 0U;

        /* '<S1>:9:1' sf_internal_predicateOutput = after(3,sec); */
      } else if (Task2_TrafficLight_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:9' */
        /* Exit 'RedLed': '<S1>:1' */
        /* '<S1>:1:11' red = uint8(1); */
        /* '<S1>:1:12' yellow = uint8(0); */
        /* '<S1>:1:13' green = uint8(0); */
        Task2_TrafficLight_DW.is_c3_Task2_TrafficLight =
          Task2_TrafficLight_IN_GreenLed;

        /* Outport: '<Root>/red' */
        /* Entry 'GreenLed': '<S1>:4' */
        /* '<S1>:4:3' red = uint8(0); */
        Task2_TrafficLight_Y.red = 0U;

        /* Outport: '<Root>/yellow' */
        /* '<S1>:4:4' yellow = uint8(1); */
        Task2_TrafficLight_Y.yellow = 1U;

        /* Outport: '<Root>/green' */
        /* '<S1>:4:5' green = uint8(0); */
        Task2_TrafficLight_Y.green = 0U;
      } else {
        /* Outport: '<Root>/red' */
        /* '<S1>:1:7' red = uint8(1); */
        Task2_TrafficLight_Y.red = 1U;

        /* Outport: '<Root>/yellow' */
        /* '<S1>:1:8' yellow = uint8(0); */
        Task2_TrafficLight_Y.yellow = 0U;

        /* Outport: '<Root>/green' */
        /* '<S1>:1:9' green = uint8(0); */
        Task2_TrafficLight_Y.green = 0U;
      }
      break;

     default:
      /* During 'YellowLed': '<S1>:3' */
      /* '<S1>:8:1' sf_internal_predicateOutput = after(3,sec); */
      if (Task2_TrafficLight_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:8' */
        /* Exit 'YellowLed': '<S1>:3' */
        /* '<S1>:3:11' red = uint8(0); */
        /* '<S1>:3:12' yellow = uint8(1); */
        /* '<S1>:3:13' green = uint8(0); */
        Task2_TrafficLight_DW.is_c3_Task2_TrafficLight =
          Task2_TrafficLight_IN_GreenLed;

        /* Outport: '<Root>/red' */
        /* Entry 'GreenLed': '<S1>:4' */
        /* '<S1>:4:3' red = uint8(0); */
        Task2_TrafficLight_Y.red = 0U;

        /* Outport: '<Root>/yellow' */
        /* '<S1>:4:4' yellow = uint8(1); */
        Task2_TrafficLight_Y.yellow = 1U;

        /* Outport: '<Root>/green' */
        /* '<S1>:4:5' green = uint8(0); */
        Task2_TrafficLight_Y.green = 0U;
      } else {
        /* Outport: '<Root>/red' */
        /* '<S1>:3:7' red = uint8(0); */
        Task2_TrafficLight_Y.red = 0U;

        /* Outport: '<Root>/yellow' */
        /* '<S1>:3:8' yellow = uint8(1); */
        Task2_TrafficLight_Y.yellow = 1U;

        /* Outport: '<Root>/green' */
        /* '<S1>:3:9' green = uint8(0); */
        Task2_TrafficLight_Y.green = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Task2_TrafficLight_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task2_TrafficLight_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Task2_TrafficLight_DW, 0,
                sizeof(DW_Task2_TrafficLight_T));

  /* external outputs */
  (void) memset((void *)&Task2_TrafficLight_Y, 0,
                sizeof(ExtY_Task2_TrafficLight_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Task2_TrafficLight_DW.temporalCounter_i1 = 0U;
  Task2_TrafficLight_DW.is_active_c3_Task2_TrafficLight = 0U;
  Task2_TrafficLight_DW.is_c3_Task2_TrafficLight =
    Task2_Traffi_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void Task2_TrafficLight_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
