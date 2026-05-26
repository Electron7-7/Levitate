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
class /* record */ SettingsSchema;
class /* record */ SettingsSchemaKey;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SettingsSchema> ()
{
  return g_settings_schema_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::SettingsSchema>
{
  typedef RefPtr<Gio::SettingsSchema> OwnedType;
  typedef Gio::SettingsSchema * UnownedType;

  static Gio::SettingsSchema *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::SettingsSchema *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::SettingsSchema * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::SettingsSchema>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::SettingsSchema>::adopt_ref (reinterpret_cast<Gio::SettingsSchema *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::SettingsSchema> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::SettingsSchema *
  cast_for_create (Gio::SettingsSchema * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::SettingsSchema>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::SettingsSchema> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::SettingsSchema, void>
{
  static void
  ref (Gio::SettingsSchema *ptr)
  {
    g_settings_schema_ref (reinterpret_cast<::GSettingsSchema *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::SettingsSchema *ptr)
  {
    g_settings_schema_unref (reinterpret_cast<::GSettingsSchema *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
class /* record */ SettingsSchema
{
private:
  SettingsSchema () = delete;
  SettingsSchema (const SettingsSchema &) = delete;
  SettingsSchema (SettingsSchema &&) = delete;
  ~SettingsSchema ();

public:
  peel_returns_nonnull
  const char *
  get_id () noexcept
  {
    ::GSettingsSchema *_peel_this = reinterpret_cast<::GSettingsSchema *> (this);
    return g_settings_schema_get_id (_peel_this);
  }

  peel_nonnull_args (2)
  peel::RefPtr<SettingsSchemaKey>
  get_key (const char *name) noexcept
  {
    ::GSettingsSchema *_peel_this = reinterpret_cast<::GSettingsSchema *> (this);
    ::GSettingsSchemaKey *_peel_return = g_settings_schema_get_key (_peel_this, name);
    peel_assume (_peel_return);
    return peel::RefPtr<SettingsSchemaKey>::adopt_ref (reinterpret_cast<SettingsSchemaKey *> (_peel_return));
  }

  const char *
  get_path () noexcept
  {
    ::GSettingsSchema *_peel_this = reinterpret_cast<::GSettingsSchema *> (this);
    return g_settings_schema_get_path (_peel_this);
  }

  peel_nonnull_args (2)
  bool
  has_key (const char *name) noexcept
  {
    ::GSettingsSchema *_peel_this = reinterpret_cast<::GSettingsSchema *> (this);
    gboolean _peel_return = g_settings_schema_has_key (_peel_this, name);
    return !!_peel_return;
  }

  peel::Strv
  list_children () noexcept
  {
    ::GSettingsSchema *_peel_this = reinterpret_cast<::GSettingsSchema *> (this);
    gchar **_peel_return = g_settings_schema_list_children (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  list_keys () noexcept
  {
    ::GSettingsSchema *_peel_this = reinterpret_cast<::GSettingsSchema *> (this);
    gchar **_peel_return = g_settings_schema_list_keys (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record SettingsSchema */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/SettingsSchemaKey.h>
