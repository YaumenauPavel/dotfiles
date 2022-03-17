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



#include <ATen/ops/slice_backward_ops.h>

namespace at {


// aten::slice_backward(Tensor grad_output, int[] input_sizes, int dim, int start, int end, int step) -> Tensor
TORCH_API inline at::Tensor slice_backward(const at::Tensor & grad_output, at::IntArrayRef input_sizes, int64_t dim, int64_t start, int64_t end, int64_t step) {
    return at::_ops::slice_backward::call(grad_output, input_sizes, dim, start, end, step);
}

}
