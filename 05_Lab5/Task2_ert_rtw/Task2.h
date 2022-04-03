/*
 * File: Task2.h
 *
 * Code generated for Simulink model 'Task2'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb 10 20:08:00 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task2_h_
#define RTW_HEADER_Task2_h_
#include <stddef.h>
#ifndef Task2_COMMON_INCLUDES_
#define Task2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Task2_COMMON_INCLUDES_ */

#include "Task2_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU_Task2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
} ExtY_Task2_T;

/* Parameters (default storage) */
struct P_Task2_T_ {
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant1_Value_g[5];         /* Expression: [1 2 3 4 5]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value_p;             /* Expression: 5
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Task2_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Task2_T Task2_P;

/* External inputs (root inport signals with default storage) */
extern ExtU_Task2_T Task2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task2_T Task2_Y;

/* Model entry point functions */
extern void Task2_initialize(void);
extern void Task2_step(void);
extern void Task2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task2_T *const Task2_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'Task2'
 * '<S1>'   : 'Task2/For Iterator Subsystem'
 * '<S2>'   : 'Task2/If Action Subsystem'
 * '<S3>'   : 'Task2/If Action Subsystem1'
 * '<S4>'   : 'Task2/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Task2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
