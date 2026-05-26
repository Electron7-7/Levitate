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
class /* record */ FileAttributeMatcher;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FileAttributeMatcher> ()
{
  return g_file_attribute_matcher_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::FileAttributeMatcher>
{
  typedef RefPtr<Gio::FileAttributeMatcher> OwnedType;
  typedef Gio::FileAttributeMatcher * UnownedType;

  static Gio::FileAttributeMatcher *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::FileAttributeMatcher *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::FileAttributeMatcher * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::FileAttributeMatcher>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::FileAttributeMatcher>::adopt_ref (reinterpret_cast<Gio::FileAttributeMatcher *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::FileAttributeMatcher> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::FileAttributeMatcher *
  cast_for_create (Gio::FileAttributeMatcher * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::FileAttributeMatcher>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::FileAttributeMatcher> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::FileAttributeMatcher, void>
{
  static void
  ref (Gio::FileAttributeMatcher *ptr)
  {
    g_file_attribute_matcher_ref (reinterpret_cast<::GFileAttributeMatcher *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::FileAttributeMatcher *ptr)
  {
    g_file_attribute_matcher_unref (reinterpret_cast<::GFileAttributeMatcher *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
class /* record */ FileAttributeMatcher
{
private:
  FileAttributeMatcher () = delete;
  FileAttributeMatcher (const FileAttributeMatcher &) = delete;
  FileAttributeMatcher (FileAttributeMatcher &&) = delete;
  ~FileAttributeMatcher ();

public:
  peel_nonnull_args (1)
  static peel::RefPtr<FileAttributeMatcher>
  create (const char *attributes) noexcept
  {
    ::GFileAttributeMatcher *_peel_return = g_file_attribute_matcher_new (attributes);
    peel_assume (_peel_return);
    return peel::RefPtr<FileAttributeMatcher>::adopt_ref (reinterpret_cast<FileAttributeMatcher *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  enumerate_namespace (const char *ns) noexcept
  {
    ::GFileAttributeMatcher *_peel_this = reinterpret_cast<::GFileAttributeMatcher *> (this);
    gboolean _peel_return = g_file_attribute_matcher_enumerate_namespace (_peel_this, ns);
    return !!_peel_return;
  }

  const char *
  enumerate_next () noexcept
  {
    ::GFileAttributeMatcher *_peel_this = reinterpret_cast<::GFileAttributeMatcher *> (this);
    return g_file_attribute_matcher_enumerate_next (_peel_this);
  }

  peel_nonnull_args (2)
  bool
  matches (const char *attribute) noexcept
  {
    ::GFileAttributeMatcher *_peel_this = reinterpret_cast<::GFileAttributeMatcher *> (this);
    gboolean _peel_return = g_file_attribute_matcher_matches (_peel_this, attribute);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  matches_only (const char *attribute) noexcept
  {
    ::GFileAttributeMatcher *_peel_this = reinterpret_cast<::GFileAttributeMatcher *> (this);
    gboolean _peel_return = g_file_attribute_matcher_matches_only (_peel_this, attribute);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  peel_arg_in (2)
  peel::RefPtr<FileAttributeMatcher>
  subtract (FileAttributeMatcher *subtract) noexcept
  {
    ::GFileAttributeMatcher *_peel_this = reinterpret_cast<::GFileAttributeMatcher *> (this);
    ::GFileAttributeMatcher *_peel_subtract = reinterpret_cast<::GFileAttributeMatcher *> (subtract);
    ::GFileAttributeMatcher *_peel_return = g_file_attribute_matcher_subtract (_peel_this, _peel_subtract);
    return peel::RefPtr<FileAttributeMatcher>::adopt_ref (reinterpret_cast<FileAttributeMatcher *> (_peel_return));
  }

  peel::String
  to_string () noexcept
  {
    ::GFileAttributeMatcher *_peel_this = reinterpret_cast<::GFileAttributeMatcher *> (this);
    char *_peel_return = g_file_attribute_matcher_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  /* unref bound as RefTraits */
}; /* record FileAttributeMatcher */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
