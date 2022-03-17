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



#include <ATen/ops/bitwise_left_shift_ops.h>

namespace at {


// aten::bitwise_left_shift.Tensor(Tensor self, Tensor other) -> Tensor
TORCH_API inline at::Tensor bitwise_left_shift(const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::bitwise_left_shift_Tensor::call(self, other);
}

// aten::bitwise_left_shift.Tensor_out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & bitwise_left_shift_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::bitwise_left_shift_Tensor_out::call(self, other, out);
}

// aten::bitwise_left_shift.Tensor_out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & bitwise_left_shift_outf(const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
    return at::_ops::bitwise_left_shift_Tensor_out::call(self, other, out);
}

// aten::bitwise_left_shift.Tensor_Scalar(Tensor self, Scalar other) -> Tensor
TORCH_API inline at::Tensor bitwise_left_shift(const at::Tensor & self, const at::Scalar & other) {
    return at::_ops::bitwise_left_shift_Tensor_Scalar::call(self, other);
}

// aten::bitwise_left_shift.Tensor_Scalar_out(Tensor self, Scalar other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & bitwise_left_shift_out(at::Tensor & out, const at::Tensor & self, const at::Scalar & other) {
    return at::_ops::bitwise_left_shift_Tensor_Scalar_out::call(self, other, out);
}

// aten::bitwise_left_shift.Tensor_Scalar_out(Tensor self, Scalar other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & bitwise_left_shift_outf(const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
    return at::_ops::bitwise_left_shift_Tensor_Scalar_out::call(self, other, out);
}

// aten::bitwise_left_shift.Scalar_Tensor(Scalar self, Tensor other) -> Tensor
TORCH_API inline at::Tensor bitwise_left_shift(const at::Scalar & self, const at::Tensor & other) {
    return at::_ops::bitwise_left_shift_Scalar_Tensor::call(self, other);
}

}
