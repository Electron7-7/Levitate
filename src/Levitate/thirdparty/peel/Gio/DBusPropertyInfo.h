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
struct DBusPropertyInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusPropertyInfo> ()
{
  return g_dbus_property_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::DBusPropertyInfo>
{
  typedef RefPtr<Gio::DBusPropertyInfo> OwnedType;
  typedef Gio::DBusPropertyInfo * UnownedType;

  static Gio::DBusPropertyInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::DBusPropertyInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::DBusPropertyInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::DBusPropertyInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::DBusPropertyInfo>::adopt_ref (reinterpret_cast<Gio::DBusPropertyInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::DBusPropertyInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::DBusPropertyInfo *
  cast_for_create (Gio::DBusPropertyInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::DBusPropertyInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::DBusPropertyInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::DBusPropertyInfo, void>
{
  static void
  ref (Gio::DBusPropertyInfo *ptr)
  {
    g_dbus_property_info_ref (reinterpret_cast<::GDBusPropertyInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::DBusPropertyInfo *ptr)
  {
    g_dbus_property_info_unref (reinterpret_cast<::GDBusPropertyInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct DBusPropertyInfo
{
private:
  DBusPropertyInfo () = delete;
  DBusPropertyInfo (const DBusPropertyInfo &) = delete;
  DBusPropertyInfo (DBusPropertyInfo &&) = delete;
  ~DBusPropertyInfo ();

public:
  enum class Flags : std::underlying_type<::GDBusPropertyInfoFlags>::type;

  int ref_count;
  const char *name;
  const char *signature;
  DBusPropertyInfo::Flags flags;
private:
  ::GDBusAnnotationInfo **annotations;

public:
  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record DBusPropertyInfo */

static_assert (sizeof (DBusPropertyInfo) == sizeof (::GDBusPropertyInfo),
               "DBusPropertyInfo size mismatch");
static_assert (alignof (DBusPropertyInfo) == alignof (::GDBusPropertyInfo),
               "DBusPropertyInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
