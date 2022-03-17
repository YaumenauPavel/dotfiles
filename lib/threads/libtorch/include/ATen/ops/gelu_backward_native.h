#pragma once

// @generated by tools/codegen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>
#include <ATen/ops/gelu_backward_meta.h>

namespace at {
namespace native {

struct TORCH_API structured_gelu_backward_out_cpu : public at::meta::structured_gelu_backward {
void impl(const at::Tensor & grad_output, const at::Tensor & self, c10::string_view approximate, const at::Tensor & grad_input);
};
struct TORCH_API structured_gelu_backward_out_cuda : public at::meta::structured_gelu_backward {
void impl(const at::Tensor & grad_output, const at::Tensor & self, c10::string_view approximate, const at::Tensor & grad_input);
};
TORCH_API at::Tensor mkldnn_gelu_backward(const at::Tensor & grad_output, const at::Tensor & self, c10::string_view approximate="none");

} // namespace native
} // namespace at
