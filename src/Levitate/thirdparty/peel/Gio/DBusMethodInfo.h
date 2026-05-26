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
struct DBusMethodInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMethodInfo> ()
{
  return g_dbus_method_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::DBusMethodInfo>
{
  typedef RefPtr<Gio::DBusMethodInfo> OwnedType;
  typedef Gio::DBusMethodInfo * UnownedType;

  static Gio::DBusMethodInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::DBusMethodInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::DBusMethodInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::DBusMethodInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::DBusMethodInfo>::adopt_ref (reinterpret_cast<Gio::DBusMethodInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::DBusMethodInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::DBusMethodInfo *
  cast_for_create (Gio::DBusMethodInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::DBusMethodInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::DBusMethodInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::DBusMethodInfo, void>
{
  static void
  ref (Gio::DBusMethodInfo *ptr)
  {
    g_dbus_method_info_ref (reinterpret_cast<::GDBusMethodInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::DBusMethodInfo *ptr)
  {
    g_dbus_method_info_unref (reinterpret_cast<::GDBusMethodInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct DBusMethodInfo
{
private:
  DBusMethodInfo () = delete;
  DBusMethodInfo (const DBusMethodInfo &) = delete;
  DBusMethodInfo (DBusMethodInfo &&) = delete;
  ~DBusMethodInfo ();

public:
  int ref_count;
  const char *name;
private:
  ::GDBusArgInfo **in_args;
  ::GDBusArgInfo **out_args;
  ::GDBusAnnotationInfo **annotations;

public:
  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record DBusMethodInfo */

static_assert (sizeof (DBusMethodInfo) == sizeof (::GDBusMethodInfo),
               "DBusMethodInfo size mismatch");
static_assert (alignof (DBusMethodInfo) == alignof (::GDBusMethodInfo),
               "DBusMethodInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
