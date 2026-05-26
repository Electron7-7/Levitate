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

peel_begin_header

namespace peel
{
namespace Gsk
{
enum class LineCap : std::underlying_type<::GskLineCap>::type;
enum class LineJoin : std::underlying_type<::GskLineJoin>::type;
class /* record */ Stroke;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::Stroke> ()
{
  return gsk_stroke_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::Stroke>
{
  typedef UniquePtr<Gsk::Stroke> OwnedType;
  typedef const Gsk::Stroke * UnownedType;

  static const Gsk::Stroke *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gsk::Stroke *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gsk::Stroke * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gsk::Stroke>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gsk::Stroke>::adopt_ref (reinterpret_cast<Gsk::Stroke *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gsk::Stroke> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gsk::Stroke *
  cast_for_create (const Gsk::Stroke * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::Stroke>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::Stroke> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gsk::Stroke>
{
  static void
  free (Gsk::Stroke *ptr)
  {
    gsk_stroke_free (reinterpret_cast<::GskStroke *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gsk
{
class /* record */ Stroke
{
private:
  Stroke () = delete;
  Stroke (const Stroke &) = delete;
  Stroke (Stroke &&) = delete;
  ~Stroke ();

public:
  static peel::UniquePtr<Stroke>
  create (float line_width) noexcept
  {
    ::GskStroke *_peel_return = gsk_stroke_new (line_width);
    peel_assume (_peel_return);
    return peel::UniquePtr<Stroke>::adopt_ref (reinterpret_cast<Stroke *> (_peel_return));
  }

  peel::UniquePtr<Stroke>
  copy () const noexcept
  {
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    ::GskStroke *_peel_return = gsk_stroke_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Stroke>::adopt_ref (reinterpret_cast<Stroke *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel::ArrayRef<const float>
  get_dash () const noexcept
  {
    gsize _peel_n_dash;
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    const float *_peel_return = gsk_stroke_get_dash (_peel_this, &_peel_n_dash);
    return peel::ArrayRef<const float> (_peel_return, _peel_n_dash);
  }

  float
  get_dash_offset () const noexcept
  {
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    return gsk_stroke_get_dash_offset (_peel_this);
  }

  LineCap
  get_line_cap () const noexcept
  {
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    ::GskLineCap _peel_return = gsk_stroke_get_line_cap (_peel_this);
    return static_cast<LineCap> (_peel_return);
  }

  LineJoin
  get_line_join () const noexcept
  {
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    ::GskLineJoin _peel_return = gsk_stroke_get_line_join (_peel_this);
    return static_cast<LineJoin> (_peel_return);
  }

  float
  get_line_width () const noexcept
  {
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    return gsk_stroke_get_line_width (_peel_this);
  }

  float
  get_miter_limit () const noexcept
  {
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    return gsk_stroke_get_miter_limit (_peel_this);
  }

  void
  set_dash (peel::ArrayRef<const float> dash) noexcept
  {
    gsize _peel_n_dash;
    ::GskStroke *_peel_this = reinterpret_cast<::GskStroke *> (this);
    const float *_peel_dash = (_peel_n_dash = dash.size (), reinterpret_cast<const float *> (dash.data ()));
    gsk_stroke_set_dash (_peel_this, _peel_dash, _peel_n_dash);
  }

  void
  set_dash_offset (float offset) noexcept
  {
    ::GskStroke *_peel_this = reinterpret_cast<::GskStroke *> (this);
    gsk_stroke_set_dash_offset (_peel_this, offset);
  }

  void
  set_line_cap (LineCap line_cap) noexcept
  {
    ::GskStroke *_peel_this = reinterpret_cast<::GskStroke *> (this);
    ::GskLineCap _peel_line_cap = static_cast<::GskLineCap> (line_cap);
    gsk_stroke_set_line_cap (_peel_this, _peel_line_cap);
  }

  void
  set_line_join (LineJoin line_join) noexcept
  {
    ::GskStroke *_peel_this = reinterpret_cast<::GskStroke *> (this);
    ::GskLineJoin _peel_line_join = static_cast<::GskLineJoin> (line_join);
    gsk_stroke_set_line_join (_peel_this, _peel_line_join);
  }

  void
  set_line_width (float line_width) noexcept
  {
    ::GskStroke *_peel_this = reinterpret_cast<::GskStroke *> (this);
    gsk_stroke_set_line_width (_peel_this, line_width);
  }

  void
  set_miter_limit (float limit) noexcept
  {
    ::GskStroke *_peel_this = reinterpret_cast<::GskStroke *> (this);
    gsk_stroke_set_miter_limit (_peel_this, limit);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  to_cairo (::cairo_t *cr) const noexcept
  {
    const ::GskStroke *_peel_this = reinterpret_cast<const ::GskStroke *> (this);
    gsk_stroke_to_cairo (_peel_this, cr);
  }

  static bool
  equal (const void *stroke1, const void *stroke2) noexcept
  {
    gboolean _peel_return = gsk_stroke_equal (stroke1, stroke2);
    return !!_peel_return;
  }
}; /* record Stroke */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
