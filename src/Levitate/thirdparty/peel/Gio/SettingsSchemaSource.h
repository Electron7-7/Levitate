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
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* record */ SettingsSchema;
class /* record */ SettingsSchemaSource;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SettingsSchemaSource> ()
{
  return g_settings_schema_source_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::SettingsSchemaSource>
{
  typedef RefPtr<Gio::SettingsSchemaSource> OwnedType;
  typedef Gio::SettingsSchemaSource * UnownedType;

  static Gio::SettingsSchemaSource *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::SettingsSchemaSource *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::SettingsSchemaSource * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::SettingsSchemaSource>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::SettingsSchemaSource>::adopt_ref (reinterpret_cast<Gio::SettingsSchemaSource *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::SettingsSchemaSource> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::SettingsSchemaSource *
  cast_for_create (Gio::SettingsSchemaSource * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::SettingsSchemaSource>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::SettingsSchemaSource> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::SettingsSchemaSource, void>
{
  static void
  ref (Gio::SettingsSchemaSource *ptr)
  {
    g_settings_schema_source_ref (reinterpret_cast<::GSettingsSchemaSource *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::SettingsSchemaSource *ptr)
  {
    g_settings_schema_source_unref (reinterpret_cast<::GSettingsSchemaSource *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
class /* record */ SettingsSchemaSource
{
private:
  SettingsSchemaSource () = delete;
  SettingsSchemaSource (const SettingsSchemaSource &) = delete;
  SettingsSchemaSource (SettingsSchemaSource &&) = delete;
  ~SettingsSchemaSource ();

public:
  peel_arg_in (2) peel_nonnull_args (1)
  static peel::RefPtr<SettingsSchemaSource>
  create_from_directory (const char *directory, SettingsSchemaSource *parent, bool trusted, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSettingsSchemaSource *_peel_parent = reinterpret_cast<::GSettingsSchemaSource *> (parent);
    gboolean _peel_trusted = static_cast<gboolean> (trusted);
    ::GError *_peel_error = nullptr;
    ::GSettingsSchemaSource *_peel_return = g_settings_schema_source_new_from_directory (directory, _peel_parent, _peel_trusted, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SettingsSchemaSource>::adopt_ref (reinterpret_cast<SettingsSchemaSource *> (_peel_return));
  }

  void
  list_schemas (bool recursive, peel::Strv *non_relocatable, peel::Strv *relocatable) noexcept
  {
    ::GSettingsSchemaSource *_peel_this = reinterpret_cast<::GSettingsSchemaSource *> (this);
    gboolean _peel_recursive = static_cast<gboolean> (recursive);
    gchar **_peel_non_relocatable;
    gchar **_peel_relocatable;
    g_settings_schema_source_list_schemas (_peel_this, _peel_recursive, &_peel_non_relocatable, &_peel_relocatable);
    *non_relocatable = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_non_relocatable));
    *relocatable = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_relocatable));
  }

  peel_nonnull_args (2)
  peel::RefPtr<SettingsSchema>
  lookup (const char *schema_id, bool recursive) noexcept
  {
    ::GSettingsSchemaSource *_peel_this = reinterpret_cast<::GSettingsSchemaSource *> (this);
    gboolean _peel_recursive = static_cast<gboolean> (recursive);
    ::GSettingsSchema *_peel_return = g_settings_schema_source_lookup (_peel_this, schema_id, _peel_recursive);
    return peel::RefPtr<SettingsSchema>::adopt_ref (reinterpret_cast<SettingsSchema *> (_peel_return));
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  static SettingsSchemaSource *
  get_default () noexcept
  {
    ::GSettingsSchemaSource *_peel_return = g_settings_schema_source_get_default ();
    return reinterpret_cast<SettingsSchemaSource *> (_peel_return);
  }
}; /* record SettingsSchemaSource */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/SettingsSchema.h>
