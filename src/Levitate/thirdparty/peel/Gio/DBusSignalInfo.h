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

peel_begin_header

namespace peel
{
namespace Gio
{
struct DBusSignalInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusSignalInfo> ()
{
  return g_dbus_signal_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::DBusSignalInfo>
{
  typedef RefPtr<Gio::DBusSignalInfo> OwnedType;
  typedef Gio::DBusSignalInfo * UnownedType;

  static Gio::DBusSignalInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::DBusSignalInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::DBusSignalInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::DBusSignalInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::DBusSignalInfo>::adopt_ref (reinterpret_cast<Gio::DBusSignalInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::DBusSignalInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::DBusSignalInfo *
  cast_for_create (Gio::DBusSignalInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::DBusSignalInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::DBusSignalInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::DBusSignalInfo, void>
{
  static void
  ref (Gio::DBusSignalInfo *ptr)
  {
    g_dbus_signal_info_ref (reinterpret_cast<::GDBusSignalInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::DBusSignalInfo *ptr)
  {
    g_dbus_signal_info_unref (reinterpret_cast<::GDBusSignalInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct DBusSignalInfo
{
private:
  DBusSignalInfo () = delete;
  DBusSignalInfo (const DBusSignalInfo &) = delete;
  DBusSignalInfo (DBusSignalInfo &&) = delete;
  ~DBusSignalInfo ();

public:
  int ref_count;
  const char *name;
private:
  ::GDBusArgInfo **args;
  ::GDBusAnnotationInfo **annotations;

public:
  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record DBusSignalInfo */

static_assert (sizeof (DBusSignalInfo) == sizeof (::GDBusSignalInfo),
               "DBusSignalInfo size mismatch");
static_assert (alignof (DBusSignalInfo) == alignof (::GDBusSignalInfo),
               "DBusSignalInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
