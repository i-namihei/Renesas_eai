/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No 
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all 
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED 'AS IS' AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES 
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS 
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of 
* this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer 
*
* Changed from original python code to C source code.
* Copyright (C) 2017 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : layer_shapes.h
* Version      : 1.00
* Description  : Initializations
***********************************************************************************************************************/
/**********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 16.06.2017 1.00     First Release
***********************************************************************************************************************/

#include "Typedef.h"
#include <stdlib.h>
#ifndef LAYER_SHAPES_H_
#define LAYER_SHAPES_H_
 
TsOUT* dnn_compute(TsIN*, TsInt*);
 
TsOUT dnn_buffer1[3675];
TsOUT dnn_buffer2[1944];
 
struct shapes{
    TsInt conv2d_shape[16];
    TsInt conv2d_Relu_shape;
    TsInt max_pooling2d_shape[15];
    TsInt conv2d_1_shape[16];
    TsInt max_pooling2d_1_shape[15];
    TsInt conv2d_2_shape[16];
    TsInt conv2d_2_Relu_shape;
    TsInt conv2d_3_shape[16];
    TsInt conv2d_3_Relu_shape;
    TsInt conv2d_4_shape[16];
    TsInt conv2d_4_Relu_shape;
    TsInt max_pooling2d_2_shape[15];
    TsInt dense_shape[4];
    TsInt dense_Relu_shape;
    TsInt dense_1_shape[4];
    TsInt dense_1_Relu_shape;
    TsInt dense_2_shape[4];
    TsInt dense_2_Softmax_shape;
};
 
struct shapes layer_shapes ={
    {1,3,28,28,24,3,11,11,7,7,3,4,3,4,4,4},
    1176,
    {1,24,7,7,4,4,1,1,1,1,3,3,2,2,0},
    {1,24,4,4,10,24,3,3,4,4,1,1,1,1,1,1},
    {1,10,4,4,2,2,0,1,0,1,3,3,2,2,0},
    {1,10,2,2,25,10,3,3,2,2,1,1,1,1,1,1},
    100,
    {1,25,2,2,32,25,3,3,2,2,1,1,1,1,1,1},
    128,
    {1,32,2,2,32,32,3,3,2,2,1,1,1,1,1,1},
    128,
    {1,32,2,2,1,1,0,1,0,1,3,3,2,2,0},
    {1,32,32,240},
    240,
    {1,240,240,50},
    50,
    {1,50,50,17},
    17
};
 
#endif
