/*
 * File: ArduinoTest.h
 *
 * Code generated for Simulink model 'ArduinoTest'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan  2 19:21:28 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ArduinoTest_h_
#define RTW_HEADER_ArduinoTest_h_
#include <math.h>
#include <stddef.h>
#ifndef ArduinoTest_COMMON_INCLUDES_
#define ArduinoTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* ArduinoTest_COMMON_INCLUDES_ */

#include "ArduinoTest_types.h"
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
  codertarget_arduinobase_block_T obj; /* '<Root>/Digital Output' */
} DW_ArduinoTest_T;

/* Parameters (default storage) */
struct P_ArduinoTest_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ArduinoTest_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_ArduinoTest_T ArduinoTest_P;

/* Block states (default storage) */
extern DW_ArduinoTest_T ArduinoTest_DW;

/* Model entry point functions */
extern void ArduinoTest_initialize(void);
extern void ArduinoTest_step(void);
extern void ArduinoTest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ArduinoTest_T *const ArduinoTest_M;
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
 * '<Root>' : 'ArduinoTest'
 */
#endif                                 /* RTW_HEADER_ArduinoTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
