#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GLib/Variant.h>
#include <peel/Gio/Action.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class SimpleAction;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SimpleAction> ()
{
  return g_simple_action_get_type ();
}


namespace Gio
{
class SimpleAction : public Action
/* non-derivable */
/* extends GObject::Object */
/* implements Action */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SimpleAction () = delete;
  SimpleAction (const SimpleAction &) = delete;
  SimpleAction (SimpleAction &&) = delete;
  SimpleAction &
  operator = (const SimpleAction &) = delete;
  SimpleAction &
  operator = (SimpleAction &&) = delete;
  ~SimpleAction () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (1)
  static peel::RefPtr<SimpleAction>
  create (const char *name, const GLib::Variant::Type *parameter_type) noexcept
  {
    const ::GVariantType *_peel_parameter_type = reinterpret_cast<const ::GVariantType *> (parameter_type);
    ::GSimpleAction *_peel_return = g_simple_action_new (name, _peel_parameter_type);
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleAction>::adopt_ref (reinterpret_cast<SimpleAction *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (1)
  static peel::RefPtr<SimpleAction>
  create_stateful (const char *name, const GLib::Variant::Type *parameter_type, peel::FloatPtr<GLib::Variant> state) noexcept
  {
    const ::GVariantType *_peel_parameter_type = reinterpret_cast<const ::GVariantType *> (parameter_type);
    ::GVariant *_peel_state = reinterpret_cast<::GVariant *> (std::move (state).release_floating_ptr ());
    ::GSimpleAction *_peel_return = g_simple_action_new_stateful (name, _peel_parameter_type, _peel_state);
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleAction>::adopt_ref (reinterpret_cast<SimpleAction *> (_peel_return));
  }

  void
  set_enabled (bool enabled) noexcept
  {
    ::GSimpleAction *_peel_this = reinterpret_cast<::GSimpleAction *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    g_simple_action_set_enabled (_peel_this, _peel_enabled);
  }

  void
  set_state (peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GSimpleAction *_peel_this = reinterpret_cast<::GSimpleAction *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_simple_action_set_state (_peel_this, _peel_value);
  }

  peel_arg_in (2)
  void
  set_state_hint (GLib::Variant *state_hint) noexcept
  {
    ::GSimpleAction *_peel_this = reinterpret_cast<::GSimpleAction *> (this);
    ::GVariant *_peel_state_hint = reinterpret_cast<::GVariant *> (state_hint);
    g_simple_action_set_state_hint (_peel_this, _peel_state_hint);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SimpleAction, void (GLib::Variant *)>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (SimpleAction *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<SimpleAction, void (GLib::Variant *)>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_change_state (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SimpleAction, void (GLib::Variant *)>::_peel_connect_by_name (this, "change-state", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_change_state (HandlerObject *object, void (HandlerObject::*handler_method) (SimpleAction *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<SimpleAction, void (GLib::Variant *)>::_peel_connect_by_name (this, "change-state", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_enabled ()
  {
    return peel::Property<bool> { "enabled" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<GLib::Variant::Type>
  prop_parameter_type ()
  {
    return peel::Property<GLib::Variant::Type> { "parameter-type" };
  }

  static peel::Property<GLib::Variant>
  prop_state ()
  {
    return peel::Property<GLib::Variant> { "state" };
  }

  static peel::Property<GLib::Variant::Type>
  prop_state_type ()
  {
    return peel::Property<GLib::Variant::Type> { "state-type" };
  }
}; /* class SimpleAction */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
