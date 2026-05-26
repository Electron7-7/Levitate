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
struct Euler;
enum class EulerOrder : std::underlying_type<::graphene_euler_order_t>::type;
struct Matrix;
struct Quaternion;
struct Vec3;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Euler> ()
{
  return graphene_euler_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Euler>
{
  typedef UniquePtr<Graphene::Euler> OwnedType;
  typedef const Graphene::Euler * UnownedType;

  static const Graphene::Euler *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Euler *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Euler * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Euler>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Euler>::adopt_ref (reinterpret_cast<Graphene::Euler *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Euler> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Euler *
  cast_for_create (const Graphene::Euler * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Euler>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Euler> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Euler>
{
  static void
  free (Graphene::Euler *ptr)
  {
    graphene_euler_free (reinterpret_cast<::graphene_euler_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Euler
{
private:
  ::graphene_euler_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Euler>
  alloc () noexcept
  {
    ::graphene_euler_t *_peel_return = graphene_euler_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Euler>::adopt_ref (reinterpret_cast<Euler *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Euler *b) const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    const ::graphene_euler_t *_peel_b = reinterpret_cast<const ::graphene_euler_t *> (b);
    _Bool _peel_return = graphene_euler_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  float
  get_alpha () const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    return graphene_euler_get_alpha (_peel_this);
  }

  float
  get_beta () const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    return graphene_euler_get_beta (_peel_this);
  }

  float
  get_gamma () const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    return graphene_euler_get_gamma (_peel_this);
  }

  EulerOrder
  get_order () const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    ::graphene_euler_order_t _peel_return = graphene_euler_get_order (_peel_this);
    return static_cast<EulerOrder> (_peel_return);
  }

  float
  get_x () const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    return graphene_euler_get_x (_peel_this);
  }

  float
  get_y () const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    return graphene_euler_get_y (_peel_this);
  }

  float
  get_z () const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    return graphene_euler_get_z (_peel_this);
  }

  peel_returns_nonnull
  Euler *
  init (float x, float y, float z) noexcept
  {
    ::graphene_euler_t *_peel_this = reinterpret_cast<::graphene_euler_t *> (this);
    ::graphene_euler_t *_peel_return = graphene_euler_init (_peel_this, x, y, z);
    peel_assume (_peel_return);
    return reinterpret_cast<Euler *> (_peel_return);
  }

  peel_arg_in (2) peel_returns_nonnull
  Euler *
  init_from_euler (const Euler *src) noexcept
  {
    ::graphene_euler_t *_peel_this = reinterpret_cast<::graphene_euler_t *> (this);
    const ::graphene_euler_t *_peel_src = reinterpret_cast<const ::graphene_euler_t *> (src);
    ::graphene_euler_t *_peel_return = graphene_euler_init_from_euler (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Euler *> (_peel_return);
  }

  peel_arg_in (2) peel_returns_nonnull
  Euler *
  init_from_matrix (const Matrix *m, EulerOrder order) noexcept
  {
    ::graphene_euler_t *_peel_this = reinterpret_cast<::graphene_euler_t *> (this);
    const ::graphene_matrix_t *_peel_m = reinterpret_cast<const ::graphene_matrix_t *> (m);
    ::graphene_euler_order_t _peel_order = static_cast<::graphene_euler_order_t> (order);
    ::graphene_euler_t *_peel_return = graphene_euler_init_from_matrix (_peel_this, _peel_m, _peel_order);
    peel_assume (_peel_return);
    return reinterpret_cast<Euler *> (_peel_return);
  }

  peel_arg_in (2) peel_returns_nonnull
  Euler *
  init_from_quaternion (const Quaternion *q, EulerOrder order) noexcept
  {
    ::graphene_euler_t *_peel_this = reinterpret_cast<::graphene_euler_t *> (this);
    const ::graphene_quaternion_t *_peel_q = reinterpret_cast<const ::graphene_quaternion_t *> (q);
    ::graphene_euler_order_t _peel_order = static_cast<::graphene_euler_order_t> (order);
    ::graphene_euler_t *_peel_return = graphene_euler_init_from_quaternion (_peel_this, _peel_q, _peel_order);
    peel_assume (_peel_return);
    return reinterpret_cast<Euler *> (_peel_return);
  }

  peel_returns_nonnull
  Euler *
  init_from_radians (float x, float y, float z, EulerOrder order) noexcept
  {
    ::graphene_euler_t *_peel_this = reinterpret_cast<::graphene_euler_t *> (this);
    ::graphene_euler_order_t _peel_order = static_cast<::graphene_euler_order_t> (order);
    ::graphene_euler_t *_peel_return = graphene_euler_init_from_radians (_peel_this, x, y, z, _peel_order);
    peel_assume (_peel_return);
    return reinterpret_cast<Euler *> (_peel_return);
  }

  peel_arg_in (2) peel_returns_nonnull
  Euler *
  init_from_vec3 (const Vec3 *v, EulerOrder order) noexcept
  {
    ::graphene_euler_t *_peel_this = reinterpret_cast<::graphene_euler_t *> (this);
    const ::graphene_vec3_t *_peel_v = reinterpret_cast<const ::graphene_vec3_t *> (v);
    ::graphene_euler_order_t _peel_order = static_cast<::graphene_euler_order_t> (order);
    ::graphene_euler_t *_peel_return = graphene_euler_init_from_vec3 (_peel_this, _peel_v, _peel_order);
    peel_assume (_peel_return);
    return reinterpret_cast<Euler *> (_peel_return);
  }

  peel_returns_nonnull
  Euler *
  init_with_order (float x, float y, float z, EulerOrder order) noexcept
  {
    ::graphene_euler_t *_peel_this = reinterpret_cast<::graphene_euler_t *> (this);
    ::graphene_euler_order_t _peel_order = static_cast<::graphene_euler_order_t> (order);
    ::graphene_euler_t *_peel_return = graphene_euler_init_with_order (_peel_this, x, y, z, _peel_order);
    peel_assume (_peel_return);
    return reinterpret_cast<Euler *> (_peel_return);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  reorder (EulerOrder order, Euler *res) const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    ::graphene_euler_order_t _peel_order = static_cast<::graphene_euler_order_t> (order);
    ::graphene_euler_t *_peel_res = reinterpret_cast<::graphene_euler_t *> (res);
    graphene_euler_reorder (_peel_this, _peel_order, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_matrix (Matrix *res) const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    ::graphene_matrix_t *_peel_res = reinterpret_cast<::graphene_matrix_t *> (res);
    graphene_euler_to_matrix (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_quaternion (Quaternion *res) const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    ::graphene_quaternion_t *_peel_res = reinterpret_cast<::graphene_quaternion_t *> (res);
    graphene_euler_to_quaternion (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_vec3 (Vec3 *res) const noexcept
  {
    const ::graphene_euler_t *_peel_this = reinterpret_cast<const ::graphene_euler_t *> (this);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_euler_to_vec3 (_peel_this, _peel_res);
  }
}; /* record Euler */

static_assert (sizeof (Euler) == sizeof (::graphene_euler_t),
               "Euler size mismatch");
static_assert (alignof (Euler) == alignof (::graphene_euler_t),
               "Euler align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
