#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>

peel_begin_header

namespace peel
{
namespace Pango
{
enum class Script : std::underlying_type<::PangoScript>::type;
class /* record */ ScriptIter;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::ScriptIter> ()
{
  return pango_script_iter_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::ScriptIter>
{
  typedef UniquePtr<Pango::ScriptIter> OwnedType;
  typedef const Pango::ScriptIter * UnownedType;

  static const Pango::ScriptIter *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::ScriptIter *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::ScriptIter * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::ScriptIter>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::ScriptIter>::adopt_ref (reinterpret_cast<Pango::ScriptIter *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::ScriptIter> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::ScriptIter *
  cast_for_create (const Pango::ScriptIter * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::ScriptIter>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::ScriptIter> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::ScriptIter>
{
  static void
  free (Pango::ScriptIter *ptr)
  {
    pango_script_iter_free (reinterpret_cast<::PangoScriptIter *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Pango
{
class /* record */ ScriptIter
{
private:
  ScriptIter () = delete;
  ScriptIter (const ScriptIter &) = delete;
  ScriptIter (ScriptIter &&) = delete;
  ~ScriptIter ();

public:
  peel_nonnull_args (1)
  static peel::UniquePtr<ScriptIter>
  create (const char *text, int length) noexcept
  {
    ::PangoScriptIter *_peel_return = pango_script_iter_new (text, length);
    peel_assume (_peel_return);
    return peel::UniquePtr<ScriptIter>::adopt_ref (reinterpret_cast<ScriptIter *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4)
  void
  get_range (const char **start, const char **end, Script *script) noexcept
  {
    ::PangoScriptIter *_peel_this = reinterpret_cast<::PangoScriptIter *> (this);
    ::PangoScript *_peel_script = reinterpret_cast<::PangoScript *> (script);
    pango_script_iter_get_range (_peel_this, start, end, _peel_script);
  }

  bool
  next () noexcept
  {
    ::PangoScriptIter *_peel_this = reinterpret_cast<::PangoScriptIter *> (this);
    gboolean _peel_return = pango_script_iter_next (_peel_this);
    return !!_peel_return;
  }
}; /* record ScriptIter */

} /* namespace Pango */
} /* namespace peel */

peel_end_header
