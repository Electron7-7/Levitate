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
#include <peel/GLib/Quark.h>
#include <peel/GLib/Variant.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
class /* record */ Variant;
} /* namespace GLib */

namespace GObject
{
struct Closure;
class Object;
struct Value;
} /* namespace GObject */

namespace Gio
{
class /* interface */ Action;
class Settings;
class SettingsBackend;
class /* record */ SettingsSchema;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Settings> ()
{
  return g_settings_get_type ();
}


namespace Gio
{
class Settings : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GSettings) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Settings () = delete;
  Settings (const Settings &) = delete;
  Settings (Settings &&) = delete;
  Settings &
  operator = (const Settings &) = delete;
  Settings &
  operator = (Settings &&) = delete;
protected:
  ~Settings () = default;
public:
  enum class BindFlags : std::underlying_type<::GSettingsBindFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<Settings>
  create (const char *schema_id) noexcept
  {
    ::GSettings *_peel_return = g_settings_new (schema_id);
    peel_assume (_peel_return);
    return peel::RefPtr<Settings>::adopt_ref (reinterpret_cast<Settings *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Settings>
  create_full (SettingsSchema *schema, SettingsBackend *backend, const char *path) noexcept
  {
    ::GSettingsSchema *_peel_schema = reinterpret_cast<::GSettingsSchema *> (schema);
    ::GSettingsBackend *_peel_backend = reinterpret_cast<::GSettingsBackend *> (backend);
    ::GSettings *_peel_return = g_settings_new_full (_peel_schema, _peel_backend, path);
    peel_assume (_peel_return);
    return peel::RefPtr<Settings>::adopt_ref (reinterpret_cast<Settings *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::RefPtr<Settings>
  create_with_backend (const char *schema_id, SettingsBackend *backend) noexcept
  {
    ::GSettingsBackend *_peel_backend = reinterpret_cast<::GSettingsBackend *> (backend);
    ::GSettings *_peel_return = g_settings_new_with_backend (schema_id, _peel_backend);
    peel_assume (_peel_return);
    return peel::RefPtr<Settings>::adopt_ref (reinterpret_cast<Settings *> (_peel_return));
  }

  peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<Settings>
  create_with_backend_and_path (const char *schema_id, SettingsBackend *backend, const char *path) noexcept
  {
    ::GSettingsBackend *_peel_backend = reinterpret_cast<::GSettingsBackend *> (backend);
    ::GSettings *_peel_return = g_settings_new_with_backend_and_path (schema_id, _peel_backend, path);
    peel_assume (_peel_return);
    return peel::RefPtr<Settings>::adopt_ref (reinterpret_cast<Settings *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::RefPtr<Settings>
  create_with_path (const char *schema_id, const char *path) noexcept
  {
    ::GSettings *_peel_return = g_settings_new_with_path (schema_id, path);
    peel_assume (_peel_return);
    return peel::RefPtr<Settings>::adopt_ref (reinterpret_cast<Settings *> (_peel_return));
  }

  static peel::StrvRef
  list_relocatable_schemas () noexcept
  {
    const gchar* const *_peel_return = g_settings_list_relocatable_schemas ();
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  static peel::StrvRef
  list_schemas () noexcept
  {
    const gchar* const *_peel_return = g_settings_list_schemas ();
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  static void
  sync () noexcept
  {
    g_settings_sync ();
  }

  peel_nonnull_args (1, 2)
  static void
  unbind (GObject::Object *object, const char *property) noexcept
  {
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    g_settings_unbind (_peel_object, property);
  }

  void
  apply () noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    g_settings_apply (_peel_this);
  }

  peel_nonnull_args (2, 3, 4)
  void
  bind (const char *key, GObject::Object *object, const char *property, Settings::BindFlags flags) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    ::GSettingsBindFlags _peel_flags = static_cast<::GSettingsBindFlags> (flags);
    g_settings_bind (_peel_this, key, _peel_object, property, _peel_flags);
  }

  template<typename SettingsBindSetMapping>
  peel_nonnull_args (2, 3, 4)
  void
  bind_with_mapping (const char *key, GObject::Object *object, const char *property, Settings::BindFlags flags, ::GSettingsBindGetMapping get_mapping, SettingsBindSetMapping &&set_mapping) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    ::GSettingsBindFlags _peel_flags = static_cast<::GSettingsBindFlags> (flags);
    ::GSettingsBindSetMapping _peel_set_mapping = peel::internals::CallbackHelper<::GVariant *, const ::GValue *, const ::GVariantType *>::wrap_notified_callback (
      static_cast<SettingsBindSetMapping &&> (set_mapping),
      [] (const ::GValue *value, const ::GVariantType *expected_type, gpointer user_data) -> ::GVariant *
      {
        SettingsBindSetMapping &_peel_captured_set_mapping = *reinterpret_cast<typename std::remove_reference<SettingsBindSetMapping>::type *> (user_data);
        const GObject::Value *_peel_value = reinterpret_cast<const GObject::Value *> (value);
        const GLib::Variant::Type *_peel_expected_type = reinterpret_cast<const GLib::Variant::Type *> (expected_type);
        peel::RefPtr<GLib::Variant> _peel_return = peel::internals::invoke_if_nonnull<peel::RefPtr<GLib::Variant>> (_peel_captured_set_mapping) (_peel_value, _peel_expected_type);
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<SettingsBindSetMapping, void, const GObject::Value *, const GLib::Variant::Type *>::value);
    g_settings_bind_with_mapping (_peel_this, key, _peel_object, property, _peel_flags, get_mapping, _peel_set_mapping, _peel_user_data, _peel_destroy);
  }

  peel_nonnull_args (2, 3, 4)
  void
  bind_with_mapping_closures (const char *key, GObject::Object *object, const char *property, Settings::BindFlags flags, peel::FloatPtr<GObject::Closure> get_mapping, peel::FloatPtr<GObject::Closure> set_mapping) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GSettingsBindFlags _peel_flags = static_cast<::GSettingsBindFlags> (flags);
    ::GClosure *_peel_get_mapping = reinterpret_cast<::GClosure *> (std::move (get_mapping).release_floating_ptr ());
    ::GClosure *_peel_set_mapping = reinterpret_cast<::GClosure *> (std::move (set_mapping).release_floating_ptr ());
    g_settings_bind_with_mapping_closures (_peel_this, key, _peel_object, property, _peel_flags, _peel_get_mapping, _peel_set_mapping);
  }

  peel_nonnull_args (2, 3, 4)
  void
  bind_writable (const char *key, GObject::Object *object, const char *property, bool inverted) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    gboolean _peel_inverted = static_cast<gboolean> (inverted);
    g_settings_bind_writable (_peel_this, key, _peel_object, property, _peel_inverted);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Action>
  create_action (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GAction *_peel_return = g_settings_create_action (_peel_this, key);
    peel_assume (_peel_return);
    return peel::RefPtr<Action>::adopt_ref (reinterpret_cast<Action *> (_peel_return));
  }

  void
  delay () noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    g_settings_delay (_peel_this);
  }

  /* Unsupported for now: get: unimplemented vararg mode variant-get */
  static void
  get (UnsupportedForNowToken);

  peel_nonnull_args (2)
  bool
  get_boolean (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_get_boolean (_peel_this, key);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<Settings>
  get_child (const char *name) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GSettings *_peel_return = g_settings_get_child (_peel_this, name);
    peel_assume (_peel_return);
    return peel::RefPtr<Settings>::adopt_ref (reinterpret_cast<Settings *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_default_value (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GVariant *_peel_return = g_settings_get_default_value (_peel_this, key);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  double
  get_double (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    return g_settings_get_double (_peel_this, key);
  }

  peel_nonnull_args (2)
  int
  get_enum (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    return g_settings_get_enum (_peel_this, key);
  }

  peel_nonnull_args (2)
  unsigned
  get_flags (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    return g_settings_get_flags (_peel_this, key);
  }

  bool
  get_has_unapplied () noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_get_has_unapplied (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  int
  get_int (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    return g_settings_get_int (_peel_this, key);
  }

  peel_nonnull_args (2)
  int64_t
  get_int64 (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    return g_settings_get_int64 (_peel_this, key);
  }

  template<typename SettingsGetMapping>
  peel_nonnull_args (2)
  void *
  get_mapped (const char *key, SettingsGetMapping &&mapping) noexcept
  {
    gpointer _peel_user_data;
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GSettingsGetMapping _peel_mapping = peel::internals::CallbackHelper<gboolean, ::GVariant *, gpointer *>::wrap_call_callback (
      static_cast<SettingsGetMapping &&> (mapping),
      [] (::GVariant *value, gpointer *result, gpointer user_data) -> gboolean
      {
        SettingsGetMapping &_peel_captured_mapping = *reinterpret_cast<typename std::remove_reference<SettingsGetMapping>::type *> (user_data);
        GLib::Variant *_peel_value = reinterpret_cast<GLib::Variant *> (value);
        bool _peel_return = _peel_captured_mapping (_peel_value, result);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<SettingsGetMapping, void, GLib::Variant *, void *>::value);
    return g_settings_get_mapped (_peel_this, key, _peel_mapping, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_range (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GVariant *_peel_return = g_settings_get_range (_peel_this, key);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::String
  get_string (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gchar *_peel_return = g_settings_get_string (_peel_this, key);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::Strv
  get_strv (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gchar **_peel_return = g_settings_get_strv (_peel_this, key);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  unsigned
  get_uint (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    return g_settings_get_uint (_peel_this, key);
  }

  peel_nonnull_args (2)
  uint64_t
  get_uint64 (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    return g_settings_get_uint64 (_peel_this, key);
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_user_value (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GVariant *_peel_return = g_settings_get_user_value (_peel_this, key);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_value (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GVariant *_peel_return = g_settings_get_value (_peel_this, key);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  is_writable (const char *name) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_is_writable (_peel_this, name);
    return !!_peel_return;
  }

  peel::Strv
  list_children () noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gchar **_peel_return = g_settings_list_children (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  list_keys () noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gchar **_peel_return = g_settings_list_keys (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  range_check (const char *key, GLib::Variant *value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    gboolean _peel_return = g_settings_range_check (_peel_this, key, _peel_value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  reset (const char *key) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    g_settings_reset (_peel_this, key);
  }

  void
  revert () noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    g_settings_revert (_peel_this);
  }

  template<typename... Args>
  peel_nonnull_args (2, 3)
  bool
  set (const char *key, const char *format, Args &&...args) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set (_peel_this, key, format, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_boolean (const char *key, bool value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    gboolean _peel_return = g_settings_set_boolean (_peel_this, key, _peel_value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_double (const char *key, double value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_double (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_enum (const char *key, int value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_enum (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_flags (const char *key, unsigned value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_flags (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_int (const char *key, int value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_int (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_int64 (const char *key, int64_t value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_int64 (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  set_string (const char *key, const char *value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_string (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_strv (const char *key, peel::StrvRef value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    const gchar* const *_peel_value = reinterpret_cast<const gchar* const *> (value.data ());
    gboolean _peel_return = g_settings_set_strv (_peel_this, key, _peel_value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_uint (const char *key, unsigned value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_uint (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_uint64 (const char *key, uint64_t value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = g_settings_set_uint64 (_peel_this, key, value);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_value (const char *key, peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    gboolean _peel_return = g_settings_set_value (_peel_this, key, _peel_value);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_change_event (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Settings, bool (peel::ArrayRef<GLib::Quark>, int)>::_peel_connect_by_name (this, "change-event", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_change_event (HandlerObject *object, bool (HandlerObject::*handler_method) (Settings *, peel::ArrayRef<GLib::Quark>, int), bool after = false) noexcept
  {
    return Signal<Settings, bool (peel::ArrayRef<GLib::Quark>, int)>::_peel_connect_by_name (this, "change-event", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Settings *, const char *), bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<Settings, void (const char *)>::lookup ("changed").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::lookup ("changed").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (Settings *, const char *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<Settings, void (const char *)>::lookup ("changed") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (Settings *, const char *), bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::lookup ("changed") .connect (this, detail, object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_writable_change_event (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Settings, bool (unsigned)>::_peel_connect_by_name (this, "writable-change-event", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_writable_change_event (HandlerObject *object, bool (HandlerObject::*handler_method) (Settings *, unsigned), bool after = false) noexcept
  {
    return Signal<Settings, bool (unsigned)>::_peel_connect_by_name (this, "writable-change-event", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_writable_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::_peel_connect_by_name (this, "writable-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_writable_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Settings *, const char *), bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::_peel_connect_by_name (this, "writable-changed", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_writable_changed (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<Settings, void (const char *)>::lookup ("writable-changed").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_writable_changed (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::lookup ("writable-changed").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_writable_changed (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (Settings *, const char *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<Settings, void (const char *)>::lookup ("writable-changed") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_writable_changed (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (Settings *, const char *), bool after = false) noexcept
  {
    return Signal<Settings, void (const char *)>::lookup ("writable-changed") .connect (this, detail, object, handler_method, after);
  }

  static peel::Property<SettingsBackend>
  prop_backend ()
  {
    return peel::Property<SettingsBackend> { "backend" };
  }

  static peel::Property<bool>
  prop_delay_apply ()
  {
    return peel::Property<bool> { "delay-apply" };
  }

  static peel::Property<bool>
  prop_has_unapplied ()
  {
    return peel::Property<bool> { "has-unapplied" };
  }

  static peel::Property<const char *>
  prop_path ()
  {
    return peel::Property<const char *> { "path" };
  }

  static peel::Property<const char *>
  prop_schema ()
  {
    return peel::Property<const char *> { "schema" };
  }

  static peel::Property<const char *>
  prop_schema_id ()
  {
    return peel::Property<const char *> { "schema-id" };
  }

  static peel::Property<SettingsSchema>
  prop_settings_schema ()
  {
    return peel::Property<SettingsSchema> { "settings-schema" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Settings> ());
    _peel_class->finalize (obj);
  }

  /* Unsupported for now: change_event: explicitly skipped */

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_changed (const char *key) noexcept
  {
    ::GSettingsClass *_peel_class = reinterpret_cast<::GSettingsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    _peel_class->changed (_peel_this, key);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_writable_change_event (GLib::Quark key) noexcept
  {
    ::GSettingsClass *_peel_class = reinterpret_cast<::GSettingsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    gboolean _peel_return = _peel_class->writable_change_event (_peel_this, key);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_writable_changed (const char *key) noexcept
  {
    ::GSettingsClass *_peel_class = reinterpret_cast<::GSettingsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettings *_peel_this = reinterpret_cast<::GSettings *> (this);
    _peel_class->writable_changed (_peel_this, key);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSettingsClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: change_event: explicitly skipped */

    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GSettingsClass *klass = reinterpret_cast<::GSettingsClass *> (this);
      klass->changed = +[] (::GSettings *settings, const gchar *key) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (settings);
        _peel_this->DerivedClass::vfunc_changed (key);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_writable_change_event ()
    {
      ::GSettingsClass *klass = reinterpret_cast<::GSettingsClass *> (this);
      klass->writable_change_event = +[] (::GSettings *settings, ::GQuark key) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (settings);
        GLib::Quark _peel_key = static_cast<GLib::Quark> (key);
        bool _peel_return = _peel_this->DerivedClass::vfunc_writable_change_event (_peel_key);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_writable_changed ()
    {
      ::GSettingsClass *klass = reinterpret_cast<::GSettingsClass *> (this);
      klass->writable_changed = +[] (::GSettings *settings, const gchar *key) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (settings);
        _peel_this->DerivedClass::vfunc_writable_changed (key);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSettingsClass),
                 "Settings::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSettingsClass),
                 "Settings::Class align mismatch");
}; /* class Settings */

static_assert (sizeof (Settings) == sizeof (::GSettings),
               "Settings size mismatch");
static_assert (alignof (Settings) == alignof (::GSettings),
               "Settings align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Closure.h>
#include <peel/Gio/Action.h>
