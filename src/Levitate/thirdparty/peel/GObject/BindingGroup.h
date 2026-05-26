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
#include <peel/GObject/Binding.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Binding;
enum class BindingFlags : std::underlying_type<::GBindingFlags>::type;
class BindingGroup;
struct Closure;
class Object;
struct Value;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::BindingGroup> ()
{
  return g_binding_group_get_type ();
}


namespace GObject
{
class BindingGroup : public Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BindingGroup () = delete;
  BindingGroup (const BindingGroup &) = delete;
  BindingGroup (BindingGroup &&) = delete;
  BindingGroup &
  operator = (const BindingGroup &) = delete;
  BindingGroup &
  operator = (BindingGroup &&) = delete;
  ~BindingGroup () = delete;
public:

  static peel::RefPtr<BindingGroup>
  create () noexcept
  {
    ::GBindingGroup *_peel_return = g_binding_group_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<BindingGroup>::adopt_ref (reinterpret_cast<BindingGroup *> (_peel_return));
  }

  peel_nonnull_args (2, 3, 4)
  void
  bind (const char *source_property, Object *target, const char *target_property, Binding::Flags flags) noexcept
  {
    ::GBindingGroup *_peel_this = reinterpret_cast<::GBindingGroup *> (this);
    ::gpointer _peel_target = reinterpret_cast<::gpointer> (target);
    ::GBindingFlags _peel_flags = static_cast<::GBindingFlags> (flags);
    g_binding_group_bind (_peel_this, source_property, _peel_target, target_property, _peel_flags);
  }

  template<typename BindingTransformFunc>
  peel_nonnull_args (2, 3, 4)
  void
  bind_full (const char *source_property, Object *target, const char *target_property, Binding::Flags flags, ::GBindingTransformFunc transform_to, BindingTransformFunc &&transform_from) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_data_destroy;
    ::GBindingGroup *_peel_this = reinterpret_cast<::GBindingGroup *> (this);
    ::gpointer _peel_target = reinterpret_cast<::gpointer> (target);
    ::GBindingFlags _peel_flags = static_cast<::GBindingFlags> (flags);
    ::GBindingTransformFunc _peel_transform_from = peel::internals::CallbackHelper<gboolean, ::GBinding *, const ::GValue *, ::GValue *>::wrap_notified_callback (
      static_cast<BindingTransformFunc &&> (transform_from),
      [] (::GBinding *binding, const ::GValue *from_value, ::GValue *to_value, gpointer user_data) -> gboolean
      {
        BindingTransformFunc &_peel_captured_transform_from = *reinterpret_cast<typename std::remove_reference<BindingTransformFunc>::type *> (user_data);
        Binding *_peel_binding = reinterpret_cast<Binding *> (binding);
        const Value *_peel_from_value = reinterpret_cast<const Value *> (from_value);
        Value *_peel_to_value = reinterpret_cast<Value *> (to_value);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_transform_from) (_peel_binding, _peel_from_value, _peel_to_value);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_user_data_destroy, peel::internals::is_const_invocable<BindingTransformFunc, void, Binding *, const Value *, Value *>::value);
    g_binding_group_bind_full (_peel_this, source_property, _peel_target, target_property, _peel_flags, transform_to, _peel_transform_from, _peel_user_data, _peel_user_data_destroy);
  }

  peel_nonnull_args (2, 3, 4)
  void
  bind_with_closures (const char *source_property, Object *target, const char *target_property, Binding::Flags flags, peel::FloatPtr<Closure> transform_to, peel::FloatPtr<Closure> transform_from) noexcept
  {
    ::GBindingGroup *_peel_this = reinterpret_cast<::GBindingGroup *> (this);
    ::gpointer _peel_target = reinterpret_cast<::gpointer> (target);
    ::GBindingFlags _peel_flags = static_cast<::GBindingFlags> (flags);
    ::GClosure *_peel_transform_to = reinterpret_cast<::GClosure *> (std::move (transform_to).release_floating_ptr ());
    ::GClosure *_peel_transform_from = reinterpret_cast<::GClosure *> (std::move (transform_from).release_floating_ptr ());
    g_binding_group_bind_with_closures (_peel_this, source_property, _peel_target, target_property, _peel_flags, _peel_transform_to, _peel_transform_from);
  }

  Object *
  dup_source () noexcept
  {
    ::GBindingGroup *_peel_this = reinterpret_cast<::GBindingGroup *> (this);
    ::gpointer _peel_return = g_binding_group_dup_source (_peel_this);
    return reinterpret_cast<Object *> (_peel_return);
  }

  void
  set_source (Object *source) noexcept
  {
    ::GBindingGroup *_peel_this = reinterpret_cast<::GBindingGroup *> (this);
    ::gpointer _peel_source = reinterpret_cast<::gpointer> (source);
    g_binding_group_set_source (_peel_this, _peel_source);
  }

  static peel::Property<Object>
  prop_source ()
  {
    return peel::Property<Object> { "source" };
  }
}; /* class BindingGroup */

} /* namespace GObject */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Closure.h>
