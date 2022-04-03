/*
 * File: Task2_CalculatorSubsystem.h
 *
 * Code generated for Simulink model 'Task2_CalculatorSubsystem'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 18:22:27 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task2_CalculatorSubsystem_h_
#define RTW_HEADER_Task2_CalculatorSubsystem_h_
#include <string.h>
#include <stddef.h>
#ifndef Task2_CalculatorSubsystem_COMMON_INCLUDES_
#define Task2_CalculatorSubsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                          /* Task2_CalculatorSubsystem_COMMON_INCLUDES_ */

#include "Task2_CalculatorSubsystem_types.h"
#include "MW_target_hardware_resources.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T In1_m;                        /* '<S2>/In1' */
} B_Task2_CalculatorSubsystem_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Operand1;                     /* '<Root>/Operand1' */
  real_T Operand2;                     /* '<Root>/Operand2' */
} ExtU_Task2_CalculatorSubsyste_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Addition;                     /* '<Root>/Addition' */
  real_T Subtraction;                  /* '<Root>/Subtraction' */
  real_T Multiplication;               /* '<Root>/Multiplication' */
  real_T Division;                     /* '<Root>/Division' */
  real_T DivisionError;                /* '<Root>/Division Error' */
} ExtY_Task2_CalculatorSubsyste_T;

/* Parameters (default storage) */
struct P_Task2_CalculatorSubsystem_T_ {
  real_T Inf_Value;                    /* Expression: inf
                                        * Referenced by: '<S1>/Inf'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Task2_CalculatorSubsy_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Task2_CalculatorSubsystem_T Task2_CalculatorSubsystem_P;

/* Block signals (default storage) */
extern B_Task2_CalculatorSubsystem_T Task2_CalculatorSubsystem_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_Task2_CalculatorSubsyste_T Task2_CalculatorSubsystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task2_CalculatorSubsyste_T Task2_CalculatorSubsystem_Y;

/* Model entry point functions */
extern void Task2_CalculatorSubsystem_initialize(void);
extern void Task2_CalculatorSubsystem_step(void);
extern void Task2_CalculatorSubsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task2_CalculatorSubs_T *const Task2_CalculatorSubsystem_M;
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
 * '<Root>' : 'Task2_CalculatorSubsystem'
 * '<S1>'   : 'Task2_CalculatorSubsystem/Calculator Subsystem'
 * '<S2>'   : 'Task2_CalculatorSubsystem/Calculator Subsystem/If Action Subsystem'
 * '<S3>'   : 'Task2_CalculatorSubsystem/Calculator Subsystem/If Action Subsystem1'
 */
#endif                             /* RTW_HEADER_Task2_CalculatorSubsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
