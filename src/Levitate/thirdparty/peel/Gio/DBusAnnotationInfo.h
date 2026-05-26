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
struct DBusAnnotationInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusAnnotationInfo> ()
{
  return g_dbus_annotation_info_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::DBusAnnotationInfo>
{
  typedef RefPtr<Gio::DBusAnnotationInfo> OwnedType;
  typedef Gio::DBusAnnotationInfo * UnownedType;

  static Gio::DBusAnnotationInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::DBusAnnotationInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::DBusAnnotationInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::DBusAnnotationInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::DBusAnnotationInfo>::adopt_ref (reinterpret_cast<Gio::DBusAnnotationInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::DBusAnnotationInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::DBusAnnotationInfo *
  cast_for_create (Gio::DBusAnnotationInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::DBusAnnotationInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::DBusAnnotationInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::DBusAnnotationInfo, void>
{
  static void
  ref (Gio::DBusAnnotationInfo *ptr)
  {
    g_dbus_annotation_info_ref (reinterpret_cast<::GDBusAnnotationInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::DBusAnnotationInfo *ptr)
  {
    g_dbus_annotation_info_unref (reinterpret_cast<::GDBusAnnotationInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct DBusAnnotationInfo
{
private:
  DBusAnnotationInfo () = delete;
  DBusAnnotationInfo (const DBusAnnotationInfo &) = delete;
  DBusAnnotationInfo (DBusAnnotationInfo &&) = delete;
  ~DBusAnnotationInfo ();

public:
  int ref_count;
  const char *key;
  const char *value;
private:
  ::GDBusAnnotationInfo **annotations;

public:
  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  peel_nonnull_args (2)
  static const char *
  lookup (peel::ZTArrayRef<DBusAnnotationInfo *> annotations, const char *name) noexcept
  {
    ::GDBusAnnotationInfo **_peel_annotations = reinterpret_cast<::GDBusAnnotationInfo **> (annotations.data ());
    return g_dbus_annotation_info_lookup (_peel_annotations, name);
  }
}; /* record DBusAnnotationInfo */

static_assert (sizeof (DBusAnnotationInfo) == sizeof (::GDBusAnnotationInfo),
               "DBusAnnotationInfo size mismatch");
static_assert (alignof (DBusAnnotationInfo) == alignof (::GDBusAnnotationInfo),
               "DBusAnnotationInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
