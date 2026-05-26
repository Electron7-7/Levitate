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
struct Matrix;
struct Rectangle;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Matrix> ()
{
  return pango_matrix_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::Matrix>
{
  typedef UniquePtr<Pango::Matrix> OwnedType;
  typedef const Pango::Matrix * UnownedType;

  static const Pango::Matrix *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::Matrix *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::Matrix * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::Matrix>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::Matrix>::adopt_ref (reinterpret_cast<Pango::Matrix *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::Matrix> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::Matrix *
  cast_for_create (const Pango::Matrix * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::Matrix>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::Matrix> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::Matrix>
{
  static void
  free (Pango::Matrix *ptr)
  {
    pango_matrix_free (reinterpret_cast<::PangoMatrix *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
struct Matrix
{
private:
  Matrix () = delete;
  Matrix (const Matrix &) = delete;
  Matrix (Matrix &&) = delete;
  ~Matrix ();

public:
  double xx;
  double xy;
  double yx;
  double yy;
  double x0;
  double y0;

  peel_arg_in (2) peel_nonnull_args (2)
  void
  concat (const Matrix *new_matrix) noexcept
  {
    ::PangoMatrix *_peel_this = reinterpret_cast<::PangoMatrix *> (this);
    const ::PangoMatrix *_peel_new_matrix = reinterpret_cast<const ::PangoMatrix *> (new_matrix);
    pango_matrix_concat (_peel_this, _peel_new_matrix);
  }

  peel::UniquePtr<Matrix>
  copy () const noexcept
  {
    const ::PangoMatrix *_peel_this = reinterpret_cast<const ::PangoMatrix *> (this);
    ::PangoMatrix *_peel_return = pango_matrix_copy (_peel_this);
    return peel::UniquePtr<Matrix>::adopt_ref (reinterpret_cast<Matrix *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  double
  get_font_scale_factor () const noexcept
  {
    const ::PangoMatrix *_peel_this = reinterpret_cast<const ::PangoMatrix *> (this);
    return pango_matrix_get_font_scale_factor (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_font_scale_factors (double *xscale, double *yscale) const noexcept
  {
    const ::PangoMatrix *_peel_this = reinterpret_cast<const ::PangoMatrix *> (this);
    pango_matrix_get_font_scale_factors (_peel_this, xscale, yscale);
  }

  double
  get_slant_ratio () const noexcept
  {
    const ::PangoMatrix *_peel_this = reinterpret_cast<const ::PangoMatrix *> (this);
    return pango_matrix_get_slant_ratio (_peel_this);
  }

  void
  rotate (double degrees) noexcept
  {
    ::PangoMatrix *_peel_this = reinterpret_cast<::PangoMatrix *> (this);
    pango_matrix_rotate (_peel_this, degrees);
  }

  void
  scale (double scale_x, double scale_y) noexcept
  {
    ::PangoMatrix *_peel_this = reinterpret_cast<::PangoMatrix *> (this);
    pango_matrix_scale (_peel_this, scale_x, scale_y);
  }

  peel_arg_inout (2) peel_arg_inout (3) peel_nonnull_args (2, 3)
  void
  transform_distance (double *dx, double *dy) const noexcept
  {
    const ::PangoMatrix *_peel_this = reinterpret_cast<const ::PangoMatrix *> (this);
    pango_matrix_transform_distance (_peel_this, dx, dy);
  }

  /* Unsupported for now: transform_pixel_rectangle: no idea about ownership semantics */

  peel_arg_inout (2) peel_arg_inout (3) peel_nonnull_args (2, 3)
  void
  transform_point (double *x, double *y) const noexcept
  {
    const ::PangoMatrix *_peel_this = reinterpret_cast<const ::PangoMatrix *> (this);
    pango_matrix_transform_point (_peel_this, x, y);
  }

  /* Unsupported for now: transform_rectangle: no idea about ownership semantics */

  void
  translate (double tx, double ty) noexcept
  {
    ::PangoMatrix *_peel_this = reinterpret_cast<::PangoMatrix *> (this);
    pango_matrix_translate (_peel_this, tx, ty);
  }
}; /* record Matrix */

static_assert (sizeof (Matrix) == sizeof (::PangoMatrix),
               "Matrix size mismatch");
static_assert (alignof (Matrix) == alignof (::PangoMatrix),
               "Matrix align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Rectangle.h>
