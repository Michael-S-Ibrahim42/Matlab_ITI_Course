/*
 * File: Add.h
 *
 * Code generated for Simulink model 'Add'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 30 23:03:04 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Add_h_
#define RTW_HEADER_Add_h_
#include <stddef.h>
#ifndef Add_COMMON_INCLUDES_
#define Add_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Add_COMMON_INCLUDES_ */

#include "Add_types.h"
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
  uint32_T In1;                        /* '<Root>/In1' */
  uint32_T In2;                        /* '<Root>/In2' */
} ExtU_Add_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Out1;                       /* '<Root>/Out1' */
  uint32_T Out2;                       /* '<Root>/Out2' */
  uint32_T Out3;                       /* '<Root>/Out3' */
  uint32_T Out4;                       /* '<Root>/Out4' */
  uint32_T Out5;                       /* '<Root>/Out5' */
  uint16_T Out6;                       /* '<Root>/Out6' */
  uint32_T Out7;                       /* '<Root>/Out7' */
} ExtY_Add_T;

/* Parameters (default storage) */
struct P_Add_T_ {
  uint32_T BitwiseOperator_BitMask;   /* Mask Parameter: BitwiseOperator_BitMask
                                       * Referenced by: '<Root>/Bitwise Operator'
                                       */
  uint32_T FixPtBitwiseOperator3_BitMask;
                                /* Mask Parameter: FixPtBitwiseOperator3_BitMask
                                 * Referenced by: '<S1>/FixPt Bitwise Operator3'
                                 */
  uint32_T FixPtBitwiseOperator1_BitMask;
                                /* Mask Parameter: FixPtBitwiseOperator1_BitMask
                                 * Referenced by: '<S2>/FixPt Bitwise Operator1'
                                 */
};

/* Real-time Model Data Structure */
struct tag_RTM_Add_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Add_T Add_P;

/* External inputs (root inport signals with default storage) */
extern ExtU_Add_T Add_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Add_T Add_Y;

/* Model entry point functions */
extern void Add_initialize(void);
extern void Add_step(void);
extern void Add_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Add_T *const Add_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/DTProp1' : Unused code path elimination
 * Block '<S3>/DTProp2' : Unused code path elimination
 * Block '<S3>/Modify Scaling Only' : Eliminate redundant data type conversion
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
 * '<Root>' : 'Add'
 * '<S1>'   : 'Add/Bit Clear'
 * '<S2>'   : 'Add/Bit Set'
 * '<S3>'   : 'Add/Extract Bits'
 */
#endif                                 /* RTW_HEADER_Add_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
