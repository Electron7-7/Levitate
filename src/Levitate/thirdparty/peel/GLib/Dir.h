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
class /* record */ Dir;
struct Error;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Dir> ()
{
  return g_dir_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Dir>
{
  typedef RefPtr<GLib::Dir> OwnedType;
  typedef GLib::Dir * UnownedType;

  static GLib::Dir *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Dir *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Dir * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Dir>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Dir>::adopt_ref (reinterpret_cast<GLib::Dir *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Dir> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Dir *
  cast_for_create (GLib::Dir * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Dir>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Dir> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Dir, void>
{
  static void
  ref (GLib::Dir *ptr)
  {
    g_dir_ref (reinterpret_cast<::GDir *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Dir *ptr)
  {
    g_dir_unref (reinterpret_cast<::GDir *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ Dir
{
private:
  Dir () = delete;
  Dir (const Dir &) = delete;
  Dir (Dir &&) = delete;
  ~Dir ();

public:
  peel_nonnull_args (1)
  static peel::RefPtr<Dir>
  open (const char *path, unsigned flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GDir *_peel_return = g_dir_open (path, flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Dir>::adopt_ref (reinterpret_cast<Dir *> (_peel_return));
  }

  static void
  close (peel::RefPtr<Dir> dir) noexcept
  {
    ::GDir *_peel_dir = reinterpret_cast<::GDir *> (std::move (dir).release_ref ());
    g_dir_close (_peel_dir);
  }

  peel_returns_nonnull
  const char *
  read_name () noexcept
  {
    ::GDir *_peel_this = reinterpret_cast<::GDir *> (this);
    return g_dir_read_name (_peel_this);
  }

  /* ref bound as RefTraits */

  void
  rewind () noexcept
  {
    ::GDir *_peel_this = reinterpret_cast<::GDir *> (this);
    g_dir_rewind (_peel_this);
  }

  /* unref bound as RefTraits */

  static peel::String
  make_tmp (const char *tmpl, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_dir_make_tmp (tmpl, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }
}; /* record Dir */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
