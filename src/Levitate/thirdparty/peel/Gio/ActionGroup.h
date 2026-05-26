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
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* interface */ ActionGroup;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ActionGroup> ()
{
  return g_action_group_get_type ();
}


namespace Gio
{
class /* interface */ ActionGroup : public GObject::Object
/* requires GObject::Object */
{
private:
  ActionGroup () = delete;
  ActionGroup (const ActionGroup &) = delete;
  ActionGroup (ActionGroup &&) = delete;

  ActionGroup &
  operator = (const ActionGroup &) = delete;
  ActionGroup &
  operator = (ActionGroup &&) = delete;

protected:
  ~ActionGroup () = default;

public:

  peel_nonnull_args (2)
  void
  action_added (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    g_action_group_action_added (_peel_this, action_name);
  }

  peel_nonnull_args (2)
  void
  action_enabled_changed (const char *action_name, bool enabled) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    g_action_group_action_enabled_changed (_peel_this, action_name, _peel_enabled);
  }

  peel_nonnull_args (2)
  void
  action_removed (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    g_action_group_action_removed (_peel_this, action_name);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  action_state_changed (const char *action_name, GLib::Variant *state) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_state = reinterpret_cast<::GVariant *> (state);
    g_action_group_action_state_changed (_peel_this, action_name, _peel_state);
  }

  peel_nonnull_args (2)
  void
  activate_action (const char *action_name, peel::FloatPtr<GLib::Variant> parameter) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (std::move (parameter).release_floating_ptr ());
    g_action_group_activate_action (_peel_this, action_name, _peel_parameter);
  }

  peel_nonnull_args (2)
  void
  change_action_state (const char *action_name, peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_action_group_change_action_state (_peel_this, action_name, _peel_value);
  }

  peel_nonnull_args (2)
  bool
  get_action_enabled (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_return = g_action_group_get_action_enabled (_peel_this, action_name);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  const GLib::Variant::Type *
  get_action_parameter_type (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    const ::GVariantType *_peel_return = g_action_group_get_action_parameter_type (_peel_this, action_name);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_action_state (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_return = g_action_group_get_action_state (_peel_this, action_name);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_action_state_hint (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_return = g_action_group_get_action_state_hint (_peel_this, action_name);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  const GLib::Variant::Type *
  get_action_state_type (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    const ::GVariantType *_peel_return = g_action_group_get_action_state_type (_peel_this, action_name);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_action (const char *action_name) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_return = g_action_group_has_action (_peel_this, action_name);
    return !!_peel_return;
  }

  peel::Strv
  list_actions () noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gchar **_peel_return = g_action_group_list_actions (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (2, 3)
  bool
  query_action (const char *action_name, bool *enabled, const GLib::Variant::Type **parameter_type, const GLib::Variant::Type **state_type, peel::RefPtr<GLib::Variant> *state_hint, peel::RefPtr<GLib::Variant> *state) noexcept
  {
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_enabled;
    const ::GVariantType **_peel_parameter_type = reinterpret_cast<const ::GVariantType **> (parameter_type);
    const ::GVariantType **_peel_state_type = reinterpret_cast<const ::GVariantType **> (state_type);
    ::GVariant *_peel_state_hint;
    ::GVariant *_peel_state;
    gboolean _peel_return = g_action_group_query_action (_peel_this, action_name, &_peel_enabled, _peel_parameter_type, _peel_state_type, state_hint ? &_peel_state_hint : nullptr, state ? &_peel_state : nullptr);
    *enabled = !!_peel_enabled;
    if (state_hint)
      *state_hint = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_state_hint));
    if (state)
      *state = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_state));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::_peel_connect_by_name (this, "action-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_added (HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::_peel_connect_by_name (this, "action-added", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_added (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *)>::lookup ("action-added").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_added (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::lookup ("action-added").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_added (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *)>::lookup ("action-added") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_added (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::lookup ("action-added") .connect (this, detail, object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_enabled_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, bool)>::_peel_connect_by_name (this, "action-enabled-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_enabled_changed (HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *, bool), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, bool)>::_peel_connect_by_name (this, "action-enabled-changed", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_enabled_changed (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *, bool)>::lookup ("action-enabled-changed").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_enabled_changed (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, bool)>::lookup ("action-enabled-changed").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_enabled_changed (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *, bool), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *, bool)>::lookup ("action-enabled-changed") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_enabled_changed (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *, bool), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, bool)>::lookup ("action-enabled-changed") .connect (this, detail, object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::_peel_connect_by_name (this, "action-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_removed (HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::_peel_connect_by_name (this, "action-removed", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_removed (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *)>::lookup ("action-removed").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_removed (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::lookup ("action-removed").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_removed (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *)>::lookup ("action-removed") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_removed (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *)>::lookup ("action-removed") .connect (this, detail, object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_state_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, GLib::Variant *)>::_peel_connect_by_name (this, "action-state-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_state_changed (HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, GLib::Variant *)>::_peel_connect_by_name (this, "action-state-changed", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_state_changed (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *, GLib::Variant *)>::lookup ("action-state-changed").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_action_state_changed (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, GLib::Variant *)>::lookup ("action-state-changed").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_state_changed (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *, GLib::Variant *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<ActionGroup, void (const char *, GLib::Variant *)>::lookup ("action-state-changed") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_action_state_changed (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (ActionGroup *, const char *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<ActionGroup, void (const char *, GLib::Variant *)>::lookup ("action-state-changed") .connect (this, detail, object, handler_method, after);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_action_added (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    _peel_iface->action_added (_peel_this, action_name);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_action_added (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    _peel_iface->action_added (_peel_this, action_name);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_action_enabled_changed (const char *action_name, bool enabled) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    _peel_iface->action_enabled_changed (_peel_this, action_name, _peel_enabled);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_action_enabled_changed (const char *action_name, bool enabled) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    _peel_iface->action_enabled_changed (_peel_this, action_name, _peel_enabled);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_action_removed (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    _peel_iface->action_removed (_peel_this, action_name);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_action_removed (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    _peel_iface->action_removed (_peel_this, action_name);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_action_state_changed (const char *action_name, GLib::Variant *state) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_state = reinterpret_cast<::GVariant *> (state);
    _peel_iface->action_state_changed (_peel_this, action_name, _peel_state);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  default_vfunc_action_state_changed (const char *action_name, GLib::Variant *state) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_state = reinterpret_cast<::GVariant *> (state);
    _peel_iface->action_state_changed (_peel_this, action_name, _peel_state);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_activate_action (const char *action_name, peel::FloatPtr<GLib::Variant> parameter) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (std::move (parameter).release_floating_ptr ());
    _peel_iface->activate_action (_peel_this, action_name, _peel_parameter);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_activate_action (const char *action_name, peel::FloatPtr<GLib::Variant> parameter) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (std::move (parameter).release_floating_ptr ());
    _peel_iface->activate_action (_peel_this, action_name, _peel_parameter);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_change_action_state (const char *action_name, peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    _peel_iface->change_action_state (_peel_this, action_name, _peel_value);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_change_action_state (const char *action_name, peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    _peel_iface->change_action_state (_peel_this, action_name, _peel_value);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_get_action_enabled (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_return = _peel_iface->get_action_enabled (_peel_this, action_name);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_get_action_enabled (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_return = _peel_iface->get_action_enabled (_peel_this, action_name);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  const GLib::Variant::Type *
  parent_vfunc_get_action_parameter_type (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_action_parameter_type (_peel_this, action_name);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  peel_nonnull_args (2)
  const GLib::Variant::Type *
  default_vfunc_get_action_parameter_type (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_action_parameter_type (_peel_this, action_name);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  parent_vfunc_get_action_state (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_return = _peel_iface->get_action_state (_peel_this, action_name);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  default_vfunc_get_action_state (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_return = _peel_iface->get_action_state (_peel_this, action_name);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  parent_vfunc_get_action_state_hint (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_return = _peel_iface->get_action_state_hint (_peel_this, action_name);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  default_vfunc_get_action_state_hint (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    ::GVariant *_peel_return = _peel_iface->get_action_state_hint (_peel_this, action_name);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  const GLib::Variant::Type *
  parent_vfunc_get_action_state_type (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_action_state_type (_peel_this, action_name);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  peel_nonnull_args (2)
  const GLib::Variant::Type *
  default_vfunc_get_action_state_type (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_action_state_type (_peel_this, action_name);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_has_action (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_return = _peel_iface->has_action (_peel_this, action_name);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_has_action (const char *action_name) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_return = _peel_iface->has_action (_peel_this, action_name);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::Strv
  parent_vfunc_list_actions () noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gchar **_peel_return = _peel_iface->list_actions (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  default_vfunc_list_actions () noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gchar **_peel_return = _peel_iface->list_actions (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_query_action (const char *action_name, bool *enabled, const GLib::Variant::Type **parameter_type, const GLib::Variant::Type **state_type, peel::RefPtr<GLib::Variant> *state_hint, peel::RefPtr<GLib::Variant> *state) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ActionGroup> ())->peek_parent ());
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_enabled;
    const ::GVariantType **_peel_parameter_type = reinterpret_cast<const ::GVariantType **> (parameter_type);
    const ::GVariantType **_peel_state_type = reinterpret_cast<const ::GVariantType **> (state_type);
    ::GVariant *_peel_state_hint;
    ::GVariant *_peel_state;
    gboolean _peel_return = _peel_iface->query_action (_peel_this, action_name, &_peel_enabled, _peel_parameter_type, _peel_state_type, state_hint ? &_peel_state_hint : nullptr, state ? &_peel_state : nullptr);
    *enabled = !!_peel_enabled;
    if (state_hint)
      *state_hint = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_state_hint));
    if (state)
      *state = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_state));
    return !!_peel_return;
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (2, 3)
  bool
  default_vfunc_query_action (const char *action_name, bool *enabled, const GLib::Variant::Type **parameter_type, const GLib::Variant::Type **state_type, peel::RefPtr<GLib::Variant> *state_hint, peel::RefPtr<GLib::Variant> *state) noexcept
  {
    ::GActionGroupInterface *_peel_iface = reinterpret_cast<::GActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ActionGroup> ()));
    ::GActionGroup *_peel_this = reinterpret_cast<::GActionGroup *> (this);
    gboolean _peel_enabled;
    const ::GVariantType **_peel_parameter_type = reinterpret_cast<const ::GVariantType **> (parameter_type);
    const ::GVariantType **_peel_state_type = reinterpret_cast<const ::GVariantType **> (state_type);
    ::GVariant *_peel_state_hint;
    ::GVariant *_peel_state;
    gboolean _peel_return = _peel_iface->query_action (_peel_this, action_name, &_peel_enabled, _peel_parameter_type, _peel_state_type, state_hint ? &_peel_state_hint : nullptr, state ? &_peel_state : nullptr);
    *enabled = !!_peel_enabled;
    if (state_hint)
      *state_hint = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_state_hint));
    if (state)
      *state = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_state));
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GActionGroupInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_action_added ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->action_added = +[] (::GActionGroup *action_group, const gchar *action_name) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        _peel_this->DerivedClass::vfunc_action_added (action_name);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_action_enabled_changed ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->action_enabled_changed = +[] (::GActionGroup *action_group, const gchar *action_name, gboolean enabled) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        bool _peel_enabled = !!enabled;
        _peel_this->DerivedClass::vfunc_action_enabled_changed (action_name, _peel_enabled);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_action_removed ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->action_removed = +[] (::GActionGroup *action_group, const gchar *action_name) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        _peel_this->DerivedClass::vfunc_action_removed (action_name);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_action_state_changed ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->action_state_changed = +[] (::GActionGroup *action_group, const gchar *action_name, ::GVariant *state) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        GLib::Variant *_peel_state = reinterpret_cast<GLib::Variant *> (state);
        _peel_this->DerivedClass::vfunc_action_state_changed (action_name, _peel_state);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_activate_action ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->activate_action = +[] (::GActionGroup *action_group, const gchar *action_name, ::GVariant *parameter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        peel::FloatPtr<GLib::Variant> _peel_parameter = peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (parameter));
        _peel_this->DerivedClass::vfunc_activate_action (action_name, std::move (_peel_parameter));
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_change_action_state ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->change_action_state = +[] (::GActionGroup *action_group, const gchar *action_name, ::GVariant *value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        peel::FloatPtr<GLib::Variant> _peel_value = peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (value));
        _peel_this->DerivedClass::vfunc_change_action_state (action_name, std::move (_peel_value));
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_action_enabled ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->get_action_enabled = +[] (::GActionGroup *action_group, const gchar *action_name) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_action_enabled (action_name);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_action_parameter_type ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->get_action_parameter_type = +[] (::GActionGroup *action_group, const gchar *action_name) -> const ::GVariantType *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        const GLib::Variant::Type *_peel_return = _peel_this->DerivedClass::vfunc_get_action_parameter_type (action_name);
        return reinterpret_cast<const ::GVariantType *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_action_state ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->get_action_state = +[] (::GActionGroup *action_group, const gchar *action_name) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_get_action_state (action_name);
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_action_state_hint ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->get_action_state_hint = +[] (::GActionGroup *action_group, const gchar *action_name) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_get_action_state_hint (action_name);
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_action_state_type ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->get_action_state_type = +[] (::GActionGroup *action_group, const gchar *action_name) -> const ::GVariantType *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        const GLib::Variant::Type *_peel_return = _peel_this->DerivedClass::vfunc_get_action_state_type (action_name);
        return reinterpret_cast<const ::GVariantType *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_has_action ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->has_action = +[] (::GActionGroup *action_group, const gchar *action_name) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        bool _peel_return = _peel_this->DerivedClass::vfunc_has_action (action_name);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_list_actions ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->list_actions = +[] (::GActionGroup *action_group) -> gchar **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        peel::Strv _peel_return = _peel_this->DerivedClass::vfunc_list_actions ();
        return reinterpret_cast<gchar **> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_action ()
    {
      ::GActionGroupInterface *klass = reinterpret_cast<::GActionGroupInterface *> (this);
      klass->query_action = +[] (::GActionGroup *action_group, const gchar *action_name, gboolean *enabled, const ::GVariantType **parameter_type, const ::GVariantType **state_type, ::GVariant **state_hint, ::GVariant **state) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action_group);
        bool _peel_enabled;
        const GLib::Variant::Type **_peel_parameter_type = reinterpret_cast<const GLib::Variant::Type **> (parameter_type);
        const GLib::Variant::Type **_peel_state_type = reinterpret_cast<const GLib::Variant::Type **> (state_type);
        peel::RefPtr<GLib::Variant> _peel_state_hint;
        peel::RefPtr<GLib::Variant> _peel_state;
        bool _peel_return = _peel_this->DerivedClass::vfunc_query_action (action_name, &_peel_enabled, _peel_parameter_type, _peel_state_type, state_hint ? &_peel_state_hint : nullptr, state ? &_peel_state : nullptr);
        *enabled = static_cast<gboolean> (_peel_enabled);
        if (state_hint)
          *state_hint = reinterpret_cast<::GVariant *> (std::move (_peel_state_hint).release_ref ());
        if (state)
          *state = reinterpret_cast<::GVariant *> (std::move (_peel_state).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GActionGroupInterface),
                 "ActionGroup::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GActionGroupInterface),
                 "ActionGroup::Iface align mismatch");
}; /* interface ActionGroup */
static_assert (sizeof (ActionGroup) == sizeof (GObject::Object),
               "ActionGroup size mismatch");
static_assert (alignof (ActionGroup) == alignof (GObject::Object),
               "ActionGroup align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
