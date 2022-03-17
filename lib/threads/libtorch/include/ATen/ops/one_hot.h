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



#include <ATen/ops/one_hot_ops.h>

namespace at {


// aten::one_hot(Tensor self, int num_classes=-1) -> Tensor
TORCH_API inline at::Tensor one_hot(const at::Tensor & self, int64_t num_classes=-1) {
    return at::_ops::one_hot::call(self, num_classes);
}

}
