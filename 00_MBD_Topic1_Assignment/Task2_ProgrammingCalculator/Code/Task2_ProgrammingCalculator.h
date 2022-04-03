/*
 * File: Task2_ProgrammingCalculator.h
 *
 * Code generated for Simulink model 'Task2_ProgrammingCalculator'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Apr  3 15:44:51 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task2_ProgrammingCalculator_h_
#define RTW_HEADER_Task2_ProgrammingCalculator_h_
#include <string.h>
#include <stddef.h>
#ifndef Task2_ProgrammingCalculator_COMMON_INCLUDES_
#define Task2_ProgrammingCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                        /* Task2_ProgrammingCalculator_COMMON_INCLUDES_ */

#include "Task2_ProgrammingCalculator_types.h"
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
  boolean_T Operand1;                  /* '<Root>/Operand1' */
  boolean_T Operand2;                  /* '<Root>/Operand2' */
} ExtU_Task2_ProgrammingCalcula_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T AND;                       /* '<Root>/AND' */
  boolean_T OR;                        /* '<Root>/OR' */
  boolean_T XOR;                       /* '<Root>/XOR' */
  boolean_T XNOR;                      /* '<Root>/XNOR' */
  boolean_T NOT_Op1;                   /* '<Root>/NOT_Op1' */
  boolean_T NOT_Op2;                   /* '<Root>/NOT_Op2' */
} ExtY_Task2_ProgrammingCalcula_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task2_ProgrammingCalc_T {
  const char_T *errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Task2_ProgrammingCalcula_T Task2_ProgrammingCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task2_ProgrammingCalcula_T Task2_ProgrammingCalculator_Y;

/* Model entry point functions */
extern void Task2_ProgrammingCalculator_initialize(void);
extern void Task2_ProgrammingCalculator_step(void);
extern void Task2_ProgrammingCalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task2_ProgrammingCal_T *const Task2_ProgrammingCalculator_M;
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
 * '<Root>' : 'Task2_ProgrammingCalculator'
 */
#endif                           /* RTW_HEADER_Task2_ProgrammingCalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
