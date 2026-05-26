#pragma once

/* Auto-generated, do not modify */
/* Package graphene-gobject-1.0 */

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
#include <graphene-gobject.h>

peel_begin_header

namespace peel
{
namespace Graphene
{
struct Size;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Size> ()
{
  return graphene_size_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Size>
{
  typedef UniquePtr<Graphene::Size> OwnedType;
  typedef const Graphene::Size * UnownedType;

  static const Graphene::Size *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Size *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Size * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Size>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Size>::adopt_ref (reinterpret_cast<Graphene::Size *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Size> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Size *
  cast_for_create (const Graphene::Size * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Size>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Size> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Size>
{
  static void
  free (Graphene::Size *ptr)
  {
    graphene_size_free (reinterpret_cast<::graphene_size_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Size
{
private:

public:
  float width;
  float height;

  static peel::UniquePtr<Size>
  alloc () noexcept
  {
    ::graphene_size_t *_peel_return = graphene_size_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Size>::adopt_ref (reinterpret_cast<Size *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Size *b) const noexcept
  {
    const ::graphene_size_t *_peel_this = reinterpret_cast<const ::graphene_size_t *> (this);
    const ::graphene_size_t *_peel_b = reinterpret_cast<const ::graphene_size_t *> (b);
    _Bool _peel_return = graphene_size_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  Size *
  init (float width, float height) noexcept
  {
    ::graphene_size_t *_peel_this = reinterpret_cast<::graphene_size_t *> (this);
    ::graphene_size_t *_peel_return = graphene_size_init (_peel_this, width, height);
    peel_assume (_peel_return);
    return reinterpret_cast<Size *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Size *
  init_from_size (const Size *src) noexcept
  {
    ::graphene_size_t *_peel_this = reinterpret_cast<::graphene_size_t *> (this);
    const ::graphene_size_t *_peel_src = reinterpret_cast<const ::graphene_size_t *> (src);
    ::graphene_size_t *_peel_return = graphene_size_init_from_size (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Size *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Size *b, double factor, Size *res) const noexcept
  {
    const ::graphene_size_t *_peel_this = reinterpret_cast<const ::graphene_size_t *> (this);
    const ::graphene_size_t *_peel_b = reinterpret_cast<const ::graphene_size_t *> (b);
    ::graphene_size_t *_peel_res = reinterpret_cast<::graphene_size_t *> (res);
    graphene_size_interpolate (_peel_this, _peel_b, factor, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  scale (float factor, Size *res) const noexcept
  {
    const ::graphene_size_t *_peel_this = reinterpret_cast<const ::graphene_size_t *> (this);
    ::graphene_size_t *_peel_res = reinterpret_cast<::graphene_size_t *> (res);
    graphene_size_scale (_peel_this, factor, _peel_res);
  }

  peel_returns_nonnull
  static const Size *
  zero () noexcept
  {
    const ::graphene_size_t *_peel_return = graphene_size_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Size *> (_peel_return);
  }
}; /* record Size */

static_assert (sizeof (Size) == sizeof (::graphene_size_t),
               "Size size mismatch");
static_assert (alignof (Size) == alignof (::graphene_size_t),
               "Size align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
