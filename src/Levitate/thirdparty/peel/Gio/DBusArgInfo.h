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
struct DBusArgInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusArgInfo> ()
{
  return g_dbus_arg_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::DBusArgInfo>
{
  typedef RefPtr<Gio::DBusArgInfo> OwnedType;
  typedef Gio::DBusArgInfo * UnownedType;

  static Gio::DBusArgInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::DBusArgInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::DBusArgInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::DBusArgInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::DBusArgInfo>::adopt_ref (reinterpret_cast<Gio::DBusArgInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::DBusArgInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::DBusArgInfo *
  cast_for_create (Gio::DBusArgInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::DBusArgInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::DBusArgInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::DBusArgInfo, void>
{
  static void
  ref (Gio::DBusArgInfo *ptr)
  {
    g_dbus_arg_info_ref (reinterpret_cast<::GDBusArgInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::DBusArgInfo *ptr)
  {
    g_dbus_arg_info_unref (reinterpret_cast<::GDBusArgInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct DBusArgInfo
{
private:
  DBusArgInfo () = delete;
  DBusArgInfo (const DBusArgInfo &) = delete;
  DBusArgInfo (DBusArgInfo &&) = delete;
  ~DBusArgInfo ();

public:
  int ref_count;
  const char *name;
  const char *signature;
private:
  ::GDBusAnnotationInfo **annotations;

public:
  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record DBusArgInfo */

static_assert (sizeof (DBusArgInfo) == sizeof (::GDBusArgInfo),
               "DBusArgInfo size mismatch");
static_assert (alignof (DBusArgInfo) == alignof (::GDBusArgInfo),
               "DBusArgInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
