#pragma once

// @generated by tools/codegen/gen.py from Operator.h

#include <c10/core/QScheme.h>
#include <tuple>
#include <vector>


// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
namespace c10 {

template<typename T>
class optional;
template<typename T>
class List;
class Stream;
class Scalar;
struct Storage;
struct TensorOptions;

}

namespace at {

class Tensor;
struct Dimname;
struct Generator;
using TensorList = c10::ArrayRef<Tensor>;
using DimnameList = c10::ArrayRef<Dimname>;
using c10::Stream;
using c10::Storage;
using c10::QScheme;
using c10::Scalar;
using c10::TensorOptions;

namespace _ops {


struct TORCH_API linalg_lstsq {
  using schema = ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> (const at::Tensor &, const at::Tensor &, c10::optional<double>, c10::optional<c10::string_view>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_lstsq")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_lstsq(Tensor self, Tensor b, float? rcond=None, *, str? driver=None) -> (Tensor solution, Tensor residuals, Tensor rank, Tensor singular_values)")
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> call(const at::Tensor & self, const at::Tensor & b, c10::optional<double> rcond, c10::optional<c10::string_view> driver);
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & b, c10::optional<double> rcond, c10::optional<c10::string_view> driver);
};

struct TORCH_API linalg_lstsq_out {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> (const at::Tensor &, const at::Tensor &, c10::optional<double>, c10::optional<c10::string_view>, at::Tensor &, at::Tensor &, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_lstsq")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_lstsq.out(Tensor self, Tensor b, float? rcond=None, *, str? driver=None, Tensor(a!) solution, Tensor(b!) residuals, Tensor(c!) rank, Tensor(d!) singular_values) -> (Tensor(a!) solution, Tensor(b!) residuals, Tensor(c!) rank, Tensor(d!) singular_values)")
  static ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> call(const at::Tensor & self, const at::Tensor & b, c10::optional<double> rcond, c10::optional<c10::string_view> driver, at::Tensor & solution, at::Tensor & residuals, at::Tensor & rank, at::Tensor & singular_values);
  static ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & b, c10::optional<double> rcond, c10::optional<c10::string_view> driver, at::Tensor & solution, at::Tensor & residuals, at::Tensor & rank, at::Tensor & singular_values);
};

}} // namespace at::_ops
