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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Binding;
enum class BindingFlags : std::underlying_type<::GBindingFlags>::type;
class Object;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::Binding> ()
{
  return g_binding_get_type ();
}


namespace GObject
{
class Binding : public Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Binding () = delete;
  Binding (const Binding &) = delete;
  Binding (Binding &&) = delete;
  Binding &
  operator = (const Binding &) = delete;
  Binding &
  operator = (Binding &&) = delete;
  ~Binding () = delete;
public:
  typedef BindingFlags Flags;

  peel::RefPtr<Object>
  dup_source () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    ::GObject *_peel_return = g_binding_dup_source (_peel_this);
    return peel::RefPtr<Object>::adopt_ref (reinterpret_cast<Object *> (_peel_return));
  }

  peel::RefPtr<Object>
  dup_target () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    ::GObject *_peel_return = g_binding_dup_target (_peel_this);
    return peel::RefPtr<Object>::adopt_ref (reinterpret_cast<Object *> (_peel_return));
  }

  Binding::Flags
  get_flags () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    ::GBindingFlags _peel_return = g_binding_get_flags (_peel_this);
    return static_cast<Binding::Flags> (_peel_return);
  }

  Object *
  get_source () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    ::GObject *_peel_return = g_binding_get_source (_peel_this);
    return reinterpret_cast<Object *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_source_property () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    return g_binding_get_source_property (_peel_this);
  }

  Object *
  get_target () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    ::GObject *_peel_return = g_binding_get_target (_peel_this);
    return reinterpret_cast<Object *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_target_property () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    return g_binding_get_target_property (_peel_this);
  }

  void
  unbind () noexcept
  {
    ::GBinding *_peel_this = reinterpret_cast<::GBinding *> (this);
    g_binding_unbind (_peel_this);
  }

  static peel::Property<Binding::Flags>
  prop_flags ()
  {
    return peel::Property<Binding::Flags> { "flags" };
  }

  static peel::Property<Object>
  prop_source ()
  {
    return peel::Property<Object> { "source" };
  }

  static peel::Property<const char *>
  prop_source_property ()
  {
    return peel::Property<const char *> { "source-property" };
  }

  static peel::Property<Object>
  prop_target ()
  {
    return peel::Property<Object> { "target" };
  }

  static peel::Property<const char *>
  prop_target_property ()
  {
    return peel::Property<const char *> { "target-property" };
  }
}; /* class Binding */

} /* namespace GObject */
} /* namespace peel */

peel_end_header
