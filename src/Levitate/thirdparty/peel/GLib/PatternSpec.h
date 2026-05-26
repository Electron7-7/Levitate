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
class /* record */ PatternSpec;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::PatternSpec> ()
{
  return g_pattern_spec_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::PatternSpec>
{
  typedef UniquePtr<GLib::PatternSpec> OwnedType;
  typedef const GLib::PatternSpec * UnownedType;

  static const GLib::PatternSpec *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::PatternSpec *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::PatternSpec * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::PatternSpec>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::PatternSpec>::adopt_ref (reinterpret_cast<GLib::PatternSpec *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::PatternSpec> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::PatternSpec *
  cast_for_create (const GLib::PatternSpec * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::PatternSpec>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::PatternSpec> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::PatternSpec>
{
  static void
  free (GLib::PatternSpec *ptr)
  {
    g_pattern_spec_free (reinterpret_cast<::GPatternSpec *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ PatternSpec
{
private:
  PatternSpec () = delete;
  PatternSpec (const PatternSpec &) = delete;
  PatternSpec (PatternSpec &&) = delete;
  ~PatternSpec ();

public:
  peel_nonnull_args (1)
  static peel::UniquePtr<PatternSpec>
  create (const char *pattern) noexcept
  {
    ::GPatternSpec *_peel_return = g_pattern_spec_new (pattern);
    peel_assume (_peel_return);
    return peel::UniquePtr<PatternSpec>::adopt_ref (reinterpret_cast<PatternSpec *> (_peel_return));
  }

  peel::UniquePtr<PatternSpec>
  copy () noexcept
  {
    ::GPatternSpec *_peel_this = reinterpret_cast<::GPatternSpec *> (this);
    ::GPatternSpec *_peel_return = g_pattern_spec_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<PatternSpec>::adopt_ref (reinterpret_cast<PatternSpec *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (PatternSpec *pspec2) noexcept
  {
    ::GPatternSpec *_peel_this = reinterpret_cast<::GPatternSpec *> (this);
    ::GPatternSpec *_peel_pspec2 = reinterpret_cast<::GPatternSpec *> (pspec2);
    gboolean _peel_return = g_pattern_spec_equal (_peel_this, _peel_pspec2);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_nonnull_args (3)
  bool
  match (size_t string_length, const char *string, const char *string_reversed) noexcept
  {
    ::GPatternSpec *_peel_this = reinterpret_cast<::GPatternSpec *> (this);
    gboolean _peel_return = g_pattern_spec_match (_peel_this, string_length, string, string_reversed);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  match_string (const char *string) noexcept
  {
    ::GPatternSpec *_peel_this = reinterpret_cast<::GPatternSpec *> (this);
    gboolean _peel_return = g_pattern_spec_match_string (_peel_this, string);
    return !!_peel_return;
  }
}; /* record PatternSpec */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
