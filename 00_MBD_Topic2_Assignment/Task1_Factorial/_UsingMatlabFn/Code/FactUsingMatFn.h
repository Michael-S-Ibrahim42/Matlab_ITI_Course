/*
 * File: FactUsingMatFn.h
 *
 * Code generated for Simulink model 'FactUsingMatFn'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 17:22:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactUsingMatFn_h_
#define RTW_HEADER_FactUsingMatFn_h_
#include <stddef.h>
#ifndef FactUsingMatFn_COMMON_INCLUDES_
#define FactUsingMatFn_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* FactUsingMatFn_COMMON_INCLUDES_ */

#include "FactUsingMatFn_types.h"
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
  real_T Number;                       /* '<Root>/Number' */
} ExtU_FactUsingMatFn_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Factorial;                    /* '<Root>/Factorial' */
} ExtY_FactUsingMatFn_T;

/* Real-time Model Data Structure */
struct tag_RTM_FactUsingMatFn_T {
  const char_T *errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_FactUsingMatFn_T FactUsingMatFn_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactUsingMatFn_T FactUsingMatFn_Y;

/* Model entry point functions */
extern void FactUsingMatFn_initialize(void);
extern void FactUsingMatFn_step(void);
extern void FactUsingMatFn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactUsingMatFn_T *const FactUsingMatFn_M;
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
 * '<Root>' : 'FactUsingMatFn'
 * '<S1>'   : 'FactUsingMatFn/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_FactUsingMatFn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
