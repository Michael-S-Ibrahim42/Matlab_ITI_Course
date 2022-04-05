/*
 * File: EnumType.h
 *
 * Code generated for Simulink model 'EnumType'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Apr  5 23:21:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EnumType_h_
#define RTW_HEADER_EnumType_h_
#include <stddef.h>
#ifndef EnumType_COMMON_INCLUDES_
#define EnumType_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* EnumType_COMMON_INCLUDES_ */

#include "EnumType_types.h"
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
  int32_T Input;                       /* '<Root>/Input' */
} ExtU_EnumType_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  Enum Output[2];                      /* '<Root>/Output' */
} ExtY_EnumType_T;

/* Parameters (default storage) */
struct P_EnumType_T_ {
  Enum EnumeratedConstant_Value;     /* Mask Parameter: EnumeratedConstant_Value
                                      * Referenced by: '<S1>/Constant'
                                      */
};

/* Real-time Model Data Structure */
struct tag_RTM_EnumType_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_EnumType_T EnumType_P;

/* External inputs (root inport signals with default storage) */
extern ExtU_EnumType_T EnumType_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_EnumType_T EnumType_Y;

/* Model entry point functions */
extern void EnumType_initialize(void);
extern void EnumType_step(void);
extern void EnumType_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EnumType_T *const EnumType_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion2' : Eliminate redundant data type conversion
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
 * '<Root>' : 'EnumType'
 * '<S1>'   : 'EnumType/Enumerated Constant'
 */
#endif                                 /* RTW_HEADER_EnumType_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
