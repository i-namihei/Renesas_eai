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
* File Name    : dnn_compute.c
* Version      : 1.00
* Description  : The function calls
***********************************************************************************************************************/
/**********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 16.06.2017 1.00     First Release
***********************************************************************************************************************/

 
#include "layer_shapes.h"
#include "layer_graph.h"
#include "weights.h"
 
TsOUT* dnn_compute(TsIN* input_1, TsInt *errorcode)
{
  *errorcode = 0;
  convolution(input_1,dnn_buffer1,conv2d_weights,conv2d_biases,dnn_buffer2,layer_shapes.conv2d_shape,errorcode);
  relu(dnn_buffer2,dnn_buffer2,layer_shapes.conv2d_Relu_shape,errorcode);
  pooling(dnn_buffer2,dnn_buffer1,dnn_buffer2,layer_shapes.max_pooling2d_shape,errorcode);
  convolution(dnn_buffer2,dnn_buffer1,conv2d_1_weights,conv2d_1_biases,dnn_buffer2,layer_shapes.conv2d_1_shape,errorcode);
  pooling(dnn_buffer2,dnn_buffer1,dnn_buffer2,layer_shapes.max_pooling2d_1_shape,errorcode);
  convolution(dnn_buffer2,dnn_buffer1,conv2d_2_weights,conv2d_2_biases,dnn_buffer2,layer_shapes.conv2d_2_shape,errorcode);
  relu(dnn_buffer2,dnn_buffer2,layer_shapes.conv2d_2_Relu_shape,errorcode);
  convolution(dnn_buffer2,dnn_buffer1,conv2d_3_weights,conv2d_3_biases,dnn_buffer2,layer_shapes.conv2d_3_shape,errorcode);
  relu(dnn_buffer2,dnn_buffer2,layer_shapes.conv2d_3_Relu_shape,errorcode);
  convolution(dnn_buffer2,dnn_buffer1,conv2d_4_weights,conv2d_4_biases,dnn_buffer2,layer_shapes.conv2d_4_shape,errorcode);
  relu(dnn_buffer2,dnn_buffer2,layer_shapes.conv2d_4_Relu_shape,errorcode);
  pooling(dnn_buffer2,dnn_buffer1,dnn_buffer2,layer_shapes.max_pooling2d_2_shape,errorcode);
   
  innerproduct(dnn_buffer2,dense_weights,dense_biases,dnn_buffer1,layer_shapes.dense_shape,errorcode);
  relu(dnn_buffer1,dnn_buffer1,layer_shapes.dense_Relu_shape,errorcode);
   
  innerproduct(dnn_buffer1,dense_1_weights,dense_1_biases,dnn_buffer2,layer_shapes.dense_1_shape,errorcode);
  relu(dnn_buffer2,dnn_buffer2,layer_shapes.dense_1_Relu_shape,errorcode);
   
  innerproduct(dnn_buffer2,dense_2_weights,dense_2_biases,dnn_buffer1,layer_shapes.dense_2_shape,errorcode);
  softmax(dnn_buffer1,dnn_buffer1,layer_shapes.dense_2_Softmax_shape,errorcode);
  return(dnn_buffer1);
}
