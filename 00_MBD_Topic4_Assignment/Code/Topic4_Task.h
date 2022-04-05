/*
 * File: Topic4_Task.h
 *
 * Code generated for Simulink model 'Topic4_Task'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 21:24:00 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Topic4_Task_h_
#define RTW_HEADER_Topic4_Task_h_
#include <stddef.h>
#include <string.h>
#ifndef Topic4_Task_COMMON_INCLUDES_
#define Topic4_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Topic4_Task_COMMON_INCLUDES_ */

#include "Topic4_Task_types.h"
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
  uint8_T is_active_c3_Topic4_Task;    /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Topic4_Task_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_Topic4_Task_T;

/* Parameters (default storage) */
struct P_Topic4_Task_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Topic4_Task_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Topic4_Task_T Topic4_Task_P;

/* Block states (default storage) */
extern DW_Topic4_Task_T Topic4_Task_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Topic4_Task_T Topic4_Task_Y;

/* Model entry point functions */
extern void Topic4_Task_initialize(void);
extern void Topic4_Task_step(void);
extern void Topic4_Task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Topic4_Task_T *const Topic4_Task_M;
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
 * '<Root>' : 'Topic4_Task'
 * '<S1>'   : 'Topic4_Task/Chart'
 * '<S2>'   : 'Topic4_Task/Function-Call Subsystem'
 */
#endif                                 /* RTW_HEADER_Topic4_Task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
