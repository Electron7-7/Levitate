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

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct String;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::String> ()
{
  return g_gstring_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::String>
{
  typedef UniquePtr<GLib::String> OwnedType;
  typedef const GLib::String * UnownedType;

  static const GLib::String *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::String *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::String * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::String>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::String>::adopt_ref (reinterpret_cast<GLib::String *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::String> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::String *
  cast_for_create (const GLib::String * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::String>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::String> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::String>
{
  static void
  free (GLib::String *ptr)
  {
    [](::GString*str){g_string_free(str,TRUE);} (reinterpret_cast<::GString *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct String
{
private:
  String () = delete;
  String (const String &) = delete;
  String (String &&) = delete;
  ~String ();

public:
  const char *str;
  size_t len;
  size_t allocated_len;

  static peel::UniquePtr<String>
  create (const char *init) noexcept
  {
    ::GString *_peel_return = g_string_new (init);
    peel_assume (_peel_return);
    return peel::UniquePtr<String>::adopt_ref (reinterpret_cast<String *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::UniquePtr<String>
  create_len (const char *init, gssize len) noexcept
  {
    ::GString *_peel_return = g_string_new_len (init, len);
    peel_assume (_peel_return);
    return peel::UniquePtr<String>::adopt_ref (reinterpret_cast<String *> (_peel_return));
  }

  static peel::UniquePtr<String>
  create_take (peel::String init) noexcept
  {
    gchar *_peel_init = std::move (init).release_string ();
    ::GString *_peel_return = g_string_new_take (_peel_init);
    peel_assume (_peel_return);
    return peel::UniquePtr<String>::adopt_ref (reinterpret_cast<String *> (_peel_return));
  }

  static peel::UniquePtr<String>
  sized_new (size_t dfl_size) noexcept
  {
    ::GString *_peel_return = g_string_sized_new (dfl_size);
    peel_assume (_peel_return);
    return peel::UniquePtr<String>::adopt_ref (reinterpret_cast<String *> (_peel_return));
  }

  peel_nonnull_args (2) peel_returns_nonnull
  String *
  append (const char *val) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_append (_peel_this, val);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  append_c (char c) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_append_c (_peel_this, c);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  String *
  append_len (const char *val, gssize len) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_append_len (_peel_this, val, len);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  append_printf (const char *format, Args ...args) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    g_string_append_printf (_peel_this, format, args...);
  }

  peel_returns_nonnull
  String *
  append_unichar (gunichar wc) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_append_unichar (_peel_this, wc);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (2, 3) peel_returns_nonnull
  String *
  append_uri_escaped (const char *unescaped, const char *reserved_chars_allowed, bool allow_utf8) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    gboolean _peel_allow_utf8 = static_cast<gboolean> (allow_utf8);
    ::GString *_peel_return = g_string_append_uri_escaped (_peel_this, unescaped, reserved_chars_allowed, _peel_allow_utf8);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  append_vprintf (const char *format, va_list args) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    g_string_append_vprintf (_peel_this, format, args);
  }

  peel_returns_nonnull
  String *
  ascii_down () noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_ascii_down (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  ascii_up () noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_ascii_up (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  String *
  assign (const char *rval) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_assign (_peel_this, rval);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel::UniquePtr<String>
  copy () noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<String>::adopt_ref (reinterpret_cast<String *> (_peel_return));
  }

  peel_returns_nonnull
  String *
  down () noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_down (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const String *v2) const noexcept
  {
    const ::GString *_peel_this = reinterpret_cast<const ::GString *> (this);
    const ::GString *_peel_v2 = reinterpret_cast<const ::GString *> (v2);
    gboolean _peel_return = g_string_equal (_peel_this, _peel_v2);
    return !!_peel_return;
  }

  peel_returns_nonnull
  String *
  erase (gssize pos, gssize len) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_erase (_peel_this, pos, len);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  /* Unsupported for now: free: explicitly skipped */

  static peel::String
  free_and_steal (peel::UniquePtr<String> string) noexcept
  {
    ::GString *_peel_string = reinterpret_cast<::GString *> (std::move (string).release_ref ());
    gchar *_peel_return = g_string_free_and_steal (_peel_string);
    return peel::String::adopt_string (_peel_return);
  }

  static peel::RefPtr<Bytes>
  free_to_bytes (peel::UniquePtr<String> string) noexcept
  {
    ::GString *_peel_string = reinterpret_cast<::GString *> (std::move (string).release_ref ());
    ::GBytes *_peel_return = g_string_free_to_bytes (_peel_string);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  unsigned
  hash () const noexcept
  {
    const ::GString *_peel_this = reinterpret_cast<const ::GString *> (this);
    return g_string_hash (_peel_this);
  }

  peel_nonnull_args (3) peel_returns_nonnull
  String *
  insert (gssize pos, const char *val) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_insert (_peel_this, pos, val);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  insert_c (gssize pos, char c) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_insert_c (_peel_this, pos, c);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (3) peel_returns_nonnull
  String *
  insert_len (gssize pos, const char *val, gssize len) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_insert_len (_peel_this, pos, val, len);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  insert_unichar (gssize pos, gunichar wc) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_insert_unichar (_peel_this, pos, wc);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (3) peel_returns_nonnull
  String *
  overwrite (size_t pos, const char *val) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_overwrite (_peel_this, pos, val);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (3) peel_returns_nonnull
  String *
  overwrite_len (size_t pos, const char *val, gssize len) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_overwrite_len (_peel_this, pos, val, len);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  String *
  prepend (const char *val) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_prepend (_peel_this, val);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  prepend_c (char c) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_prepend_c (_peel_this, c);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  String *
  prepend_len (const char *val, gssize len) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_prepend_len (_peel_this, val, len);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  prepend_unichar (gunichar wc) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_prepend_unichar (_peel_this, wc);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  printf (const char *format, Args ...args) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    g_string_printf (_peel_this, format, args...);
  }

  peel_nonnull_args (2, 3)
  unsigned
  replace (const char *find, const char *replace, unsigned limit) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    return g_string_replace (_peel_this, find, replace, limit);
  }

  peel_returns_nonnull
  String *
  set_size (size_t len) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_set_size (_peel_this, len);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  truncate (size_t len) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_truncate (_peel_this, len);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_returns_nonnull
  String *
  up () noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    ::GString *_peel_return = g_string_up (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<String *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  vprintf (const char *format, va_list args) noexcept
  {
    ::GString *_peel_this = reinterpret_cast<::GString *> (this);
    g_string_vprintf (_peel_this, format, args);
  }
}; /* record String */

static_assert (sizeof (String) == sizeof (::GString),
               "String size mismatch");
static_assert (alignof (String) == alignof (::GString),
               "String align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
