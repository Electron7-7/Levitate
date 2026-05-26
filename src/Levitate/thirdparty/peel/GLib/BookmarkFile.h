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
class /* record */ BookmarkFile;
class /* record */ DateTime;
struct Error;
struct Quark;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::BookmarkFile> ()
{
  return g_bookmark_file_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::BookmarkFile>
{
  typedef UniquePtr<GLib::BookmarkFile> OwnedType;
  typedef const GLib::BookmarkFile * UnownedType;

  static const GLib::BookmarkFile *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::BookmarkFile *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::BookmarkFile * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::BookmarkFile>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::BookmarkFile>::adopt_ref (reinterpret_cast<GLib::BookmarkFile *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::BookmarkFile> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::BookmarkFile *
  cast_for_create (const GLib::BookmarkFile * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::BookmarkFile>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::BookmarkFile> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::BookmarkFile>
{
  static void
  free (GLib::BookmarkFile *ptr)
  {
    g_bookmark_file_free (reinterpret_cast<::GBookmarkFile *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ BookmarkFile
{
private:
  BookmarkFile () = delete;
  BookmarkFile (const BookmarkFile &) = delete;
  BookmarkFile (BookmarkFile &&) = delete;
  ~BookmarkFile ();

public:
  static peel::UniquePtr<BookmarkFile>
  create () noexcept
  {
    ::GBookmarkFile *_peel_return = g_bookmark_file_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<BookmarkFile>::adopt_ref (reinterpret_cast<BookmarkFile *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_application (const char *uri, const char *name, const char *exec) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_add_application (_peel_this, uri, name, exec);
  }

  peel_nonnull_args (2, 3)
  void
  add_group (const char *uri, const char *group) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_add_group (_peel_this, uri, group);
  }

  peel::UniquePtr<BookmarkFile>
  copy () noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GBookmarkFile *_peel_return = g_bookmark_file_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<BookmarkFile>::adopt_ref (reinterpret_cast<BookmarkFile *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_nonnull_args (2)
  time_t
  get_added (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    time_t _peel_return = g_bookmark_file_get_added (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2)
  DateTime *
  get_added_date_time (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    ::GDateTime *_peel_return = g_bookmark_file_get_added_date_time (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<DateTime *> (_peel_return);
  }

  peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 3)
  bool
  get_app_info (const char *uri, const char *name, peel::String *exec, unsigned *count, time_t *stamp, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    gchar *_peel_exec;
    guint *_peel_count = reinterpret_cast<guint *> (count);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_get_app_info (_peel_this, uri, name, exec ? &_peel_exec : nullptr, _peel_count, stamp, &_peel_error);
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
        if (exec)
          *exec = peel::String::adopt_string (_peel_exec);
      }
    return !!_peel_return;
  }

  peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 3)
  bool
  get_application_info (const char *uri, const char *name, peel::String *exec, unsigned *count, DateTime **stamp, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    char *_peel_exec;
    unsigned int *_peel_count = reinterpret_cast<unsigned int *> (count);
    ::GDateTime **_peel_stamp = reinterpret_cast<::GDateTime **> (stamp);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_get_application_info (_peel_this, uri, name, exec ? &_peel_exec : nullptr, _peel_count, _peel_stamp, &_peel_error);
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
        if (exec)
          *exec = peel::String::adopt_string (_peel_exec);
      }
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::UniquePtr<peel::String[]>
  get_applications (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_bookmark_file_get_applications (_peel_this, uri, &_peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_length);
  }

  peel_nonnull_args (2)
  peel::String
  get_description (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_bookmark_file_get_description (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::UniquePtr<peel::String[]>
  get_groups (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_bookmark_file_get_groups (_peel_this, uri, &_peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_length);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  bool
  get_icon (const char *uri, peel::String *href, peel::String *mime_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    gchar *_peel_href;
    gchar *_peel_mime_type;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_get_icon (_peel_this, uri, href ? &_peel_href : nullptr, mime_type ? &_peel_mime_type : nullptr, &_peel_error);
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
        if (href)
          *href = peel::String::adopt_string (_peel_href);
        if (mime_type)
          *mime_type = peel::String::adopt_string (_peel_mime_type);
      }
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  get_is_private (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_get_is_private (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::String
  get_mime_type (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_bookmark_file_get_mime_type (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  time_t
  get_modified (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    time_t _peel_return = g_bookmark_file_get_modified (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2)
  DateTime *
  get_modified_date_time (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    ::GDateTime *_peel_return = g_bookmark_file_get_modified_date_time (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<DateTime *> (_peel_return);
  }

  int
  get_size () noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    return g_bookmark_file_get_size (_peel_this);
  }

  peel::String
  get_title (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_bookmark_file_get_title (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel::UniquePtr<peel::String[]>
  get_uris () noexcept
  {
    gsize _peel_length;
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    gchar **_peel_return = g_bookmark_file_get_uris (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_length);
  }

  peel_nonnull_args (2)
  time_t
  get_visited (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    time_t _peel_return = g_bookmark_file_get_visited (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2)
  DateTime *
  get_visited_date_time (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    ::GDateTime *_peel_return = g_bookmark_file_get_visited_date_time (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<DateTime *> (_peel_return);
  }

  peel_nonnull_args (2, 3)
  bool
  has_application (const char *uri, const char *name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_has_application (_peel_this, uri, name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  has_group (const char *uri, const char *group, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_has_group (_peel_this, uri, group, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_item (const char *uri) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    gboolean _peel_return = g_bookmark_file_has_item (_peel_this, uri);
    return !!_peel_return;
  }

  bool
  load_from_data (peel::ArrayRef<const uint8_t> data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    const gchar *_peel_data = (_peel_length = data.size (), reinterpret_cast<const gchar *> (data.data ()));
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_load_from_data (_peel_this, _peel_data, _peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2)
  bool
  load_from_data_dirs (const char *file, peel::String *full_path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    gchar *_peel_full_path;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_load_from_data_dirs (_peel_this, file, full_path ? &_peel_full_path : nullptr, &_peel_error);
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
  load_from_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_load_from_file (_peel_this, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  move_item (const char *old_uri, const char *new_uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_move_item (_peel_this, old_uri, new_uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  remove_application (const char *uri, const char *name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_remove_application (_peel_this, uri, name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  remove_group (const char *uri, const char *group, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_remove_group (_peel_this, uri, group, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  remove_item (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_remove_item (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_added (const char *uri, time_t added) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_set_added (_peel_this, uri, added);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  set_added_date_time (const char *uri, DateTime *added) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GDateTime *_peel_added = reinterpret_cast<::GDateTime *> (added);
    g_bookmark_file_set_added_date_time (_peel_this, uri, _peel_added);
  }

  peel_nonnull_args (2, 3, 4)
  bool
  set_app_info (const char *uri, const char *name, const char *exec, int count, time_t stamp, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_set_app_info (_peel_this, uri, name, exec, count, stamp, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_in (6) peel_nonnull_args (2, 3, 4)
  bool
  set_application_info (const char *uri, const char *name, const char *exec, int count, DateTime *stamp, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GDateTime *_peel_stamp = reinterpret_cast<::GDateTime *> (stamp);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_set_application_info (_peel_this, uri, name, exec, count, _peel_stamp, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (3)
  void
  set_description (const char *uri, const char *description) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_set_description (_peel_this, uri, description);
  }

  peel_nonnull_args (2)
  void
  set_groups (const char *uri, peel::ArrayRef<const char *> groups) noexcept
  {
    gsize _peel_length;
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    const gchar **_peel_groups = (_peel_length = groups.size (), const_cast<const gchar **> (groups.data ()));
    g_bookmark_file_set_groups (_peel_this, uri, _peel_groups, _peel_length);
  }

  peel_nonnull_args (2, 4)
  void
  set_icon (const char *uri, const char *href, const char *mime_type) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_set_icon (_peel_this, uri, href, mime_type);
  }

  peel_nonnull_args (2)
  void
  set_is_private (const char *uri, bool is_private) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    gboolean _peel_is_private = static_cast<gboolean> (is_private);
    g_bookmark_file_set_is_private (_peel_this, uri, _peel_is_private);
  }

  peel_nonnull_args (2, 3)
  void
  set_mime_type (const char *uri, const char *mime_type) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_set_mime_type (_peel_this, uri, mime_type);
  }

  peel_nonnull_args (2)
  void
  set_modified (const char *uri, time_t modified) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_set_modified (_peel_this, uri, modified);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  set_modified_date_time (const char *uri, DateTime *modified) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GDateTime *_peel_modified = reinterpret_cast<::GDateTime *> (modified);
    g_bookmark_file_set_modified_date_time (_peel_this, uri, _peel_modified);
  }

  peel_nonnull_args (3)
  void
  set_title (const char *uri, const char *title) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_set_title (_peel_this, uri, title);
  }

  peel_nonnull_args (2)
  void
  set_visited (const char *uri, time_t visited) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    g_bookmark_file_set_visited (_peel_this, uri, visited);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  set_visited_date_time (const char *uri, DateTime *visited) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GDateTime *_peel_visited = reinterpret_cast<::GDateTime *> (visited);
    g_bookmark_file_set_visited_date_time (_peel_this, uri, _peel_visited);
  }

  peel::UniquePtr<uint8_t[]>
  to_data (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_bookmark_file_to_data (_peel_this, &_peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_length);
  }

  peel_nonnull_args (2)
  bool
  to_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBookmarkFile *_peel_this = reinterpret_cast<::GBookmarkFile *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_bookmark_file_to_file (_peel_this, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  static Quark
  error_quark () noexcept
  {
    ::GQuark _peel_return = g_bookmark_file_error_quark ();
    return static_cast<Quark> (_peel_return);
  }
}; /* record BookmarkFile */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
