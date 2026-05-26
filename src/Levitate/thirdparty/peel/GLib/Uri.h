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
class /* record */ HashTable;
struct Quark;
class /* record */ Uri;
enum class UriFlags : std::underlying_type<::GUriFlags>::type;
enum class UriHideFlags : std::underlying_type<::GUriHideFlags>::type;
enum class UriParamsFlags : std::underlying_type<::GUriParamsFlags>::type;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Uri> ()
{
  return g_uri_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Uri>
{
  typedef RefPtr<GLib::Uri> OwnedType;
  typedef GLib::Uri * UnownedType;

  static GLib::Uri *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Uri *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Uri * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Uri>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Uri>::adopt_ref (reinterpret_cast<GLib::Uri *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Uri> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Uri *
  cast_for_create (GLib::Uri * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Uri>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Uri> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Uri, void>
{
  static void
  ref (GLib::Uri *ptr)
  {
    g_uri_ref (reinterpret_cast<::GUri *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Uri *ptr)
  {
    g_uri_unref (reinterpret_cast<::GUri *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ Uri
{
private:
  Uri () = delete;
  Uri (const Uri &) = delete;
  Uri (Uri &&) = delete;
  ~Uri ();

public:
  const char *
  get_auth_params () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_auth_params (_peel_this);
  }

  UriFlags
  get_flags () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    ::GUriFlags _peel_return = g_uri_get_flags (_peel_this);
    return static_cast<UriFlags> (_peel_return);
  }

  const char *
  get_fragment () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_fragment (_peel_this);
  }

  const char *
  get_host () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_host (_peel_this);
  }

  const char *
  get_password () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_password (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_path () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_path (_peel_this);
  }

  int
  get_port () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_port (_peel_this);
  }

  const char *
  get_query () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_query (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_scheme () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_scheme (_peel_this);
  }

  const char *
  get_user () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_user (_peel_this);
  }

  const char *
  get_userinfo () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    return g_uri_get_userinfo (_peel_this);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Uri>
  parse_relative (const char *uri_ref, UriFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::GUri *_peel_return = g_uri_parse_relative (_peel_this, uri_ref, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Uri>::adopt_ref (reinterpret_cast<Uri *> (_peel_return));
  }

  /* ref bound as RefTraits */

  peel::String
  to_string () noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    char *_peel_return = g_uri_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  to_string_partial (UriHideFlags flags) noexcept
  {
    ::GUri *_peel_this = reinterpret_cast<::GUri *> (this);
    ::GUriHideFlags _peel_flags = static_cast<::GUriHideFlags> (flags);
    char *_peel_return = g_uri_to_string_partial (_peel_this, _peel_flags);
    return peel::String::adopt_string (_peel_return);
  }

  /* unref bound as RefTraits */

  peel_nonnull_args (2, 6)
  static peel::RefPtr<Uri>
  build (UriFlags flags, const char *scheme, const char *userinfo, const char *host, int port, const char *path, const char *query, const char *fragment) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    ::GUri *_peel_return = g_uri_build (_peel_flags, scheme, userinfo, host, port, path, query, fragment);
    peel_assume (_peel_return);
    return peel::RefPtr<Uri>::adopt_ref (reinterpret_cast<Uri *> (_peel_return));
  }

  peel_nonnull_args (2, 8)
  static peel::RefPtr<Uri>
  build_with_user (UriFlags flags, const char *scheme, const char *user, const char *password, const char *auth_params, const char *host, int port, const char *path, const char *query, const char *fragment) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    ::GUri *_peel_return = g_uri_build_with_user (_peel_flags, scheme, user, password, auth_params, host, port, path, query, fragment);
    peel_assume (_peel_return);
    return peel::RefPtr<Uri>::adopt_ref (reinterpret_cast<Uri *> (_peel_return));
  }

  static Quark
  error_quark () noexcept
  {
    ::GQuark _peel_return = g_uri_error_quark ();
    return static_cast<Quark> (_peel_return);
  }

  static peel::String
  escape_bytes (peel::ArrayRef<const uint8_t> unescaped, const char *reserved_chars_allowed) noexcept
  {
    gsize _peel_length;
    const guint8 *_peel_unescaped = (_peel_length = unescaped.size (), reinterpret_cast<const guint8 *> (unescaped.data ()));
    char *_peel_return = g_uri_escape_bytes (_peel_unescaped, _peel_length, reserved_chars_allowed);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1)
  static peel::String
  escape_string (const char *unescaped, const char *reserved_chars_allowed, bool allow_utf8) noexcept
  {
    gboolean _peel_allow_utf8 = static_cast<gboolean> (allow_utf8);
    char *_peel_return = g_uri_escape_string (unescaped, reserved_chars_allowed, _peel_allow_utf8);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1)
  static bool
  is_valid (const char *uri_string, UriFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_uri_is_valid (uri_string, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (6)
  static peel::String
  join (UriFlags flags, const char *scheme, const char *userinfo, const char *host, int port, const char *path, const char *query, const char *fragment) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    gchar *_peel_return = g_uri_join (_peel_flags, scheme, userinfo, host, port, path, query, fragment);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (8)
  static peel::String
  join_with_user (UriFlags flags, const char *scheme, const char *user, const char *password, const char *auth_params, const char *host, int port, const char *path, const char *query, const char *fragment) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    gchar *_peel_return = g_uri_join_with_user (_peel_flags, scheme, user, password, auth_params, host, port, path, query, fragment);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1)
  static peel::Strv
  list_extract_uris (const char *uri_list) noexcept
  {
    gchar **_peel_return = g_uri_list_extract_uris (uri_list);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Uri>
  parse (const char *uri_string, UriFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::GUri *_peel_return = g_uri_parse (uri_string, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Uri>::adopt_ref (reinterpret_cast<Uri *> (_peel_return));
  }

  peel_nonnull_args (1, 3)
  static peel::RefPtr<HashTable>
  parse_params (const char *params, gssize length, const char *separators, UriParamsFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriParamsFlags _peel_flags = static_cast<::GUriParamsFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::GHashTable *_peel_return = g_uri_parse_params (params, length, separators, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<HashTable>::adopt_ref (reinterpret_cast<HashTable *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::String
  parse_scheme (const char *uri) noexcept
  {
    char *_peel_return = g_uri_parse_scheme (uri);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1)
  static const char *
  peek_scheme (const char *uri) noexcept
  {
    return g_uri_peek_scheme (uri);
  }

  peel_nonnull_args (2)
  static peel::String
  resolve_relative (const char *base_uri_string, const char *uri_ref, UriFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_uri_resolve_relative (base_uri_string, uri_ref, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_arg_out (8) peel_arg_out (9) peel_nonnull_args (1)
  static bool
  split (const char *uri_ref, UriFlags flags, peel::String *scheme, peel::String *userinfo, peel::String *host, int *port, peel::String *path, peel::String *query, peel::String *fragment, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    gchar *_peel_scheme;
    gchar *_peel_userinfo;
    gchar *_peel_host;
    gint *_peel_port = reinterpret_cast<gint *> (port);
    gchar *_peel_path;
    gchar *_peel_query;
    gchar *_peel_fragment;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_uri_split (uri_ref, _peel_flags, scheme ? &_peel_scheme : nullptr, userinfo ? &_peel_userinfo : nullptr, host ? &_peel_host : nullptr, _peel_port, path ? &_peel_path : nullptr, query ? &_peel_query : nullptr, fragment ? &_peel_fragment : nullptr, &_peel_error);
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
        if (scheme)
          *scheme = peel::String::adopt_string (_peel_scheme);
        if (userinfo)
          *userinfo = peel::String::adopt_string (_peel_userinfo);
        if (host)
          *host = peel::String::adopt_string (_peel_host);
        if (path)
          *path = peel::String::adopt_string (_peel_path);
        if (query)
          *query = peel::String::adopt_string (_peel_query);
        if (fragment)
          *fragment = peel::String::adopt_string (_peel_fragment);
      }
    return !!_peel_return;
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (1)
  static bool
  split_network (const char *uri_string, UriFlags flags, peel::String *scheme, peel::String *host, int *port, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    gchar *_peel_scheme;
    gchar *_peel_host;
    gint *_peel_port = reinterpret_cast<gint *> (port);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_uri_split_network (uri_string, _peel_flags, scheme ? &_peel_scheme : nullptr, host ? &_peel_host : nullptr, _peel_port, &_peel_error);
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
        if (scheme)
          *scheme = peel::String::adopt_string (_peel_scheme);
        if (host)
          *host = peel::String::adopt_string (_peel_host);
      }
    return !!_peel_return;
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_arg_out (8) peel_arg_out (9) peel_arg_out (10) peel_arg_out (11) peel_nonnull_args (1)
  static bool
  split_with_user (const char *uri_ref, UriFlags flags, peel::String *scheme, peel::String *user, peel::String *password, peel::String *auth_params, peel::String *host, int *port, peel::String *path, peel::String *query, peel::String *fragment, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUriFlags _peel_flags = static_cast<::GUriFlags> (flags);
    gchar *_peel_scheme;
    gchar *_peel_user;
    gchar *_peel_password;
    gchar *_peel_auth_params;
    gchar *_peel_host;
    gint *_peel_port = reinterpret_cast<gint *> (port);
    gchar *_peel_path;
    gchar *_peel_query;
    gchar *_peel_fragment;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_uri_split_with_user (uri_ref, _peel_flags, scheme ? &_peel_scheme : nullptr, user ? &_peel_user : nullptr, password ? &_peel_password : nullptr, auth_params ? &_peel_auth_params : nullptr, host ? &_peel_host : nullptr, _peel_port, path ? &_peel_path : nullptr, query ? &_peel_query : nullptr, fragment ? &_peel_fragment : nullptr, &_peel_error);
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
        if (scheme)
          *scheme = peel::String::adopt_string (_peel_scheme);
        if (user)
          *user = peel::String::adopt_string (_peel_user);
        if (password)
          *password = peel::String::adopt_string (_peel_password);
        if (auth_params)
          *auth_params = peel::String::adopt_string (_peel_auth_params);
        if (host)
          *host = peel::String::adopt_string (_peel_host);
        if (path)
          *path = peel::String::adopt_string (_peel_path);
        if (query)
          *query = peel::String::adopt_string (_peel_query);
        if (fragment)
          *fragment = peel::String::adopt_string (_peel_fragment);
      }
    return !!_peel_return;
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Bytes>
  unescape_bytes (const char *escaped_string, gssize length, const char *illegal_characters, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_uri_unescape_bytes (escaped_string, length, illegal_characters, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  static peel::String
  unescape_segment (const char *escaped_string, const char *escaped_string_end, const char *illegal_characters) noexcept
  {
    char *_peel_return = g_uri_unescape_segment (escaped_string, escaped_string_end, illegal_characters);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1)
  static peel::String
  unescape_string (const char *escaped_string, const char *illegal_characters) noexcept
  {
    char *_peel_return = g_uri_unescape_string (escaped_string, illegal_characters);
    return peel::String::adopt_string (_peel_return);
  }
}; /* record Uri */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/GLib/HashTable.h>
