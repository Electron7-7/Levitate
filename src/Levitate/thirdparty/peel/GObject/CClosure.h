#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <glib-object.h>
#include <peel/GObject/Closure.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct CClosure;
struct Closure;
class Object;
class TypeInstance;
struct Value;
} /* namespace GObject */


namespace GObject
{
struct CClosure
{
private:
  CClosure () = delete;
  CClosure (const CClosure &) = delete;
  CClosure (CClosure &&) = delete;
  ~CClosure ();

public:
  Closure closure;
  void *callback;

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_BOOLEAN__BOXED_BOXED (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_BOOLEAN__BOXED_BOXED (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_BOOLEAN__BOXED_BOXEDv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_BOOLEAN__FLAGS (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_BOOLEAN__FLAGS (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_BOOLEAN__FLAGSv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_BOOLEAN__FLAGSv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_STRING__OBJECT_POINTER (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_STRING__OBJECT_POINTER (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_STRING__OBJECT_POINTERv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_STRING__OBJECT_POINTERv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__BOOLEAN (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__BOOLEAN (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__BOOLEANv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__BOOLEANv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__BOXED (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__BOXED (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__BOXEDv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__BOXEDv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__CHAR (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__CHAR (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__CHARv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__CHARv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__DOUBLE (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__DOUBLE (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__DOUBLEv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__DOUBLEv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__ENUM (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__ENUM (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__ENUMv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__ENUMv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__FLAGS (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__FLAGS (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__FLAGSv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__FLAGSv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__FLOAT (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__FLOAT (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__FLOATv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__FLOATv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__INT (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__INT (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__INTv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__INTv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__LONG (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__LONG (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__LONGv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__LONGv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__OBJECT (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__OBJECT (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__OBJECTv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__OBJECTv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__PARAM (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__PARAM (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__PARAMv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__PARAMv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__POINTER (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__POINTER (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__POINTERv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__POINTERv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__STRING (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__STRING (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__STRINGv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__STRINGv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__UCHAR (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__UCHAR (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__UCHARv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__UCHARv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__UINT (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__UINT (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__UINT_POINTER (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__UINT_POINTER (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__UINT_POINTERv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__UINT_POINTERv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__UINTv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__UINTv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__ULONG (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__ULONG (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__ULONGv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__ULONGv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__VARIANT (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__VARIANT (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__VARIANTv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__VARIANTv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_VOID__VOID (Closure *closure, Value *return_value, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_VOID__VOID (_peel_closure, _peel_return_value, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_VOID__VOIDv (Closure *closure, Value *return_value, TypeInstance *instance, va_list args, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_VOID__VOIDv (_peel_closure, _peel_return_value, _peel_instance, args, marshal_data, _peel_n_params, _peel_param_types);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (1, 2, 4)
  static void
  marshal_generic (Closure *closure, Value *return_gvalue, unsigned n_param_values, const Value *param_values, void *invocation_hint, void *marshal_data) noexcept
  {
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_gvalue = reinterpret_cast<::GValue *> (return_gvalue);
    const ::GValue *_peel_param_values = reinterpret_cast<const ::GValue *> (param_values);
    g_cclosure_marshal_generic (_peel_closure, _peel_return_gvalue, n_param_values, _peel_param_values, invocation_hint, marshal_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 3)
  static void
  marshal_generic_va (Closure *closure, Value *return_value, TypeInstance *instance, va_list args_list, void *marshal_data, peel::ArrayRef<GObject::Type> param_types) noexcept
  {
    int _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    ::gpointer _peel_instance = reinterpret_cast<::gpointer> (instance);
    GType *_peel_param_types = (_peel_n_params = param_types.size (), reinterpret_cast<GType *> (param_types.data ()));
    g_cclosure_marshal_generic_va (_peel_closure, _peel_return_value, _peel_instance, args_list, marshal_data, _peel_n_params, _peel_param_types);
  }

  /* Unsupported for now: new: GCallback */

  peel_nonnull_args (2) peel_returns_nonnull
  static Closure *
  new_object (::GCallback callback_func, Object *object) noexcept
  {
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GClosure *_peel_return = g_cclosure_new_object (callback_func, _peel_object);
    peel_assume (_peel_return);
    return reinterpret_cast<Closure *> (_peel_return);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  static Closure *
  new_object_swap (::GCallback callback_func, Object *object) noexcept
  {
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GClosure *_peel_return = g_cclosure_new_object_swap (callback_func, _peel_object);
    peel_assume (_peel_return);
    return reinterpret_cast<Closure *> (_peel_return);
  }

  /* Unsupported for now: new_swap: GCallback */
}; /* record CClosure */

static_assert (sizeof (CClosure) == sizeof (::GCClosure),
               "CClosure size mismatch");
static_assert (alignof (CClosure) == alignof (::GCClosure),
               "CClosure align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
