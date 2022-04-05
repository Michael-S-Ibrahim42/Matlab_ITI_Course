/*
 * File: Scheduler.h
 *
 * Code generated for Simulink model 'Scheduler'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 20:56:28 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Scheduler_h_
#define RTW_HEADER_Scheduler_h_
#include <stddef.h>
#include <string.h>
#ifndef Scheduler_COMMON_INCLUDES_
#define Scheduler_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Scheduler_COMMON_INCLUDES_ */

#include "Scheduler_types.h"
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
  uint8_T is_active_c3_Scheduler;      /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Scheduler_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_Scheduler_T;

/* Parameters (default storage) */
struct P_Scheduler_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Scheduler_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Scheduler_T Scheduler_P;

/* Block states (default storage) */
extern DW_Scheduler_T Scheduler_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Scheduler_T Scheduler_Y;

/* Model entry point functions */
extern void Scheduler_initialize(void);
extern void Scheduler_step(void);
extern void Scheduler_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Scheduler_T *const Scheduler_M;
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
 * '<Root>' : 'Scheduler'
 * '<S1>'   : 'Scheduler/Chart'
 * '<S2>'   : 'Scheduler/Function-Call Subsystem'
 */
#endif                                 /* RTW_HEADER_Scheduler_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
