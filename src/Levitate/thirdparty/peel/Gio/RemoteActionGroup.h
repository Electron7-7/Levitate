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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/ActionGroup.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* interface */ RemoteActionGroup;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::RemoteActionGroup> ()
{
  return g_remote_action_group_get_type ();
}


namespace Gio
{
class /* interface */ RemoteActionGroup : public ActionGroup
/* requires ActionGroup */
{
private:
  RemoteActionGroup () = delete;
  RemoteActionGroup (const RemoteActionGroup &) = delete;
  RemoteActionGroup (RemoteActionGroup &&) = delete;

  RemoteActionGroup &
  operator = (const RemoteActionGroup &) = delete;
  RemoteActionGroup &
  operator = (RemoteActionGroup &&) = delete;

protected:
  ~RemoteActionGroup () = default;

public:

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  activate_action_full (const char *action_name, GLib::Variant *parameter, GLib::Variant *platform_data) noexcept
  {
    ::GRemoteActionGroup *_peel_this = reinterpret_cast<::GRemoteActionGroup *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (parameter);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    g_remote_action_group_activate_action_full (_peel_this, action_name, _peel_parameter, _peel_platform_data);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  change_action_state_full (const char *action_name, GLib::Variant *value, GLib::Variant *platform_data) noexcept
  {
    ::GRemoteActionGroup *_peel_this = reinterpret_cast<::GRemoteActionGroup *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    g_remote_action_group_change_action_state_full (_peel_this, action_name, _peel_value, _peel_platform_data);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  parent_vfunc_activate_action_full (const char *action_name, GLib::Variant *parameter, GLib::Variant *platform_data) noexcept
  {
    ::GRemoteActionGroupInterface *_peel_iface = reinterpret_cast<::GRemoteActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<RemoteActionGroup> ())->peek_parent ());
    ::GRemoteActionGroup *_peel_this = reinterpret_cast<::GRemoteActionGroup *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (parameter);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_iface->activate_action_full (_peel_this, action_name, _peel_parameter, _peel_platform_data);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  default_vfunc_activate_action_full (const char *action_name, GLib::Variant *parameter, GLib::Variant *platform_data) noexcept
  {
    ::GRemoteActionGroupInterface *_peel_iface = reinterpret_cast<::GRemoteActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<RemoteActionGroup> ()));
    ::GRemoteActionGroup *_peel_this = reinterpret_cast<::GRemoteActionGroup *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (parameter);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_iface->activate_action_full (_peel_this, action_name, _peel_parameter, _peel_platform_data);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_change_action_state_full (const char *action_name, GLib::Variant *value, GLib::Variant *platform_data) noexcept
  {
    ::GRemoteActionGroupInterface *_peel_iface = reinterpret_cast<::GRemoteActionGroupInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<RemoteActionGroup> ())->peek_parent ());
    ::GRemoteActionGroup *_peel_this = reinterpret_cast<::GRemoteActionGroup *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_iface->change_action_state_full (_peel_this, action_name, _peel_value, _peel_platform_data);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  default_vfunc_change_action_state_full (const char *action_name, GLib::Variant *value, GLib::Variant *platform_data) noexcept
  {
    ::GRemoteActionGroupInterface *_peel_iface = reinterpret_cast<::GRemoteActionGroupInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<RemoteActionGroup> ()));
    ::GRemoteActionGroup *_peel_this = reinterpret_cast<::GRemoteActionGroup *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_iface->change_action_state_full (_peel_this, action_name, _peel_value, _peel_platform_data);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GRemoteActionGroupInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_activate_action_full ()
    {
      ::GRemoteActionGroupInterface *klass = reinterpret_cast<::GRemoteActionGroupInterface *> (this);
      klass->activate_action_full = +[] (::GRemoteActionGroup *remote, const gchar *action_name, ::GVariant *parameter, ::GVariant *platform_data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (remote);
        GLib::Variant *_peel_parameter = reinterpret_cast<GLib::Variant *> (parameter);
        GLib::Variant *_peel_platform_data = reinterpret_cast<GLib::Variant *> (platform_data);
        _peel_this->DerivedClass::vfunc_activate_action_full (action_name, _peel_parameter, _peel_platform_data);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_change_action_state_full ()
    {
      ::GRemoteActionGroupInterface *klass = reinterpret_cast<::GRemoteActionGroupInterface *> (this);
      klass->change_action_state_full = +[] (::GRemoteActionGroup *remote, const gchar *action_name, ::GVariant *value, ::GVariant *platform_data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (remote);
        GLib::Variant *_peel_value = reinterpret_cast<GLib::Variant *> (value);
        GLib::Variant *_peel_platform_data = reinterpret_cast<GLib::Variant *> (platform_data);
        _peel_this->DerivedClass::vfunc_change_action_state_full (action_name, _peel_value, _peel_platform_data);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GRemoteActionGroupInterface),
                 "RemoteActionGroup::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GRemoteActionGroupInterface),
                 "RemoteActionGroup::Iface align mismatch");
}; /* interface RemoteActionGroup */
static_assert (sizeof (RemoteActionGroup) == sizeof (ActionGroup),
               "RemoteActionGroup size mismatch");
static_assert (alignof (RemoteActionGroup) == alignof (ActionGroup),
               "RemoteActionGroup align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
