#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gsk/gsk.h>
#include <peel/Gsk/Path.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
class /* record */ Path;
class /* record */ PathMeasure;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::PathMeasure> ()
{
  return gsk_path_measure_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::PathMeasure>
{
  typedef RefPtr<Gsk::PathMeasure> OwnedType;
  typedef Gsk::PathMeasure * UnownedType;

  static Gsk::PathMeasure *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gsk::PathMeasure *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gsk::PathMeasure * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gsk::PathMeasure>
  dup (const ::GValue *value)
  {
    return RefPtr<Gsk::PathMeasure>::adopt_ref (reinterpret_cast<Gsk::PathMeasure *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gsk::PathMeasure> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gsk::PathMeasure *
  cast_for_create (Gsk::PathMeasure * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::PathMeasure>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::PathMeasure> (), basics.flags);
  }
};

template<>
struct RefTraits<Gsk::PathMeasure, void>
{
  static void
  ref (Gsk::PathMeasure *ptr)
  {
    gsk_path_measure_ref (reinterpret_cast<::GskPathMeasure *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gsk::PathMeasure *ptr)
  {
    gsk_path_measure_unref (reinterpret_cast<::GskPathMeasure *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gsk
{
class /* record */ PathMeasure
{
private:
  PathMeasure () = delete;
  PathMeasure (const PathMeasure &) = delete;
  PathMeasure (PathMeasure &&) = delete;
  ~PathMeasure ();

public:
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PathMeasure>
  create (Path *path) noexcept
  {
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskPathMeasure *_peel_return = gsk_path_measure_new (_peel_path);
    peel_assume (_peel_return);
    return peel::RefPtr<PathMeasure>::adopt_ref (reinterpret_cast<PathMeasure *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PathMeasure>
  create_with_tolerance (Path *path, float tolerance) noexcept
  {
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskPathMeasure *_peel_return = gsk_path_measure_new_with_tolerance (_peel_path, tolerance);
    peel_assume (_peel_return);
    return peel::RefPtr<PathMeasure>::adopt_ref (reinterpret_cast<PathMeasure *> (_peel_return));
  }

  float
  get_length () noexcept
  {
    ::GskPathMeasure *_peel_this = reinterpret_cast<::GskPathMeasure *> (this);
    return gsk_path_measure_get_length (_peel_this);
  }

  peel_returns_nonnull
  Path *
  get_path () noexcept
  {
    ::GskPathMeasure *_peel_this = reinterpret_cast<::GskPathMeasure *> (this);
    ::GskPath *_peel_return = gsk_path_measure_get_path (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Path *> (_peel_return);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  bool
  get_point (float distance, Path::Point *result) noexcept
  {
    ::GskPathMeasure *_peel_this = reinterpret_cast<::GskPathMeasure *> (this);
    ::GskPathPoint *_peel_result = reinterpret_cast<::GskPathPoint *> (result);
    gboolean _peel_return = gsk_path_measure_get_point (_peel_this, distance, _peel_result);
    return !!_peel_return;
  }

  float
  get_tolerance () noexcept
  {
    ::GskPathMeasure *_peel_this = reinterpret_cast<::GskPathMeasure *> (this);
    return gsk_path_measure_get_tolerance (_peel_this);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record PathMeasure */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
