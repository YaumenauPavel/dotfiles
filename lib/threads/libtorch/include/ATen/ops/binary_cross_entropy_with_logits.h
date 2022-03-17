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



#include <ATen/ops/binary_cross_entropy_with_logits_ops.h>

namespace at {


// aten::binary_cross_entropy_with_logits(Tensor self, Tensor target, Tensor? weight=None, Tensor? pos_weight=None, int reduction=Mean) -> Tensor
TORCH_API inline at::Tensor binary_cross_entropy_with_logits(const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight={}, const c10::optional<at::Tensor> & pos_weight={}, int64_t reduction=at::Reduction::Mean) {
    return at::_ops::binary_cross_entropy_with_logits::call(self, target, weight, pos_weight, reduction);
}

}
