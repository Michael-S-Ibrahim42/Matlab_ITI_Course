/*
 * File: Task2_TrafficLight.h
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

#ifndef RTW_HEADER_Task2_TrafficLight_h_
#define RTW_HEADER_Task2_TrafficLight_h_
#include <stddef.h>
#include <string.h>
#ifndef Task2_TrafficLight_COMMON_INCLUDES_
#define Task2_TrafficLight_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Task2_TrafficLight_COMMON_INCLUDES_ */

#include "Task2_TrafficLight_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Task2_TrafficLight;/* '<Root>/Chart' */
  uint8_T is_c3_Task2_TrafficLight;    /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Task2_TrafficLight_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T red;                         /* '<Root>/red' */
  uint8_T yellow;                      /* '<Root>/yellow' */
  uint8_T green;                       /* '<Root>/green' */
} ExtY_Task2_TrafficLight_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task2_TrafficLight_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_Task2_TrafficLight_T Task2_TrafficLight_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task2_TrafficLight_T Task2_TrafficLight_Y;

/* Model entry point functions */
extern void Task2_TrafficLight_initialize(void);
extern void Task2_TrafficLight_step(void);
extern void Task2_TrafficLight_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task2_TrafficLight_T *const Task2_TrafficLight_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Task2_TrafficLight'
 * '<S1>'   : 'Task2_TrafficLight/Chart'
 */
#endif                                 /* RTW_HEADER_Task2_TrafficLight_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
