/*
 * File: Topic6_SwitchLed.h
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

#ifndef RTW_HEADER_Topic6_SwitchLed_h_
#define RTW_HEADER_Topic6_SwitchLed_h_
#include <stddef.h>
#include <string.h>
#ifndef Topic6_SwitchLed_COMMON_INCLUDES_
#define Topic6_SwitchLed_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Topic6_SwitchLed_COMMON_INCLUDES_ */

#include "Topic6_SwitchLed_types.h"
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
  uint8_T is_active_c3_Topic6_SwitchLed;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Topic6_SwitchLed_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_Topic6_SwitchLed_T;

/* Parameters (default storage) */
struct P_Topic6_SwitchLed_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Topic6_SwitchLed_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Topic6_SwitchLed_T Topic6_SwitchLed_P;

/* Block states (default storage) */
extern DW_Topic6_SwitchLed_T Topic6_SwitchLed_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Topic6_SwitchLed_T Topic6_SwitchLed_Y;

/* Model entry point functions */
extern void Topic6_SwitchLed_initialize(void);
extern void Topic6_SwitchLed_step(void);
extern void Topic6_SwitchLed_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Topic6_SwitchLed_T *const Topic6_SwitchLed_M;
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
 * '<Root>' : 'Topic6_SwitchLed'
 * '<S1>'   : 'Topic6_SwitchLed/Chart'
 * '<S2>'   : 'Topic6_SwitchLed/Function-Call Subsystem'
 * '<S3>'   : 'Topic6_SwitchLed/Function-Call Subsystem/CheckSwitch'
 * '<S4>'   : 'Topic6_SwitchLed/Function-Call Subsystem/LedControl'
 */
#endif                                 /* RTW_HEADER_Topic6_SwitchLed_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
