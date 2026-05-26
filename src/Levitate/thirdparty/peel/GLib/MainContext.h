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
struct Cond;
class /* record */ MainContext;
union Mutex;
struct PollFD;
struct Source;
struct SourceFuncs;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::MainContext> ()
{
  return g_main_context_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::MainContext>
{
  typedef RefPtr<GLib::MainContext> OwnedType;
  typedef GLib::MainContext * UnownedType;

  static GLib::MainContext *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::MainContext *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::MainContext * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::MainContext>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::MainContext>::adopt_ref (reinterpret_cast<GLib::MainContext *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::MainContext> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::MainContext *
  cast_for_create (GLib::MainContext * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::MainContext>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::MainContext> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::MainContext, void>
{
  static void
  ref (GLib::MainContext *ptr)
  {
    g_main_context_ref (reinterpret_cast<::GMainContext *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::MainContext *ptr)
  {
    g_main_context_unref (reinterpret_cast<::GMainContext *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ MainContext
{
private:
  MainContext () = delete;
  MainContext (const MainContext &) = delete;
  MainContext (MainContext &&) = delete;
  ~MainContext ();

public:
  enum class Flags : std::underlying_type<::GMainContextFlags>::type;

  static peel::RefPtr<MainContext>
  create () noexcept
  {
    ::GMainContext *_peel_return = g_main_context_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<MainContext>::adopt_ref (reinterpret_cast<MainContext *> (_peel_return));
  }

  static peel::RefPtr<MainContext>
  create_with_flags (MainContext::Flags flags) noexcept
  {
    ::GMainContextFlags _peel_flags = static_cast<::GMainContextFlags> (flags);
    ::GMainContext *_peel_return = g_main_context_new_with_flags (_peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<MainContext>::adopt_ref (reinterpret_cast<MainContext *> (_peel_return));
  }

  bool
  acquire () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    gboolean _peel_return = g_main_context_acquire (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_poll (PollFD *fd, int priority) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GPollFD *_peel_fd = reinterpret_cast<::GPollFD *> (fd);
    g_main_context_add_poll (_peel_this, _peel_fd, priority);
  }

  bool
  check (int max_priority, peel::ArrayRef<PollFD> fds) noexcept
  {
    gint _peel_n_fds;
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GPollFD *_peel_fds = (_peel_n_fds = fds.size (), reinterpret_cast<::GPollFD *> (fds.data ()));
    gboolean _peel_return = g_main_context_check (_peel_this, max_priority, _peel_fds, _peel_n_fds);
    return !!_peel_return;
  }

  void
  dispatch () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    g_main_context_dispatch (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  Source *
  find_source_by_funcs_user_data (SourceFuncs *funcs, void *user_data) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GSourceFuncs *_peel_funcs = reinterpret_cast<::GSourceFuncs *> (funcs);
    ::GSource *_peel_return = g_main_context_find_source_by_funcs_user_data (_peel_this, _peel_funcs, user_data);
    return reinterpret_cast<Source *> (_peel_return);
  }

  peel_returns_nonnull
  Source *
  find_source_by_id (unsigned source_id) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GSource *_peel_return = g_main_context_find_source_by_id (_peel_this, source_id);
    peel_assume (_peel_return);
    return reinterpret_cast<Source *> (_peel_return);
  }

  Source *
  find_source_by_user_data (void *user_data) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GSource *_peel_return = g_main_context_find_source_by_user_data (_peel_this, user_data);
    return reinterpret_cast<Source *> (_peel_return);
  }

  ::GPollFunc
  get_poll_func () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    return g_main_context_get_poll_func (_peel_this);
  }

  template<typename SourceFunc>
  void
  invoke (SourceFunc &&function) noexcept
  {
    gpointer _peel_data;
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_gsourcefunc_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<SourceFunc, void>::value);
    g_main_context_invoke (_peel_this, _peel_function, _peel_data);
  }

  template<typename SourceFunc>
  void
  invoke_full (int priority, SourceFunc &&function) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_notify;
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_notified_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_notify, peel::internals::is_const_invocable<SourceFunc, void>::value);
    g_main_context_invoke_full (_peel_this, priority, _peel_function, _peel_data, _peel_notify);
  }

  bool
  is_owner () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    gboolean _peel_return = g_main_context_is_owner (_peel_this);
    return !!_peel_return;
  }

  bool
  iteration (bool may_block) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    gboolean _peel_may_block = static_cast<gboolean> (may_block);
    gboolean _peel_return = g_main_context_iteration (_peel_this, _peel_may_block);
    return !!_peel_return;
  }

  bool
  pending () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    gboolean _peel_return = g_main_context_pending (_peel_this);
    return !!_peel_return;
  }

  void
  pop_thread_default () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    g_main_context_pop_thread_default (_peel_this);
  }

  peel_arg_out (2)
  bool
  prepare (int *priority) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    gint *_peel_priority = reinterpret_cast<gint *> (priority);
    gboolean _peel_return = g_main_context_prepare (_peel_this, _peel_priority);
    return !!_peel_return;
  }

  void
  push_thread_default () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    g_main_context_push_thread_default (_peel_this);
  }

  /* Unsupported for now: pusher_new: explicitly skipped */

  peel_arg_out (3) peel_nonnull_args (3)
  int
  query (int max_priority, int *timeout_, peel::ArrayRef<PollFD> fds) noexcept
  {
    gint _peel_n_fds;
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    gint *_peel_timeout_ = reinterpret_cast<gint *> (timeout_);
    ::GPollFD *_peel_fds = (_peel_n_fds = fds.size (), reinterpret_cast<::GPollFD *> (fds.data ()));
    return g_main_context_query (_peel_this, max_priority, _peel_timeout_, _peel_fds, _peel_n_fds);
  }

  /* ref bound as RefTraits */

  void
  release () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    g_main_context_release (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  remove_poll (PollFD *fd) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GPollFD *_peel_fd = reinterpret_cast<::GPollFD *> (fd);
    g_main_context_remove_poll (_peel_this, _peel_fd);
  }

  void
  set_poll_func (::GPollFunc func) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    g_main_context_set_poll_func (_peel_this, func);
  }

  /* unref bound as RefTraits */

  peel_arg_in (2) peel_nonnull_args (2, 3)
  bool
  wait (Cond *cond, Mutex *mutex) noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    ::GCond *_peel_cond = reinterpret_cast<::GCond *> (cond);
    ::GMutex *_peel_mutex = reinterpret_cast<::GMutex *> (mutex);
    gboolean _peel_return = g_main_context_wait (_peel_this, _peel_cond, _peel_mutex);
    return !!_peel_return;
  }

  void
  wakeup () noexcept
  {
    ::GMainContext *_peel_this = reinterpret_cast<::GMainContext *> (this);
    g_main_context_wakeup (_peel_this);
  }

  peel_returns_nonnull
  static MainContext *
  default_ () noexcept
  {
    ::GMainContext *_peel_return = g_main_context_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<MainContext *> (_peel_return);
  }

  static MainContext *
  get_thread_default () noexcept
  {
    ::GMainContext *_peel_return = g_main_context_get_thread_default ();
    return reinterpret_cast<MainContext *> (_peel_return);
  }

  /* Unsupported for now: pusher_free: explicitly skipped */

  static peel::RefPtr<MainContext>
  ref_thread_default () noexcept
  {
    ::GMainContext *_peel_return = g_main_context_ref_thread_default ();
    peel_assume (_peel_return);
    return peel::RefPtr<MainContext>::adopt_ref (reinterpret_cast<MainContext *> (_peel_return));
  }
}; /* record MainContext */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
