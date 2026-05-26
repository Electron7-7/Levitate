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
struct Error;
class /* record */ MatchInfo;
class /* record */ Regex;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::MatchInfo> ()
{
  return g_match_info_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::MatchInfo>
{
  typedef RefPtr<GLib::MatchInfo> OwnedType;
  typedef GLib::MatchInfo * UnownedType;

  static GLib::MatchInfo *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::MatchInfo *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::MatchInfo * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::MatchInfo>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::MatchInfo>::adopt_ref (reinterpret_cast<GLib::MatchInfo *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::MatchInfo> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::MatchInfo *
  cast_for_create (GLib::MatchInfo * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::MatchInfo>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::MatchInfo> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::MatchInfo, void>
{
  static void
  ref (GLib::MatchInfo *ptr)
  {
    g_match_info_ref (reinterpret_cast<::GMatchInfo *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::MatchInfo *ptr)
  {
    g_match_info_unref (reinterpret_cast<::GMatchInfo *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ MatchInfo
{
private:
  MatchInfo () = delete;
  MatchInfo (const MatchInfo &) = delete;
  MatchInfo (MatchInfo &&) = delete;
  ~MatchInfo ();

public:
  peel_nonnull_args (2)
  peel::String
  expand_references (const char *string_to_expand, peel::UniquePtr<GLib::Error> *error) const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_match_info_expand_references (_peel_this, string_to_expand, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  fetch (int match_num) const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    gchar *_peel_return = g_match_info_fetch (_peel_this, match_num);
    return peel::String::adopt_string (_peel_return);
  }

  peel::Strv
  fetch_all () const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    gchar **_peel_return = g_match_info_fetch_all (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::String
  fetch_named (const char *name) const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    gchar *_peel_return = g_match_info_fetch_named (_peel_this, name);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  bool
  fetch_named_pos (const char *name, int *start_pos, int *end_pos) const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    gint *_peel_start_pos = reinterpret_cast<gint *> (start_pos);
    gint *_peel_end_pos = reinterpret_cast<gint *> (end_pos);
    gboolean _peel_return = g_match_info_fetch_named_pos (_peel_this, name, _peel_start_pos, _peel_end_pos);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_arg_out (4)
  bool
  fetch_pos (int match_num, int *start_pos, int *end_pos) const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    gint *_peel_start_pos = reinterpret_cast<gint *> (start_pos);
    gint *_peel_end_pos = reinterpret_cast<gint *> (end_pos);
    gboolean _peel_return = g_match_info_fetch_pos (_peel_this, match_num, _peel_start_pos, _peel_end_pos);
    return !!_peel_return;
  }

  void
  free () noexcept
  {
    ::GMatchInfo *_peel_this = reinterpret_cast<::GMatchInfo *> (this);
    g_match_info_free (_peel_this);
  }

  int
  get_match_count () const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    return g_match_info_get_match_count (_peel_this);
  }

  peel_returns_nonnull
  Regex *
  get_regex () const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    ::GRegex *_peel_return = g_match_info_get_regex (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Regex *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_string () const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    return g_match_info_get_string (_peel_this);
  }

  bool
  is_partial_match () const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    gboolean _peel_return = g_match_info_is_partial_match (_peel_this);
    return !!_peel_return;
  }

  bool
  matches () const noexcept
  {
    const ::GMatchInfo *_peel_this = reinterpret_cast<const ::GMatchInfo *> (this);
    gboolean _peel_return = g_match_info_matches (_peel_this);
    return !!_peel_return;
  }

  bool
  next (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMatchInfo *_peel_this = reinterpret_cast<::GMatchInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_match_info_next (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record MatchInfo */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
