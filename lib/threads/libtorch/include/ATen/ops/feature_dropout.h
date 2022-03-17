#pragma once

// @generated by tools/codegen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/feature_dropout_ops.h>

namespace at {


// aten::feature_dropout(Tensor input, float p, bool train) -> Tensor
TORCH_API inline at::Tensor feature_dropout(const at::Tensor & input, double p, bool train) {
    return at::_ops::feature_dropout::call(input, p, train);
}

// aten::feature_dropout_(Tensor(a!) self, float p, bool train) -> Tensor(a!)
TORCH_API inline at::Tensor & feature_dropout_(at::Tensor & self, double p, bool train) {
    return at::_ops::feature_dropout_::call(self, p, train);
}

}
