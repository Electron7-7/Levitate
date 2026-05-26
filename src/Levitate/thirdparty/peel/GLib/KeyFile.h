#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
class /* record */ KeyFile;
struct Quark;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::KeyFile> ()
{
  return g_key_file_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::KeyFile>
{
  typedef RefPtr<GLib::KeyFile> OwnedType;
  typedef GLib::KeyFile * UnownedType;

  static GLib::KeyFile *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::KeyFile *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::KeyFile * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::KeyFile>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::KeyFile>::adopt_ref (reinterpret_cast<GLib::KeyFile *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::KeyFile> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::KeyFile *
  cast_for_create (GLib::KeyFile * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::KeyFile>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::KeyFile> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::KeyFile, void>
{
  static void
  ref (GLib::KeyFile *ptr)
  {
    g_key_file_ref (reinterpret_cast<::GKeyFile *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::KeyFile *ptr)
  {
    g_key_file_unref (reinterpret_cast<::GKeyFile *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ KeyFile
{
private:
  KeyFile () = delete;
  KeyFile (const KeyFile &) = delete;
  KeyFile (KeyFile &&) = delete;
  ~KeyFile ();

public:
  enum class Flags : std::underlying_type<::GKeyFileFlags>::type;

  static peel::RefPtr<KeyFile>
  create () noexcept
  {
    ::GKeyFile *_peel_return = g_key_file_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<KeyFile>::adopt_ref (reinterpret_cast<KeyFile *> (_peel_return));
  }

  static void
  free (peel::RefPtr<KeyFile> key_file) noexcept
  {
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (std::move (key_file).release_ref ());
    g_key_file_free (_peel_key_file);
  }

  peel_nonnull_args (2, 3)
  bool
  get_boolean (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_get_boolean (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  /* Unsupported for now: get_boolean_list: array of bool */

  peel::String
  get_comment (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_key_file_get_comment (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2, 3)
  double
  get_double (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gdouble _peel_return = g_key_file_get_double (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2, 3)
  peel::UniquePtr<double[]>
  get_double_list (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gdouble *_peel_return = g_key_file_get_double_list (_peel_this, group_name, key, &_peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<double[]>::adopt_ref (reinterpret_cast<double *> (_peel_return), _peel_length);
  }

  peel_arg_out (2)
  peel::Strv
  get_groups (size_t *length) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    gchar **_peel_return = g_key_file_get_groups (_peel_this, _peel_length);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  int64_t
  get_int64 (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gint64 _peel_return = g_key_file_get_int64 (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2, 3)
  int
  get_integer (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_key_file_get_integer (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2, 3)
  peel::UniquePtr<int[]>
  get_integer_list (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gint *_peel_return = g_key_file_get_integer_list (_peel_this, group_name, key, &_peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<int[]>::adopt_ref (reinterpret_cast<int *> (_peel_return), _peel_length);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::Strv
  get_keys (const char *group_name, size_t *length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_key_file_get_keys (_peel_this, group_name, _peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  peel::String
  get_locale_for_key (const char *group_name, const char *key, const char *locale) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gchar *_peel_return = g_key_file_get_locale_for_key (_peel_this, group_name, key, locale);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2, 3)
  peel::String
  get_locale_string (const char *group_name, const char *key, const char *locale, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_key_file_get_locale_string (_peel_this, group_name, key, locale, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2, 3)
  peel::UniquePtr<peel::String[]>
  get_locale_string_list (const char *group_name, const char *key, const char *locale, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_key_file_get_locale_string_list (_peel_this, group_name, key, locale, &_peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_length);
  }

  peel::String
  get_start_group () noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gchar *_peel_return = g_key_file_get_start_group (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2, 3)
  peel::String
  get_string (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_key_file_get_string (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2, 3)
  peel::UniquePtr<peel::String[]>
  get_string_list (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_key_file_get_string_list (_peel_this, group_name, key, &_peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_length);
  }

  peel_nonnull_args (2, 3)
  uint64_t
  get_uint64 (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    guint64 _peel_return = g_key_file_get_uint64 (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2, 3)
  peel::String
  get_value (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_key_file_get_value (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_group (const char *group_name) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gboolean _peel_return = g_key_file_has_group (_peel_this, group_name);
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  has_key (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_has_key (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  load_from_bytes (Bytes *bytes, KeyFile::Flags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GKeyFileFlags _peel_flags = static_cast<::GKeyFileFlags> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_load_from_bytes (_peel_this, _peel_bytes, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  load_from_data (const char *data, size_t length, KeyFile::Flags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GKeyFileFlags _peel_flags = static_cast<::GKeyFileFlags> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_load_from_data (_peel_this, data, length, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2)
  bool
  load_from_data_dirs (const char *file, peel::String *full_path, KeyFile::Flags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gchar *_peel_full_path;
    ::GKeyFileFlags _peel_flags = static_cast<::GKeyFileFlags> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_load_from_data_dirs (_peel_this, file, full_path ? &_peel_full_path : nullptr, _peel_flags, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (full_path)
          *full_path = peel::String::adopt_string (_peel_full_path);
      }
    return !!_peel_return;
  }

  peel_arg_out (4) peel_nonnull_args (2)
  bool
  load_from_dirs (const char *file, peel::StrvRef search_dirs, peel::String *full_path, KeyFile::Flags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    const gchar **_peel_search_dirs = const_cast<const gchar **> (search_dirs.data ());
    gchar *_peel_full_path;
    ::GKeyFileFlags _peel_flags = static_cast<::GKeyFileFlags> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_load_from_dirs (_peel_this, file, _peel_search_dirs, full_path ? &_peel_full_path : nullptr, _peel_flags, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (full_path)
          *full_path = peel::String::adopt_string (_peel_full_path);
      }
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  load_from_file (const char *file, KeyFile::Flags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GKeyFileFlags _peel_flags = static_cast<::GKeyFileFlags> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_load_from_file (_peel_this, file, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  bool
  remove_comment (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_remove_comment (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  remove_group (const char *group_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_remove_group (_peel_this, group_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  remove_key (const char *group_name, const char *key, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_remove_key (_peel_this, group_name, key, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  save_to_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_save_to_file (_peel_this, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  void
  set_boolean (const char *group_name, const char *key, bool value) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    g_key_file_set_boolean (_peel_this, group_name, key, _peel_value);
  }

  /* Unsupported for now: set_boolean_list: array of bool */

  peel_nonnull_args (4)
  bool
  set_comment (const char *group_name, const char *key, const char *comment, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_key_file_set_comment (_peel_this, group_name, key, comment, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  void
  set_double (const char *group_name, const char *key, double value) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_double (_peel_this, group_name, key, value);
  }

  peel_nonnull_args (2, 3)
  void
  set_double_list (const char *group_name, const char *key, peel::ArrayRef<double> list) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gdouble *_peel_list = (_peel_length = list.size (), reinterpret_cast<gdouble *> (list.data ()));
    g_key_file_set_double_list (_peel_this, group_name, key, _peel_list, _peel_length);
  }

  peel_nonnull_args (2, 3)
  void
  set_int64 (const char *group_name, const char *key, int64_t value) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_int64 (_peel_this, group_name, key, value);
  }

  peel_nonnull_args (2, 3)
  void
  set_integer (const char *group_name, const char *key, int value) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_integer (_peel_this, group_name, key, value);
  }

  peel_nonnull_args (2, 3)
  void
  set_integer_list (const char *group_name, const char *key, peel::ArrayRef<int> list) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gint *_peel_list = (_peel_length = list.size (), reinterpret_cast<gint *> (list.data ()));
    g_key_file_set_integer_list (_peel_this, group_name, key, _peel_list, _peel_length);
  }

  void
  set_list_separator (char separator) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_list_separator (_peel_this, separator);
  }

  peel_nonnull_args (2, 3, 4, 5)
  void
  set_locale_string (const char *group_name, const char *key, const char *locale, const char *string) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_locale_string (_peel_this, group_name, key, locale, string);
  }

  peel_nonnull_args (2, 3, 4)
  void
  set_locale_string_list (const char *group_name, const char *key, const char *locale, peel::ArrayRef<const char * const> list) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    const gchar* const *_peel_list = (_peel_length = list.size (), reinterpret_cast<const gchar* const *> (list.data ()));
    g_key_file_set_locale_string_list (_peel_this, group_name, key, locale, _peel_list, _peel_length);
  }

  peel_nonnull_args (2, 3, 4)
  void
  set_string (const char *group_name, const char *key, const char *string) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_string (_peel_this, group_name, key, string);
  }

  peel_nonnull_args (2, 3)
  void
  set_string_list (const char *group_name, const char *key, peel::ArrayRef<const char * const> list) noexcept
  {
    gsize _peel_length;
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    const gchar* const *_peel_list = (_peel_length = list.size (), reinterpret_cast<const gchar* const *> (list.data ()));
    g_key_file_set_string_list (_peel_this, group_name, key, _peel_list, _peel_length);
  }

  peel_nonnull_args (2, 3)
  void
  set_uint64 (const char *group_name, const char *key, uint64_t value) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_uint64 (_peel_this, group_name, key, value);
  }

  peel_nonnull_args (2, 3, 4)
  void
  set_value (const char *group_name, const char *key, const char *value) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    g_key_file_set_value (_peel_this, group_name, key, value);
  }

  peel_arg_out (2)
  peel::String
  to_data (size_t *length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_this = reinterpret_cast<::GKeyFile *> (this);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_key_file_to_data (_peel_this, _peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  /* unref bound as RefTraits */

  static Quark
  error_quark () noexcept
  {
    ::GQuark _peel_return = g_key_file_error_quark ();
    return static_cast<Quark> (_peel_return);
  }
}; /* record KeyFile */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
