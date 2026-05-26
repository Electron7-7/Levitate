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
class /* record */ MainContext;
class /* record */ MainLoop;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::MainLoop> ()
{
  return g_main_loop_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::MainLoop>
{
  typedef RefPtr<GLib::MainLoop> OwnedType;
  typedef GLib::MainLoop * UnownedType;

  static GLib::MainLoop *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::MainLoop *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::MainLoop * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::MainLoop>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::MainLoop>::adopt_ref (reinterpret_cast<GLib::MainLoop *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::MainLoop> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::MainLoop *
  cast_for_create (GLib::MainLoop * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::MainLoop>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::MainLoop> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::MainLoop, void>
{
  static void
  ref (GLib::MainLoop *ptr)
  {
    g_main_loop_ref (reinterpret_cast<::GMainLoop *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::MainLoop *ptr)
  {
    g_main_loop_unref (reinterpret_cast<::GMainLoop *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ MainLoop
{
private:
  MainLoop () = delete;
  MainLoop (const MainLoop &) = delete;
  MainLoop (MainLoop &&) = delete;
  ~MainLoop ();

public:
  peel_arg_in (1)
  static peel::RefPtr<MainLoop>
  create (MainContext *context, bool is_running) noexcept
  {
    ::GMainContext *_peel_context = reinterpret_cast<::GMainContext *> (context);
    gboolean _peel_is_running = static_cast<gboolean> (is_running);
    ::GMainLoop *_peel_return = g_main_loop_new (_peel_context, _peel_is_running);
    peel_assume (_peel_return);
    return peel::RefPtr<MainLoop>::adopt_ref (reinterpret_cast<MainLoop *> (_peel_return));
  }

  peel_returns_nonnull
  MainContext *
  get_context () noexcept
  {
    ::GMainLoop *_peel_this = reinterpret_cast<::GMainLoop *> (this);
    ::GMainContext *_peel_return = g_main_loop_get_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<MainContext *> (_peel_return);
  }

  bool
  is_running () noexcept
  {
    ::GMainLoop *_peel_this = reinterpret_cast<::GMainLoop *> (this);
    gboolean _peel_return = g_main_loop_is_running (_peel_this);
    return !!_peel_return;
  }

  void
  quit () noexcept
  {
    ::GMainLoop *_peel_this = reinterpret_cast<::GMainLoop *> (this);
    g_main_loop_quit (_peel_this);
  }

  /* ref bound as RefTraits */

  void
  run () noexcept
  {
    ::GMainLoop *_peel_this = reinterpret_cast<::GMainLoop *> (this);
    g_main_loop_run (_peel_this);
  }

  /* unref bound as RefTraits */
}; /* record MainLoop */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
