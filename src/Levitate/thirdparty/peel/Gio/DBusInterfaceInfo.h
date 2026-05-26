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
#include <peel/Gio/DBusInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct String;
} /* namespace GLib */

namespace Gio
{
struct DBusMethodInfo;
struct DBusPropertyInfo;
struct DBusSignalInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusInterface::Info> ()
{
  return g_dbus_interface_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::DBusInterface::Info>
{
  typedef RefPtr<Gio::DBusInterface::Info> OwnedType;
  typedef Gio::DBusInterface::Info * UnownedType;

  static Gio::DBusInterface::Info *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::DBusInterface::Info *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::DBusInterface::Info * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::DBusInterface::Info>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::DBusInterface::Info>::adopt_ref (reinterpret_cast<Gio::DBusInterface::Info *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::DBusInterface::Info> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::DBusInterface::Info *
  cast_for_create (Gio::DBusInterface::Info * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::DBusInterface::Info>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::DBusInterface::Info> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::DBusInterface::Info, void>
{
  static void
  ref (Gio::DBusInterface::Info *ptr)
  {
    g_dbus_interface_info_ref (reinterpret_cast<::GDBusInterfaceInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::DBusInterface::Info *ptr)
  {
    g_dbus_interface_info_unref (reinterpret_cast<::GDBusInterfaceInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct DBusInterface::Info
{
private:
  Info () = delete;
  Info (const Info &) = delete;
  Info (Info &&) = delete;
  ~Info ();

public:
  int ref_count;
  const char *name;
private:
  ::GDBusMethodInfo **methods;
  ::GDBusSignalInfo **signals;
  ::GDBusPropertyInfo **properties;
  ::GDBusAnnotationInfo **annotations;

public:
  void
  cache_build () noexcept
  {
    ::GDBusInterfaceInfo *_peel_this = reinterpret_cast<::GDBusInterfaceInfo *> (this);
    g_dbus_interface_info_cache_build (_peel_this);
  }

  void
  cache_release () noexcept
  {
    ::GDBusInterfaceInfo *_peel_this = reinterpret_cast<::GDBusInterfaceInfo *> (this);
    g_dbus_interface_info_cache_release (_peel_this);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  generate_xml (unsigned indent, GLib::String *string_builder) noexcept
  {
    ::GDBusInterfaceInfo *_peel_this = reinterpret_cast<::GDBusInterfaceInfo *> (this);
    ::GString *_peel_string_builder = reinterpret_cast<::GString *> (string_builder);
    g_dbus_interface_info_generate_xml (_peel_this, indent, _peel_string_builder);
  }

  peel_nonnull_args (2)
  DBusMethodInfo *
  lookup_method (const char *name) noexcept
  {
    ::GDBusInterfaceInfo *_peel_this = reinterpret_cast<::GDBusInterfaceInfo *> (this);
    ::GDBusMethodInfo *_peel_return = g_dbus_interface_info_lookup_method (_peel_this, name);
    return reinterpret_cast<DBusMethodInfo *> (_peel_return);
  }

  peel_nonnull_args (2)
  DBusPropertyInfo *
  lookup_property (const char *name) noexcept
  {
    ::GDBusInterfaceInfo *_peel_this = reinterpret_cast<::GDBusInterfaceInfo *> (this);
    ::GDBusPropertyInfo *_peel_return = g_dbus_interface_info_lookup_property (_peel_this, name);
    return reinterpret_cast<DBusPropertyInfo *> (_peel_return);
  }

  peel_nonnull_args (2)
  DBusSignalInfo *
  lookup_signal (const char *name) noexcept
  {
    ::GDBusInterfaceInfo *_peel_this = reinterpret_cast<::GDBusInterfaceInfo *> (this);
    ::GDBusSignalInfo *_peel_return = g_dbus_interface_info_lookup_signal (_peel_this, name);
    return reinterpret_cast<DBusSignalInfo *> (_peel_return);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record DBusInterface::Info */

static_assert (sizeof (DBusInterface::Info) == sizeof (::GDBusInterfaceInfo),
               "DBusInterface::Info size mismatch");
static_assert (alignof (DBusInterface::Info) == alignof (::GDBusInterfaceInfo),
               "DBusInterface::Info align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
