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
struct Closure;
enum class ConnectFlags : std::underlying_type<::GConnectFlags>::type;
class Object;
class SignalGroup;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::SignalGroup> ()
{
  return g_signal_group_get_type ();
}


namespace GObject
{
class SignalGroup : public Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SignalGroup () = delete;
  SignalGroup (const SignalGroup &) = delete;
  SignalGroup (SignalGroup &&) = delete;
  SignalGroup &
  operator = (const SignalGroup &) = delete;
  SignalGroup &
  operator = (SignalGroup &&) = delete;
  ~SignalGroup () = delete;
public:

  static peel::RefPtr<SignalGroup>
  create (GObject::Type target_type) noexcept
  {
    ::GSignalGroup *_peel_return = g_signal_group_new (target_type);
    peel_assume (_peel_return);
    return peel::RefPtr<SignalGroup>::adopt_ref (reinterpret_cast<SignalGroup *> (_peel_return));
  }

  void
  block () noexcept
  {
    ::GSignalGroup *_peel_this = reinterpret_cast<::GSignalGroup *> (this);
    g_signal_group_block (_peel_this);
  }

  /* Unsupported for now: connect: explicitly skipped */
  static void
  connect (UnsupportedForNowToken);

  /* Unsupported for now: connect_after: explicitly skipped */
  static void
  connect_after (UnsupportedForNowToken);

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  connect_closure (const char *detailed_signal, Closure *closure, bool after) noexcept
  {
    ::GSignalGroup *_peel_this = reinterpret_cast<::GSignalGroup *> (this);
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    gboolean _peel_after = static_cast<gboolean> (after);
    g_signal_group_connect_closure (_peel_this, detailed_signal, _peel_closure, _peel_after);
  }

  /* Unsupported for now: connect_data: GCallback */
  static void
  connect_data (UnsupportedForNowToken);

  peel_nonnull_args (2)
  void
  connect_object (const char *detailed_signal, ::GCallback c_handler, void *object, ConnectFlags flags) noexcept
  {
    ::GSignalGroup *_peel_this = reinterpret_cast<::GSignalGroup *> (this);
    ::GConnectFlags _peel_flags = static_cast<::GConnectFlags> (flags);
    g_signal_group_connect_object (_peel_this, detailed_signal, c_handler, object, _peel_flags);
  }

  /* Unsupported for now: connect_swapped: explicitly skipped */
  static void
  connect_swapped (UnsupportedForNowToken);

  peel::RefPtr<Object>
  dup_target () noexcept
  {
    ::GSignalGroup *_peel_this = reinterpret_cast<::GSignalGroup *> (this);
    ::gpointer _peel_return = g_signal_group_dup_target (_peel_this);
    return peel::RefPtr<Object>::adopt_ref (reinterpret_cast<Object *> (_peel_return));
  }

  void
  set_target (Object *target) noexcept
  {
    ::GSignalGroup *_peel_this = reinterpret_cast<::GSignalGroup *> (this);
    ::gpointer _peel_target = reinterpret_cast<::gpointer> (target);
    g_signal_group_set_target (_peel_this, _peel_target);
  }

  void
  unblock () noexcept
  {
    ::GSignalGroup *_peel_this = reinterpret_cast<::GSignalGroup *> (this);
    g_signal_group_unblock (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_bind (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SignalGroup, void (Object *)>::_peel_connect_by_name (this, "bind", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_bind (HandlerObject *object, void (HandlerObject::*handler_method) (SignalGroup *, Object *), bool after = false) noexcept
  {
    return Signal<SignalGroup, void (Object *)>::_peel_connect_by_name (this, "bind", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unbind (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SignalGroup, void ()>::_peel_connect_by_name (this, "unbind", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unbind (HandlerObject *object, void (HandlerObject::*handler_method) (SignalGroup *), bool after = false) noexcept
  {
    return Signal<SignalGroup, void ()>::_peel_connect_by_name (this, "unbind", object, handler_method, after);
  }

  static peel::Property<Object>
  prop_target ()
  {
    return peel::Property<Object> { "target" };
  }

  static peel::Property<GObject::Type>
  prop_target_type ()
  {
    return peel::Property<GObject::Type> { "target-type" };
  }
}; /* class SignalGroup */

} /* namespace GObject */
} /* namespace peel */

peel_end_header
