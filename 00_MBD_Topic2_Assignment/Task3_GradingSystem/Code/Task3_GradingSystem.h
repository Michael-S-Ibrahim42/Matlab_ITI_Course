/*
 * File: Task3_GradingSystem.h
 *
 * Code generated for Simulink model 'Task3_GradingSystem'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 18:44:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task3_GradingSystem_h_
#define RTW_HEADER_Task3_GradingSystem_h_
#include <stddef.h>
#include <string.h>
#ifndef Task3_GradingSystem_COMMON_INCLUDES_
#define Task3_GradingSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                /* Task3_GradingSystem_COMMON_INCLUDES_ */

#include "Task3_GradingSystem_types.h"
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
  real_T Grade;                        /* '<Root>/Grade' */
} ExtU_Task3_GradingSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T GradeLetter[256];             /* '<Root>/GradeLetter' */
} ExtY_Task3_GradingSystem_T;

/* Parameters (default storage) */
struct P_Task3_GradingSystem_T_ {
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S3>/Constant'
                                        */
  uint8_T Constant_Value_a;            /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint8_T Constant_Value_g;            /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S2>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Task3_GradingSystem_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Task3_GradingSystem_T Task3_GradingSystem_P;

/* External inputs (root inport signals with default storage) */
extern ExtU_Task3_GradingSystem_T Task3_GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task3_GradingSystem_T Task3_GradingSystem_Y;

/* Model entry point functions */
extern void Task3_GradingSystem_initialize(void);
extern void Task3_GradingSystem_step(void);
extern void Task3_GradingSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task3_GradingSystem_T *const Task3_GradingSystem_M;
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
 * '<Root>' : 'Task3_GradingSystem'
 * '<S1>'   : 'Task3_GradingSystem/If Action Subsystem1'
 * '<S2>'   : 'Task3_GradingSystem/If Action Subsystem2'
 * '<S3>'   : 'Task3_GradingSystem/If Action Subsystem3'
 */
#endif                                 /* RTW_HEADER_Task3_GradingSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
