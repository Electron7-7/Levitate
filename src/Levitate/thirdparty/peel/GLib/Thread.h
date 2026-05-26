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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
struct Thread;
enum class ThreadPriority : std::underlying_type<::GThreadPriority>::type;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Thread> ()
{
  return g_thread_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Thread>
{
  typedef RefPtr<GLib::Thread> OwnedType;
  typedef GLib::Thread * UnownedType;

  static GLib::Thread *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Thread *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Thread * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Thread>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Thread>::adopt_ref (reinterpret_cast<GLib::Thread *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Thread> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Thread *
  cast_for_create (GLib::Thread * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Thread>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Thread> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Thread, void>
{
  static void
  ref (GLib::Thread *ptr)
  {
    g_thread_ref (reinterpret_cast<::GThread *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Thread *ptr)
  {
    g_thread_unref (reinterpret_cast<::GThread *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct Thread
{
private:
  ::GThread inner peel_no_warn_unused;

  Thread () = delete;
  Thread (const Thread &) = delete;
  Thread (Thread &&) = delete;
  ~Thread ();

  /* Some fields not yet supported */
public:
  template<typename ThreadFunc>
  static peel::RefPtr<Thread>
  create (const char *name, ThreadFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GThreadFunc _peel_func = peel::internals::CallbackHelper<gpointer>::wrap_async_callback (
      static_cast<ThreadFunc &&> (func),
      [] (gpointer data) -> gpointer
      {
        ThreadFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<ThreadFunc>::type *> (data);
        return static_cast<ThreadFunc &&> (_peel_captured_func) ();
      },
      &_peel_data);
    ::GThread *_peel_return = g_thread_new (name, _peel_func, _peel_data);
    peel_assume (_peel_return);
    return peel::RefPtr<Thread>::adopt_ref (reinterpret_cast<Thread *> (_peel_return));
  }

  template<typename ThreadFunc>
  static peel::RefPtr<Thread>
  try_new (const char *name, ThreadFunc &&func, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_data;
    ::GThreadFunc _peel_func = peel::internals::CallbackHelper<gpointer>::wrap_async_callback (
      static_cast<ThreadFunc &&> (func),
      [] (gpointer data) -> gpointer
      {
        ThreadFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<ThreadFunc>::type *> (data);
        return static_cast<ThreadFunc &&> (_peel_captured_func) ();
      },
      &_peel_data);
    ::GError *_peel_error = nullptr;
    ::GThread *_peel_return = g_thread_try_new (name, _peel_func, _peel_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Thread>::adopt_ref (reinterpret_cast<Thread *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GThread *_peel_this = reinterpret_cast<::GThread *> (this);
    return g_thread_get_name (_peel_this);
  }

  static void *
  join (peel::RefPtr<Thread> thread) noexcept
  {
    ::GThread *_peel_thread = reinterpret_cast<::GThread *> (std::move (thread).release_ref ());
    return g_thread_join (_peel_thread);
  }

  /* ref bound as RefTraits */

  void
  set_priority (ThreadPriority priority) noexcept
  {
    ::GThread *_peel_this = reinterpret_cast<::GThread *> (this);
    ::GThreadPriority _peel_priority = static_cast<::GThreadPriority> (priority);
    g_thread_set_priority (_peel_this, _peel_priority);
  }

  /* unref bound as RefTraits */

  template<typename ThreadFunc>
  static peel::RefPtr<Thread>
  create (ThreadFunc &&func, bool joinable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_data;
    ::GThreadFunc _peel_func = peel::internals::CallbackHelper<gpointer>::wrap_call_callback (
      static_cast<ThreadFunc &&> (func),
      [] (gpointer data) -> gpointer
      {
        ThreadFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<ThreadFunc>::type *> (data);
        return _peel_captured_func ();
      },
      &_peel_data, peel::internals::is_const_invocable<ThreadFunc, void>::value);
    gboolean _peel_joinable = static_cast<gboolean> (joinable);
    ::GError *_peel_error = nullptr;
    ::GThread *_peel_return = g_thread_create (_peel_func, _peel_data, _peel_joinable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Thread>::adopt_ref (reinterpret_cast<Thread *> (_peel_return));
  }

  template<typename ThreadFunc>
  static peel::RefPtr<Thread>
  create_full (ThreadFunc &&func, unsigned long stack_size, bool joinable, bool bound, ThreadPriority priority, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_data;
    ::GThreadFunc _peel_func = peel::internals::CallbackHelper<gpointer>::wrap_call_callback (
      static_cast<ThreadFunc &&> (func),
      [] (gpointer data) -> gpointer
      {
        ThreadFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<ThreadFunc>::type *> (data);
        return _peel_captured_func ();
      },
      &_peel_data, peel::internals::is_const_invocable<ThreadFunc, void>::value);
    gboolean _peel_joinable = static_cast<gboolean> (joinable);
    gboolean _peel_bound = static_cast<gboolean> (bound);
    ::GThreadPriority _peel_priority = static_cast<::GThreadPriority> (priority);
    ::GError *_peel_error = nullptr;
    ::GThread *_peel_return = g_thread_create_full (_peel_func, _peel_data, stack_size, _peel_joinable, _peel_bound, _peel_priority, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Thread>::adopt_ref (reinterpret_cast<Thread *> (_peel_return));
  }

  static Quark
  error_quark () noexcept
  {
    ::GQuark _peel_return = g_thread_error_quark ();
    return static_cast<Quark> (_peel_return);
  }

  static void
  exit (void *retval) noexcept
  {
    g_thread_exit (retval);
  }

  template<typename Func>
  static void
  foreach (Func &&thread_func) noexcept
  {
    gpointer _peel_user_data;
    ::GFunc _peel_thread_func = peel::internals::CallbackHelper<void, gpointer>::wrap_call_callback (
      static_cast<Func &&> (thread_func),
      [] (gpointer data, gpointer user_data) -> void
      {
        Func &_peel_captured_thread_func = *reinterpret_cast<typename std::remove_reference<Func>::type *> (user_data);
        _peel_captured_thread_func (data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<Func, void, void *>::value);
    g_thread_foreach (_peel_thread_func, _peel_user_data);
  }

  static bool
  get_initialized () noexcept
  {
    gboolean _peel_return = g_thread_get_initialized ();
    return !!_peel_return;
  }

  static void
  init (void *vtable) noexcept
  {
    g_thread_init (vtable);
  }

  static void
  init_with_errorcheck_mutexes (void *vtable) noexcept
  {
    g_thread_init_with_errorcheck_mutexes (vtable);
  }

  peel_returns_nonnull
  static Thread *
  self () noexcept
  {
    ::GThread *_peel_return = g_thread_self ();
    peel_assume (_peel_return);
    return reinterpret_cast<Thread *> (_peel_return);
  }

  static void
  yield () noexcept
  {
    g_thread_yield ();
  }
}; /* record Thread */

static_assert (sizeof (Thread) == sizeof (::GThread),
               "Thread size mismatch");
static_assert (alignof (Thread) == alignof (::GThread),
               "Thread align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
