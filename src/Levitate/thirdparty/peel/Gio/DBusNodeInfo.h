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
struct Error;
struct String;
} /* namespace GLib */

namespace Gio
{
struct DBusNodeInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusNodeInfo> ()
{
  return g_dbus_node_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::DBusNodeInfo>
{
  typedef RefPtr<Gio::DBusNodeInfo> OwnedType;
  typedef Gio::DBusNodeInfo * UnownedType;

  static Gio::DBusNodeInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::DBusNodeInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::DBusNodeInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::DBusNodeInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::DBusNodeInfo>::adopt_ref (reinterpret_cast<Gio::DBusNodeInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::DBusNodeInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::DBusNodeInfo *
  cast_for_create (Gio::DBusNodeInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::DBusNodeInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::DBusNodeInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::DBusNodeInfo, void>
{
  static void
  ref (Gio::DBusNodeInfo *ptr)
  {
    g_dbus_node_info_ref (reinterpret_cast<::GDBusNodeInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::DBusNodeInfo *ptr)
  {
    g_dbus_node_info_unref (reinterpret_cast<::GDBusNodeInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct DBusNodeInfo
{
private:
  DBusNodeInfo () = delete;
  DBusNodeInfo (const DBusNodeInfo &) = delete;
  DBusNodeInfo (DBusNodeInfo &&) = delete;
  ~DBusNodeInfo ();

public:
  int ref_count;
  const char *path;
private:
  ::GDBusInterfaceInfo **interfaces;
  ::GDBusNodeInfo **nodes;
  ::GDBusAnnotationInfo **annotations;

public:
  peel_nonnull_args (1)
  static peel::RefPtr<DBusNodeInfo>
  create_for_xml (const char *xml_data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GDBusNodeInfo *_peel_return = g_dbus_node_info_new_for_xml (xml_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusNodeInfo>::adopt_ref (reinterpret_cast<DBusNodeInfo *> (_peel_return));
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  generate_xml (unsigned indent, GLib::String *string_builder) noexcept
  {
    ::GDBusNodeInfo *_peel_this = reinterpret_cast<::GDBusNodeInfo *> (this);
    ::GString *_peel_string_builder = reinterpret_cast<::GString *> (string_builder);
    g_dbus_node_info_generate_xml (_peel_this, indent, _peel_string_builder);
  }

  peel_nonnull_args (2)
  DBusInterface::Info *
  lookup_interface (const char *name) noexcept
  {
    ::GDBusNodeInfo *_peel_this = reinterpret_cast<::GDBusNodeInfo *> (this);
    ::GDBusInterfaceInfo *_peel_return = g_dbus_node_info_lookup_interface (_peel_this, name);
    return reinterpret_cast<DBusInterface::Info *> (_peel_return);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record DBusNodeInfo */

static_assert (sizeof (DBusNodeInfo) == sizeof (::GDBusNodeInfo),
               "DBusNodeInfo size mismatch");
static_assert (alignof (DBusNodeInfo) == alignof (::GDBusNodeInfo),
               "DBusNodeInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
