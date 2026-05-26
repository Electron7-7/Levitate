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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class CicpParams;
class /* record */ ColorState;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ColorState> ()
{
  return gdk_color_state_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::ColorState>
{
  typedef RefPtr<Gdk::ColorState> OwnedType;
  typedef Gdk::ColorState * UnownedType;

  static Gdk::ColorState *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::ColorState *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gdk::ColorState * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gdk::ColorState>
  dup (const ::GValue *value)
  {
    return RefPtr<Gdk::ColorState>::adopt_ref (reinterpret_cast<Gdk::ColorState *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gdk::ColorState> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gdk::ColorState *
  cast_for_create (Gdk::ColorState * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::ColorState>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::ColorState> (), basics.flags);
  }
};

template<>
struct RefTraits<Gdk::ColorState, void>
{
  static void
  ref (Gdk::ColorState *ptr)
  {
    gdk_color_state_ref (reinterpret_cast<::GdkColorState *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gdk::ColorState *ptr)
  {
    gdk_color_state_unref (reinterpret_cast<::GdkColorState *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class /* record */ ColorState
{
private:
  ColorState () = delete;
  ColorState (const ColorState &) = delete;
  ColorState (ColorState &&) = delete;
  ~ColorState ();

public:
  peel::RefPtr<CicpParams>
  create_cicp_params () noexcept
  {
    ::GdkColorState *_peel_this = reinterpret_cast<::GdkColorState *> (this);
    ::GdkCicpParams *_peel_return = gdk_color_state_create_cicp_params (_peel_this);
    return peel::RefPtr<CicpParams>::adopt_ref (reinterpret_cast<CicpParams *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (ColorState *other) noexcept
  {
    ::GdkColorState *_peel_this = reinterpret_cast<::GdkColorState *> (this);
    ::GdkColorState *_peel_other = reinterpret_cast<::GdkColorState *> (other);
    gboolean _peel_return = gdk_color_state_equal (_peel_this, _peel_other);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equivalent (ColorState *other) noexcept
  {
    ::GdkColorState *_peel_this = reinterpret_cast<::GdkColorState *> (this);
    ::GdkColorState *_peel_other = reinterpret_cast<::GdkColorState *> (other);
    gboolean _peel_return = gdk_color_state_equivalent (_peel_this, _peel_other);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  static peel::RefPtr<ColorState>
  get_oklab () noexcept
  {
    ::GdkColorState *_peel_return = gdk_color_state_get_oklab ();
    peel_assume (_peel_return);
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }

  static peel::RefPtr<ColorState>
  get_oklch () noexcept
  {
    ::GdkColorState *_peel_return = gdk_color_state_get_oklch ();
    peel_assume (_peel_return);
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }

  static peel::RefPtr<ColorState>
  get_rec2100_linear () noexcept
  {
    ::GdkColorState *_peel_return = gdk_color_state_get_rec2100_linear ();
    peel_assume (_peel_return);
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }

  static peel::RefPtr<ColorState>
  get_rec2100_pq () noexcept
  {
    ::GdkColorState *_peel_return = gdk_color_state_get_rec2100_pq ();
    peel_assume (_peel_return);
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }

  static peel::RefPtr<ColorState>
  get_srgb () noexcept
  {
    ::GdkColorState *_peel_return = gdk_color_state_get_srgb ();
    peel_assume (_peel_return);
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }

  static peel::RefPtr<ColorState>
  get_srgb_linear () noexcept
  {
    ::GdkColorState *_peel_return = gdk_color_state_get_srgb_linear ();
    peel_assume (_peel_return);
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }
}; /* record ColorState */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/CicpParams.h>
