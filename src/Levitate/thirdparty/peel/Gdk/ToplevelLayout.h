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
#include <peel/Gdk/Toplevel.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Monitor;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Toplevel::Layout> ()
{
  return gdk_toplevel_layout_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::Toplevel::Layout>
{
  typedef RefPtr<Gdk::Toplevel::Layout> OwnedType;
  typedef Gdk::Toplevel::Layout * UnownedType;

  static Gdk::Toplevel::Layout *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::Toplevel::Layout *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gdk::Toplevel::Layout * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gdk::Toplevel::Layout>
  dup (const ::GValue *value)
  {
    return RefPtr<Gdk::Toplevel::Layout>::adopt_ref (reinterpret_cast<Gdk::Toplevel::Layout *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gdk::Toplevel::Layout> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gdk::Toplevel::Layout *
  cast_for_create (Gdk::Toplevel::Layout * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::Toplevel::Layout>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::Toplevel::Layout> (), basics.flags);
  }
};

template<>
struct RefTraits<Gdk::Toplevel::Layout, void>
{
  static void
  ref (Gdk::Toplevel::Layout *ptr)
  {
    gdk_toplevel_layout_ref (reinterpret_cast<::GdkToplevelLayout *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gdk::Toplevel::Layout *ptr)
  {
    gdk_toplevel_layout_unref (reinterpret_cast<::GdkToplevelLayout *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class /* record */ Toplevel::Layout
{
private:
  Layout () = delete;
  Layout (const Layout &) = delete;
  Layout (Layout &&) = delete;
  ~Layout ();

public:
  static peel::RefPtr<Toplevel::Layout>
  create () noexcept
  {
    ::GdkToplevelLayout *_peel_return = gdk_toplevel_layout_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Toplevel::Layout>::adopt_ref (reinterpret_cast<Toplevel::Layout *> (_peel_return));
  }

  peel::RefPtr<Toplevel::Layout>
  copy () noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    ::GdkToplevelLayout *_peel_return = gdk_toplevel_layout_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Toplevel::Layout>::adopt_ref (reinterpret_cast<Toplevel::Layout *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (Toplevel::Layout *other) noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    ::GdkToplevelLayout *_peel_other = reinterpret_cast<::GdkToplevelLayout *> (other);
    gboolean _peel_return = gdk_toplevel_layout_equal (_peel_this, _peel_other);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_fullscreen (bool *fullscreen) noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    gboolean _peel_fullscreen;
    gboolean _peel_return = gdk_toplevel_layout_get_fullscreen (_peel_this, &_peel_fullscreen);
    *fullscreen = !!_peel_fullscreen;
    return !!_peel_return;
  }

  Monitor *
  get_fullscreen_monitor () noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    ::GdkMonitor *_peel_return = gdk_toplevel_layout_get_fullscreen_monitor (_peel_this);
    return reinterpret_cast<Monitor *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_maximized (bool *maximized) noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    gboolean _peel_maximized;
    gboolean _peel_return = gdk_toplevel_layout_get_maximized (_peel_this, &_peel_maximized);
    *maximized = !!_peel_maximized;
    return !!_peel_return;
  }

  bool
  get_resizable () noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    gboolean _peel_return = gdk_toplevel_layout_get_resizable (_peel_this);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  void
  set_fullscreen (bool fullscreen, Monitor *monitor) noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    gboolean _peel_fullscreen = static_cast<gboolean> (fullscreen);
    ::GdkMonitor *_peel_monitor = reinterpret_cast<::GdkMonitor *> (monitor);
    gdk_toplevel_layout_set_fullscreen (_peel_this, _peel_fullscreen, _peel_monitor);
  }

  void
  set_maximized (bool maximized) noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    gboolean _peel_maximized = static_cast<gboolean> (maximized);
    gdk_toplevel_layout_set_maximized (_peel_this, _peel_maximized);
  }

  void
  set_resizable (bool resizable) noexcept
  {
    ::GdkToplevelLayout *_peel_this = reinterpret_cast<::GdkToplevelLayout *> (this);
    gboolean _peel_resizable = static_cast<gboolean> (resizable);
    gdk_toplevel_layout_set_resizable (_peel_this, _peel_resizable);
  }

  /* unref bound as RefTraits */
}; /* record Toplevel::Layout */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
