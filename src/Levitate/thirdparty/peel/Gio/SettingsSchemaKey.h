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

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* record */ SettingsSchemaKey;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SettingsSchemaKey> ()
{
  return g_settings_schema_key_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::SettingsSchemaKey>
{
  typedef RefPtr<Gio::SettingsSchemaKey> OwnedType;
  typedef Gio::SettingsSchemaKey * UnownedType;

  static Gio::SettingsSchemaKey *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::SettingsSchemaKey *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::SettingsSchemaKey * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::SettingsSchemaKey>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::SettingsSchemaKey>::adopt_ref (reinterpret_cast<Gio::SettingsSchemaKey *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::SettingsSchemaKey> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::SettingsSchemaKey *
  cast_for_create (Gio::SettingsSchemaKey * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::SettingsSchemaKey>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::SettingsSchemaKey> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::SettingsSchemaKey, void>
{
  static void
  ref (Gio::SettingsSchemaKey *ptr)
  {
    g_settings_schema_key_ref (reinterpret_cast<::GSettingsSchemaKey *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::SettingsSchemaKey *ptr)
  {
    g_settings_schema_key_unref (reinterpret_cast<::GSettingsSchemaKey *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
class /* record */ SettingsSchemaKey
{
private:
  SettingsSchemaKey () = delete;
  SettingsSchemaKey (const SettingsSchemaKey &) = delete;
  SettingsSchemaKey (SettingsSchemaKey &&) = delete;
  ~SettingsSchemaKey ();

public:
  peel::RefPtr<GLib::Variant>
  get_default_value () noexcept
  {
    ::GSettingsSchemaKey *_peel_this = reinterpret_cast<::GSettingsSchemaKey *> (this);
    ::GVariant *_peel_return = g_settings_schema_key_get_default_value (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  const char *
  get_description () noexcept
  {
    ::GSettingsSchemaKey *_peel_this = reinterpret_cast<::GSettingsSchemaKey *> (this);
    return g_settings_schema_key_get_description (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GSettingsSchemaKey *_peel_this = reinterpret_cast<::GSettingsSchemaKey *> (this);
    return g_settings_schema_key_get_name (_peel_this);
  }

  peel::RefPtr<GLib::Variant>
  get_range () noexcept
  {
    ::GSettingsSchemaKey *_peel_this = reinterpret_cast<::GSettingsSchemaKey *> (this);
    ::GVariant *_peel_return = g_settings_schema_key_get_range (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  const char *
  get_summary () noexcept
  {
    ::GSettingsSchemaKey *_peel_this = reinterpret_cast<::GSettingsSchemaKey *> (this);
    return g_settings_schema_key_get_summary (_peel_this);
  }

  peel_returns_nonnull
  const GLib::Variant::Type *
  get_value_type () noexcept
  {
    ::GSettingsSchemaKey *_peel_this = reinterpret_cast<::GSettingsSchemaKey *> (this);
    const ::GVariantType *_peel_return = g_settings_schema_key_get_value_type (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  range_check (GLib::Variant *value) noexcept
  {
    ::GSettingsSchemaKey *_peel_this = reinterpret_cast<::GSettingsSchemaKey *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    gboolean _peel_return = g_settings_schema_key_range_check (_peel_this, _peel_value);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record SettingsSchemaKey */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
