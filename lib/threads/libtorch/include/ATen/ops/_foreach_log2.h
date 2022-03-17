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



#include <ATen/ops/_foreach_log2_ops.h>

namespace at {


// aten::_foreach_log2(Tensor[] tensors) -> Tensor[]
TORCH_API inline ::std::vector<at::Tensor> _foreach_log2(at::TensorList tensors) {
    return at::_ops::_foreach_log2::call(tensors);
}

// aten::_foreach_log2_(Tensor(a!)[] self) -> ()
TORCH_API inline void _foreach_log2_(at::TensorList self) {
    return at::_ops::_foreach_log2_::call(self);
}

}
