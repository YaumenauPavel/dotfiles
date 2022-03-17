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



#include <ATen/ops/rand_ops.h>

namespace at {


// aten::rand.names(int[] size, *, Dimname[]? names, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, c10::optional<at::DimnameList> names, at::TensorOptions options={}) {
    return at::_ops::rand_names::call(size, names, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}

// aten::rand.names(int[] size, *, Dimname[]? names, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::rand_names::call(size, names, dtype, layout, device, pin_memory);
}

// aten::rand.generator_with_names(int[] size, *, Generator? generator, Dimname[]? names, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::DimnameList> names, at::TensorOptions options={}) {
    return at::_ops::rand_generator_with_names::call(size, generator, names, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}

// aten::rand.generator_with_names(int[] size, *, Generator? generator, Dimname[]? names, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::rand_generator_with_names::call(size, generator, names, dtype, layout, device, pin_memory);
}

// aten::rand(int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, at::TensorOptions options={}) {
    return at::_ops::rand::call(size, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}

// aten::rand(int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::rand::call(size, dtype, layout, device, pin_memory);
}

// aten::rand.generator(int[] size, *, Generator? generator, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, c10::optional<at::Generator> generator, at::TensorOptions options={}) {
    return at::_ops::rand_generator::call(size, generator, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}

// aten::rand.generator(int[] size, *, Generator? generator, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor rand(at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::rand_generator::call(size, generator, dtype, layout, device, pin_memory);
}

// aten::rand.out(int[] size, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & rand_out(at::Tensor & out, at::IntArrayRef size) {
    return at::_ops::rand_out::call(size, out);
}

// aten::rand.out(int[] size, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & rand_outf(at::IntArrayRef size, at::Tensor & out) {
    return at::_ops::rand_out::call(size, out);
}

// aten::rand.generator_out(int[] size, *, Generator? generator, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & rand_out(at::Tensor & out, at::IntArrayRef size, c10::optional<at::Generator> generator) {
    return at::_ops::rand_generator_out::call(size, generator, out);
}

// aten::rand.generator_out(int[] size, *, Generator? generator, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & rand_outf(at::IntArrayRef size, c10::optional<at::Generator> generator, at::Tensor & out) {
    return at::_ops::rand_generator_out::call(size, generator, out);
}

}
