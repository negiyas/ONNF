    if (OpName == "DUMMY") {
    }else if (OpName == "Abs") {
       ImportNodeOneOut<mlir::ONNXAbsOp>(node, 1, 1, {
      });
    }else if (OpName == "Acos") {
       ImportNodeOneOut<mlir::ONNXAcosOp>(node, 1, 1, {
      });
    }else if (OpName == "Acosh") {
       ImportNodeOneOut<mlir::ONNXAcoshOp>(node, 1, 1, {
      });
    }else if (OpName == "Add") {
       ImportNodeOneOut<mlir::ONNXAddOp>(node, 2, 1, {
      });
    }else if (OpName == "And") {
       ImportNodeOneOut<mlir::ONNXAndOp>(node, 2, 1, {
      });
    }else if (OpName == "ArgMax") {
       ImportNodeOneOut<mlir::ONNXArgMaxOp>(node, 1, 1, {
         {"axis", 0}
        ,{"keepdims", 1}
      });
    }else if (OpName == "ArgMin") {
       ImportNodeOneOut<mlir::ONNXArgMinOp>(node, 1, 1, {
         {"axis", 0}
        ,{"keepdims", 1}
      });
    }else if (OpName == "Asin") {
       ImportNodeOneOut<mlir::ONNXAsinOp>(node, 1, 1, {
      });
    }else if (OpName == "Asinh") {
       ImportNodeOneOut<mlir::ONNXAsinhOp>(node, 1, 1, {
      });
    }else if (OpName == "Atan") {
       ImportNodeOneOut<mlir::ONNXAtanOp>(node, 1, 1, {
      });
    }else if (OpName == "Atanh") {
       ImportNodeOneOut<mlir::ONNXAtanhOp>(node, 1, 1, {
      });
    }else if (OpName == "AveragePool") {
       ImportNodeOneOut<mlir::ONNXAveragePoolOp>(node, 1, 1, {
         {"auto_pad", "NOTSET"}
        ,{"ceil_mode", 0}
        ,{"count_include_pad", 0}
        ,{"kernel_shape", std::vector<int64_t> {}}
      });
    }else if (OpName == "BatchNormalization") {
       ImportNodeMultipleOuts<mlir::ONNXBatchNormalizationOp>(node, 5, 5, {
         {"epsilon", (float)1e-05}
        ,{"momentum", (float)0.9}
      });
    }else if (OpName == "BitShift") {
       ImportNodeOneOut<mlir::ONNXBitShiftOp>(node, 2, 1, {
      });
    }else if (OpName == "Cast") {
       ImportNodeOneOut<mlir::ONNXCastOp>(node, 1, 1, {
         {"to", 0}
      });
    }else if (OpName == "Ceil") {
       ImportNodeOneOut<mlir::ONNXCeilOp>(node, 1, 1, {
      });
    }else if (OpName == "Clip") {
       ImportNodeOneOut<mlir::ONNXClipOp>(node, 3, 1, {
      });
    }else if (OpName == "Compress") {
       ImportNodeOneOut<mlir::ONNXCompressOp>(node, 2, 1, {
      });
    }else if (OpName == "Concat") {
       ImportNodeOneOut<mlir::ONNXConcatOp>(node, 1, 1, {
         {"axis", 0}
      });
    }else if (OpName == "ConcatFromSequence") {
       ImportNodeOneOut<mlir::ONNXConcatFromSequenceOp>(node, 1, 1, {
         {"new_axis", 0}
      });
    }else if (OpName == "Constant") {
       ImportNodeOneOut<mlir::ONNXConstantOp>(node, 0, 1, {
      });
    }else if (OpName == "ConstantOfShape") {
       ImportNodeOneOut<mlir::ONNXConstantOfShapeOp>(node, 1, 1, {
      });
    }else if (OpName == "Conv") {
       ImportNodeConv(node, 3, 1, {
         {"auto_pad", "NOTSET"}
        ,{"group", 1}
      });
    }else if (OpName == "ConvInteger") {
       ImportNodeOneOut<mlir::ONNXConvIntegerOp>(node, 4, 1, {
         {"auto_pad", "NOTSET"}
        ,{"group", 1}
      });
    }else if (OpName == "ConvTranspose") {
       ImportNodeOneOut<mlir::ONNXConvTransposeOp>(node, 3, 1, {
         {"auto_pad", "NOTSET"}
        ,{"group", 1}
      });
    }else if (OpName == "Cos") {
       ImportNodeOneOut<mlir::ONNXCosOp>(node, 1, 1, {
      });
    }else if (OpName == "Cosh") {
       ImportNodeOneOut<mlir::ONNXCoshOp>(node, 1, 1, {
      });
    }else if (OpName == "CumSum") {
       ImportNodeOneOut<mlir::ONNXCumSumOp>(node, 2, 1, {
         {"exclusive", 0}
        ,{"reverse", 0}
      });
    }else if (OpName == "DepthToSpace") {
       ImportNodeOneOut<mlir::ONNXDepthToSpaceOp>(node, 1, 1, {
         {"mode", "DCR"}
      });
    }else if (OpName == "DequantizeLinear") {
       ImportNodeOneOut<mlir::ONNXDequantizeLinearOp>(node, 3, 1, {
      });
    }else if (OpName == "Det") {
       ImportNodeOneOut<mlir::ONNXDetOp>(node, 1, 1, {
      });
    }else if (OpName == "Div") {
       ImportNodeOneOut<mlir::ONNXDivOp>(node, 2, 1, {
      });
    }else if (OpName == "Dropout") {
       ImportNodeMultipleOuts<mlir::ONNXDropoutOp>(node, 1, 2, {
         {"ratio", (float)0.5}
      });
    }else if (OpName == "DynamicQuantizeLinear") {
       ImportNodeMultipleOuts<mlir::ONNXDynamicQuantizeLinearOp>(node, 1, 3, {
      });
    }else if (OpName == "Elu") {
       ImportNodeOneOut<mlir::ONNXEluOp>(node, 1, 1, {
         {"alpha", (float)1.0}
      });
    }else if (OpName == "Equal") {
       ImportNodeOneOut<mlir::ONNXEqualOp>(node, 2, 1, {
      });
    }else if (OpName == "Erf") {
       ImportNodeOneOut<mlir::ONNXErfOp>(node, 1, 1, {
      });
    }else if (OpName == "Exp") {
       ImportNodeOneOut<mlir::ONNXExpOp>(node, 1, 1, {
      });
    }else if (OpName == "Expand") {
       ImportNodeOneOut<mlir::ONNXExpandOp>(node, 2, 1, {
      });
    }else if (OpName == "EyeLike") {
       ImportNodeOneOut<mlir::ONNXEyeLikeOp>(node, 1, 1, {
         {"k", 0}
      });
    }else if (OpName == "Flatten") {
       ImportNodeOneOut<mlir::ONNXFlattenOp>(node, 1, 1, {
         {"axis", 1}
      });
    }else if (OpName == "Floor") {
       ImportNodeOneOut<mlir::ONNXFloorOp>(node, 1, 1, {
      });
    }else if (OpName == "GRU") {
       ImportNodeMultipleOuts<mlir::ONNXGRUOp>(node, 6, 2, {
         {"direction", "forward"}
        ,{"linear_before_reset", 0}
      });
    }else if (OpName == "Gather") {
       ImportNodeOneOut<mlir::ONNXGatherOp>(node, 2, 1, {
         {"axis", 0}
      });
    }else if (OpName == "GatherElements") {
       ImportNodeOneOut<mlir::ONNXGatherElementsOp>(node, 2, 1, {
         {"axis", 0}
      });
    }else if (OpName == "GatherND") {
       ImportNodeOneOut<mlir::ONNXGatherNDOp>(node, 2, 1, {
      });
    }else if (OpName == "Gemm") {
       ImportNodeOneOut<mlir::ONNXGemmOp>(node, 3, 1, {
         {"alpha", (float)1.0}
        ,{"beta", (float)1.0}
        ,{"transA", 0}
        ,{"transB", 0}
      });
    }else if (OpName == "GlobalAveragePool") {
       ImportNodeOneOut<mlir::ONNXGlobalAveragePoolOp>(node, 1, 1, {
      });
    }else if (OpName == "GlobalLpPool") {
       ImportNodeOneOut<mlir::ONNXGlobalLpPoolOp>(node, 1, 1, {
         {"p", 2}
      });
    }else if (OpName == "GlobalMaxPool") {
       ImportNodeOneOut<mlir::ONNXGlobalMaxPoolOp>(node, 1, 1, {
      });
    }else if (OpName == "Greater") {
       ImportNodeOneOut<mlir::ONNXGreaterOp>(node, 2, 1, {
      });
    }else if (OpName == "HardSigmoid") {
       ImportNodeOneOut<mlir::ONNXHardSigmoidOp>(node, 1, 1, {
         {"alpha", (float)0.2}
        ,{"beta", (float)0.5}
      });
    }else if (OpName == "Hardmax") {
       ImportNodeOneOut<mlir::ONNXHardmaxOp>(node, 1, 1, {
         {"axis", 1}
      });
    }else if (OpName == "Identity") {
       ImportNodeOneOut<mlir::ONNXIdentityOp>(node, 1, 1, {
      });
    }else if (OpName == "If") {
       ImportNodeOneOut<mlir::ONNXIfOp>(node, 1, 1, {
      });
    }else if (OpName == "InstanceNormalization") {
       ImportNodeOneOut<mlir::ONNXInstanceNormalizationOp>(node, 3, 1, {
         {"epsilon", (float)1e-05}
      });
    }else if (OpName == "IsInf") {
       ImportNodeOneOut<mlir::ONNXIsInfOp>(node, 1, 1, {
         {"detect_negative", 1}
        ,{"detect_positive", 1}
      });
    }else if (OpName == "IsNaN") {
       ImportNodeOneOut<mlir::ONNXIsNaNOp>(node, 1, 1, {
      });
    }else if (OpName == "LRN") {
       ImportNodeOneOut<mlir::ONNXLRNOp>(node, 1, 1, {
         {"alpha", (float)0.0001}
        ,{"beta", (float)0.75}
        ,{"bias", (float)1.0}
      });
    }else if (OpName == "LSTM") {
       ImportNodeMultipleOuts<mlir::ONNXLSTMOp>(node, 8, 3, {
         {"direction", "forward"}
        ,{"input_forget", 0}
      });
    }else if (OpName == "LeakyRelu") {
       ImportNodeOneOut<mlir::ONNXLeakyReluOp>(node, 1, 1, {
         {"alpha", (float)0.01}
      });
    }else if (OpName == "Less") {
       ImportNodeOneOut<mlir::ONNXLessOp>(node, 2, 1, {
      });
    }else if (OpName == "Log") {
       ImportNodeOneOut<mlir::ONNXLogOp>(node, 1, 1, {
      });
    }else if (OpName == "LogSoftmax") {
       ImportNodeOneOut<mlir::ONNXLogSoftmaxOp>(node, 1, 1, {
         {"axis", 1}
      });
    }else if (OpName == "Loop") {
       ImportNodeOneOut<mlir::ONNXLoopOp>(node, 3, 1, {
      });
    }else if (OpName == "LpNormalization") {
       ImportNodeOneOut<mlir::ONNXLpNormalizationOp>(node, 1, 1, {
         {"axis", -1}
        ,{"p", 2}
      });
    }else if (OpName == "LpPool") {
       ImportNodeOneOut<mlir::ONNXLpPoolOp>(node, 1, 1, {
         {"auto_pad", "NOTSET"}
        ,{"p", 2}
      });
    }else if (OpName == "MatMul") {
       ImportNodeOneOut<mlir::ONNXMatMulOp>(node, 2, 1, {
      });
    }else if (OpName == "MatMulInteger") {
       ImportNodeOneOut<mlir::ONNXMatMulIntegerOp>(node, 4, 1, {
      });
    }else if (OpName == "Max") {
       ImportNodeOneOut<mlir::ONNXMaxOp>(node, 1, 1, {
      });
    }else if (OpName == "MaxPool") {
       ImportNodeMaxPool(node, 1, 2, {
         {"auto_pad", "NOTSET"}
        ,{"ceil_mode", 0}
        ,{"kernel_shape", std::vector<int64_t> {}}
        ,{"storage_order", 0}
      });
    }else if (OpName == "MaxRoiPool") {
       ImportNodeOneOut<mlir::ONNXMaxRoiPoolOp>(node, 2, 1, {
         {"spatial_scale", (float)1.0}
      });
    }else if (OpName == "MaxUnpool") {
       ImportNodeOneOut<mlir::ONNXMaxUnpoolOp>(node, 3, 1, {
      });
    }else if (OpName == "Mean") {
       ImportNodeOneOut<mlir::ONNXMeanOp>(node, 1, 1, {
      });
    }else if (OpName == "MeanVarianceNormalization") {
       ImportNodeOneOut<mlir::ONNXMeanVarianceNormalizationOp>(node, 1, 1, {
         {"axes", std::vector<int64_t>{0, 2, 3}}
      });
    }else if (OpName == "Min") {
       ImportNodeOneOut<mlir::ONNXMinOp>(node, 1, 1, {
      });
    }else if (OpName == "Mod") {
       ImportNodeOneOut<mlir::ONNXModOp>(node, 2, 1, {
         {"fmod", 0}
      });
    }else if (OpName == "Mul") {
       ImportNodeOneOut<mlir::ONNXMulOp>(node, 2, 1, {
      });
    }else if (OpName == "Multinomial") {
       ImportNodeOneOut<mlir::ONNXMultinomialOp>(node, 1, 1, {
         {"dtype", 6}
        ,{"sample_size", 1}
      });
    }else if (OpName == "Neg") {
       ImportNodeOneOut<mlir::ONNXNegOp>(node, 1, 1, {
      });
    }else if (OpName == "NonMaxSuppression") {
       ImportNodeOneOut<mlir::ONNXNonMaxSuppressionOp>(node, 5, 1, {
         {"center_point_box", 0}
      });
    }else if (OpName == "NonZero") {
       ImportNodeOneOut<mlir::ONNXNonZeroOp>(node, 1, 1, {
      });
    }else if (OpName == "Not") {
       ImportNodeOneOut<mlir::ONNXNotOp>(node, 1, 1, {
      });
    }else if (OpName == "OneHot") {
       ImportNodeOneOut<mlir::ONNXOneHotOp>(node, 3, 1, {
         {"axis", -1}
      });
    }else if (OpName == "Or") {
       ImportNodeOneOut<mlir::ONNXOrOp>(node, 2, 1, {
      });
    }else if (OpName == "PRelu") {
       ImportNodeOneOut<mlir::ONNXPReluOp>(node, 2, 1, {
      });
    }else if (OpName == "Pad") {
       ImportNodeOneOut<mlir::ONNXPadOp>(node, 3, 1, {
         {"mode", "constant"}
      });
    }else if (OpName == "Pow") {
       ImportNodeOneOut<mlir::ONNXPowOp>(node, 2, 1, {
      });
    }else if (OpName == "QLinearConv") {
       ImportNodeOneOut<mlir::ONNXQLinearConvOp>(node, 9, 1, {
         {"auto_pad", "NOTSET"}
        ,{"group", 1}
      });
    }else if (OpName == "QLinearMatMul") {
       ImportNodeOneOut<mlir::ONNXQLinearMatMulOp>(node, 8, 1, {
      });
    }else if (OpName == "QuantizeLinear") {
       ImportNodeOneOut<mlir::ONNXQuantizeLinearOp>(node, 3, 1, {
      });
    }else if (OpName == "RNN") {
       ImportNodeMultipleOuts<mlir::ONNXRNNOp>(node, 6, 2, {
         {"activation_alpha", std::vector<float> {}}
        ,{"activation_beta", std::vector<float> {}}
        ,{"activations", std::vector<std::string>{"Tanh", "Tanh"}}
        ,{"direction", "forward"}
      });
    }else if (OpName == "RandomNormal") {
       ImportNodeOneOut<mlir::ONNXRandomNormalOp>(node, 0, 1, {
         {"dtype", 1}
        ,{"mean", (float)0.0}
        ,{"scale", (float)1.0}
      });
    }else if (OpName == "RandomNormalLike") {
       ImportNodeOneOut<mlir::ONNXRandomNormalLikeOp>(node, 1, 1, {
         {"mean", (float)0.0}
        ,{"scale", (float)1.0}
      });
    }else if (OpName == "RandomUniform") {
       ImportNodeOneOut<mlir::ONNXRandomUniformOp>(node, 0, 1, {
         {"dtype", 1}
        ,{"high", (float)1.0}
        ,{"low", (float)0.0}
      });
    }else if (OpName == "RandomUniformLike") {
       ImportNodeOneOut<mlir::ONNXRandomUniformLikeOp>(node, 1, 1, {
         {"high", (float)1.0}
        ,{"low", (float)0.0}
      });
    }else if (OpName == "Range") {
       ImportNodeOneOut<mlir::ONNXRangeOp>(node, 3, 1, {
      });
    }else if (OpName == "Reciprocal") {
       ImportNodeOneOut<mlir::ONNXReciprocalOp>(node, 1, 1, {
      });
    }else if (OpName == "ReduceL1") {
       ImportNodeOneOut<mlir::ONNXReduceL1Op>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceL2") {
       ImportNodeOneOut<mlir::ONNXReduceL2Op>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceLogSum") {
       ImportNodeOneOut<mlir::ONNXReduceLogSumOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceLogSumExp") {
       ImportNodeOneOut<mlir::ONNXReduceLogSumExpOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceMax") {
       ImportNodeOneOut<mlir::ONNXReduceMaxOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceMean") {
       ImportNodeOneOut<mlir::ONNXReduceMeanOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceMin") {
       ImportNodeOneOut<mlir::ONNXReduceMinOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceProd") {
       ImportNodeOneOut<mlir::ONNXReduceProdOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceSum") {
       ImportNodeOneOut<mlir::ONNXReduceSumOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "ReduceSumSquare") {
       ImportNodeOneOut<mlir::ONNXReduceSumSquareOp>(node, 1, 1, {
         {"keepdims", 1}
      });
    }else if (OpName == "Relu") {
       ImportNodeOneOut<mlir::ONNXReluOp>(node, 1, 1, {
      });
    }else if (OpName == "Reshape") {
       ImportNodeOneOut<mlir::ONNXReshapeOp>(node, 2, 1, {
      });
    }else if (OpName == "Resize") {
       ImportNodeOneOut<mlir::ONNXResizeOp>(node, 4, 1, {
         {"coordinate_transformation_mode", "half_pixel"}
        ,{"cubic_coeff_a", (float)-0.75}
        ,{"exclude_outside", 0}
        ,{"extrapolation_value", (float)0.0}
        ,{"mode", "nearest"}
        ,{"nearest_mode", "round_prefer_floor"}
      });
    }else if (OpName == "ReverseSequence") {
       ImportNodeOneOut<mlir::ONNXReverseSequenceOp>(node, 2, 1, {
         {"batch_axis", 1}
        ,{"time_axis", 0}
      });
    }else if (OpName == "RoiAlign") {
       ImportNodeOneOut<mlir::ONNXRoiAlignOp>(node, 3, 1, {
         {"mode", "avg"}
        ,{"output_height", 1}
        ,{"output_width", 1}
        ,{"sampling_ratio", 0}
        ,{"spatial_scale", (float)1.0}
      });
    }else if (OpName == "Round") {
       ImportNodeOneOut<mlir::ONNXRoundOp>(node, 1, 1, {
      });
    }else if (OpName == "Scan") {
       ImportNodeOneOut<mlir::ONNXScanOp>(node, 1, 1, {
      });
    }else if (OpName == "Scatter") {
       ImportNodeOneOut<mlir::ONNXScatterOp>(node, 3, 1, {
         {"axis", 0}
      });
    }else if (OpName == "ScatterElements") {
       ImportNodeOneOut<mlir::ONNXScatterElementsOp>(node, 3, 1, {
         {"axis", 0}
      });
    }else if (OpName == "ScatterND") {
       ImportNodeOneOut<mlir::ONNXScatterNDOp>(node, 3, 1, {
      });
    }else if (OpName == "Selu") {
       ImportNodeOneOut<mlir::ONNXSeluOp>(node, 1, 1, {
         {"alpha", (float)1.67326}
        ,{"gamma", (float)1.0507}
      });
    }else if (OpName == "SequenceAt") {
       ImportNodeOneOut<mlir::ONNXSequenceAtOp>(node, 2, 1, {
      });
    }else if (OpName == "SequenceConstruct") {
       ImportNodeOneOut<mlir::ONNXSequenceConstructOp>(node, 1, 1, {
      });
    }else if (OpName == "SequenceEmpty") {
       ImportNodeOneOut<mlir::ONNXSequenceEmptyOp>(node, 0, 1, {
      });
    }else if (OpName == "SequenceErase") {
       ImportNodeOneOut<mlir::ONNXSequenceEraseOp>(node, 2, 1, {
      });
    }else if (OpName == "SequenceInsert") {
       ImportNodeOneOut<mlir::ONNXSequenceInsertOp>(node, 3, 1, {
      });
    }else if (OpName == "SequenceLength") {
       ImportNodeOneOut<mlir::ONNXSequenceLengthOp>(node, 1, 1, {
      });
    }else if (OpName == "Shape") {
       ImportNodeOneOut<mlir::ONNXShapeOp>(node, 1, 1, {
      });
    }else if (OpName == "Shrink") {
       ImportNodeOneOut<mlir::ONNXShrinkOp>(node, 1, 1, {
         {"bias", (float)0.0}
        ,{"lambd", (float)0.5}
      });
    }else if (OpName == "Sigmoid") {
       ImportNodeOneOut<mlir::ONNXSigmoidOp>(node, 1, 1, {
      });
    }else if (OpName == "Sign") {
       ImportNodeOneOut<mlir::ONNXSignOp>(node, 1, 1, {
      });
    }else if (OpName == "Sin") {
       ImportNodeOneOut<mlir::ONNXSinOp>(node, 1, 1, {
      });
    }else if (OpName == "Sinh") {
       ImportNodeOneOut<mlir::ONNXSinhOp>(node, 1, 1, {
      });
    }else if (OpName == "Size") {
       ImportNodeOneOut<mlir::ONNXSizeOp>(node, 1, 1, {
      });
    }else if (OpName == "Slice") {
       ImportNodeOneOut<mlir::ONNXSliceOp>(node, 5, 1, {
      });
    }else if (OpName == "Softmax") {
       ImportNodeOneOut<mlir::ONNXSoftmaxOp>(node, 1, 1, {
         {"axis", 1}
      });
    }else if (OpName == "Softplus") {
       ImportNodeOneOut<mlir::ONNXSoftplusOp>(node, 1, 1, {
      });
    }else if (OpName == "Softsign") {
       ImportNodeOneOut<mlir::ONNXSoftsignOp>(node, 1, 1, {
      });
    }else if (OpName == "SpaceToDepth") {
       ImportNodeOneOut<mlir::ONNXSpaceToDepthOp>(node, 1, 1, {
      });
    }else if (OpName == "Split") {
       ImportNodeOneOut<mlir::ONNXSplitOp>(node, 1, 1, {
         {"axis", 0}
      });
    }else if (OpName == "SplitToSequence") {
       ImportNodeOneOut<mlir::ONNXSplitToSequenceOp>(node, 2, 1, {
         {"axis", 0}
        ,{"keepdims", 1}
      });
    }else if (OpName == "Sqrt") {
       ImportNodeOneOut<mlir::ONNXSqrtOp>(node, 1, 1, {
      });
    }else if (OpName == "Squeeze") {
       ImportNodeOneOut<mlir::ONNXSqueezeOp>(node, 1, 1, {
      });
    }else if (OpName == "StringNormalizer") {
       ImportNodeOneOut<mlir::ONNXStringNormalizerOp>(node, 1, 1, {
         {"case_change_action", "NONE"}
        ,{"is_case_sensitive", 0}
      });
    }else if (OpName == "Sub") {
       ImportNodeOneOut<mlir::ONNXSubOp>(node, 2, 1, {
      });
    }else if (OpName == "Sum") {
       ImportNodeOneOut<mlir::ONNXSumOp>(node, 1, 1, {
      });
    }else if (OpName == "Tan") {
       ImportNodeOneOut<mlir::ONNXTanOp>(node, 1, 1, {
      });
    }else if (OpName == "Tanh") {
       ImportNodeOneOut<mlir::ONNXTanhOp>(node, 1, 1, {
      });
    }else if (OpName == "TfIdfVectorizer") {
       ImportNodeOneOut<mlir::ONNXTfIdfVectorizerOp>(node, 1, 1, {
      });
    }else if (OpName == "ThresholdedRelu") {
       ImportNodeOneOut<mlir::ONNXThresholdedReluOp>(node, 1, 1, {
         {"alpha", (float)1.0}
      });
    }else if (OpName == "Tile") {
       ImportNodeOneOut<mlir::ONNXTileOp>(node, 2, 1, {
      });
    }else if (OpName == "TopK") {
       ImportNodeMultipleOuts<mlir::ONNXTopKOp>(node, 2, 2, {
         {"axis", -1}
        ,{"largest", 1}
        ,{"sorted", 1}
      });
    }else if (OpName == "Transpose") {
       ImportNodeOneOut<mlir::ONNXTransposeOp>(node, 1, 1, {
      });
    }else if (OpName == "Unique") {
       ImportNodeMultipleOuts<mlir::ONNXUniqueOp>(node, 1, 4, {
         {"sorted", 1}
      });
    }else if (OpName == "Unsqueeze") {
       ImportNodeOneOut<mlir::ONNXUnsqueezeOp>(node, 1, 1, {
         {"axes", std::vector<int64_t> {}}
      });
    }else if (OpName == "Upsample") {
       ImportNodeOneOut<mlir::ONNXUpsampleOp>(node, 2, 1, {
         {"mode", "nearest"}
      });
    }else if (OpName == "Where") {
       ImportNodeOneOut<mlir::ONNXWhereOp>(node, 3, 1, {
      });
    }else if (OpName == "Xor") {
       ImportNodeOneOut<mlir::ONNXXorOp>(node, 2, 1, {
      });
    }
