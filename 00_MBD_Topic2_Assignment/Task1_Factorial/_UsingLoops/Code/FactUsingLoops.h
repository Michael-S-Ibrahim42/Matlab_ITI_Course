/*
 * File: FactUsingLoops.h
 *
 * Code generated for Simulink model 'FactUsingLoops'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 16:51:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactUsingLoops_h_
#define RTW_HEADER_FactUsingLoops_h_
#include <stddef.h>
#ifndef FactUsingLoops_COMMON_INCLUDES_
#define FactUsingLoops_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* FactUsingLoops_COMMON_INCLUDES_ */

#include "FactUsingLoops_types.h"
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
  uint32_T Number;                     /* '<Root>/Number' */
} ExtU_FactUsingLoops_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Factorial;                  /* '<Root>/Factorial' */
} ExtY_FactUsingLoops_T;

/* Parameters (default storage) */
struct P_FactUsingLoops_T_ {
  uint32_T Delay1_InitialCondition;
                                  /* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<S1>/Delay1'
                                   */
};

/* Real-time Model Data Structure */
struct tag_RTM_FactUsingLoops_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_FactUsingLoops_T FactUsingLoops_P;

/* External inputs (root inport signals with default storage) */
extern ExtU_FactUsingLoops_T FactUsingLoops_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactUsingLoops_T FactUsingLoops_Y;

/* Model entry point functions */
extern void FactUsingLoops_initialize(void);
extern void FactUsingLoops_step(void);
extern void FactUsingLoops_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactUsingLoops_T *const FactUsingLoops_M;
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
 * '<Root>' : 'FactUsingLoops'
 * '<S1>'   : 'FactUsingLoops/For Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_FactUsingLoops_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
