/*
 * File: Task1.h
 *
 * Code generated for Simulink model 'Task1'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb 10 18:01:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task1_h_
#define RTW_HEADER_Task1_h_
#include <math.h>
#include <stddef.h>
#ifndef Task1_COMMON_INCLUDES_
#define Task1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Task1_COMMON_INCLUDES_ */

#include "Task1_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Task1_T;

/* Parameters (default storage) */
struct P_Task1_T_ {
  real_T Constant_Value;               /* Expression: 100
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 200
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant_Value_c;             /* Expression: 300
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 2
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Task1_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Task1_T Task1_P;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task1_T Task1_Y;

/* Model entry point functions */
extern void Task1_initialize(void);
extern void Task1_step(void);
extern void Task1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task1_T *const Task1_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display1' : Unused code path elimination
 */

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
 * '<Root>' : 'Task1'
 * '<S1>'   : 'Task1/Switch Case Action Subsystem'
 * '<S2>'   : 'Task1/Switch Case Action Subsystem1'
 * '<S3>'   : 'Task1/Switch Case Action Subsystem2'
 */
#endif                                 /* RTW_HEADER_Task1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
