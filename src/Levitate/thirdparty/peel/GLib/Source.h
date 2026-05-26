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
enum class IOCondition : std::underlying_type<::GIOCondition>::type;
class /* record */ MainContext;
struct PollFD;
struct Source;
struct SourceCallbackFuncs;
struct SourceFuncs;
struct TimeVal;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Source> ()
{
  return g_source_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Source>
{
  typedef RefPtr<GLib::Source> OwnedType;
  typedef GLib::Source * UnownedType;

  static GLib::Source *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Source *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Source * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Source>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Source> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Source *
  cast_for_create (GLib::Source * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Source>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Source> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Source, void>
{
  static void
  ref (GLib::Source *ptr)
  {
    g_source_ref (reinterpret_cast<::GSource *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Source *ptr)
  {
    g_source_unref (reinterpret_cast<::GSource *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct Source
{
private:
  ::GSource inner peel_no_warn_unused;

  Source () = delete;
  Source (const Source &) = delete;
  Source (Source &&) = delete;
  ~Source ();

public:
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Source>
  create (SourceFuncs *source_funcs, unsigned struct_size) noexcept
  {
    ::GSourceFuncs *_peel_source_funcs = reinterpret_cast<::GSourceFuncs *> (source_funcs);
    ::GSource *_peel_return = g_source_new (_peel_source_funcs, struct_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Source>::adopt_ref (reinterpret_cast<Source *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_child_source (Source *child_source) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GSource *_peel_child_source = reinterpret_cast<::GSource *> (child_source);
    g_source_add_child_source (_peel_this, _peel_child_source);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_poll (PollFD *fd) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GPollFD *_peel_fd = reinterpret_cast<::GPollFD *> (fd);
    g_source_add_poll (_peel_this, _peel_fd);
  }

#ifdef G_OS_UNIX
  void *
  add_unix_fd (int fd, IOCondition events) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GIOCondition _peel_events = static_cast<::GIOCondition> (events);
    return g_source_add_unix_fd (_peel_this, fd, _peel_events);
  }
#endif /* G_OS_UNIX */

  peel_arg_in (2)
  unsigned
  attach (MainContext *context) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GMainContext *_peel_context = reinterpret_cast<::GMainContext *> (context);
    return g_source_attach (_peel_this, _peel_context);
  }

  void
  destroy () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    g_source_destroy (_peel_this);
  }

  peel::RefPtr<MainContext>
  dup_context () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GMainContext *_peel_return = g_source_dup_context (_peel_this);
    return peel::RefPtr<MainContext>::adopt_ref (reinterpret_cast<MainContext *> (_peel_return));
  }

  bool
  get_can_recurse () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    gboolean _peel_return = g_source_get_can_recurse (_peel_this);
    return !!_peel_return;
  }

  MainContext *
  get_context () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GMainContext *_peel_return = g_source_get_context (_peel_this);
    return reinterpret_cast<MainContext *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  get_current_time (TimeVal *timeval) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GTimeVal *_peel_timeval = reinterpret_cast<::GTimeVal *> (timeval);
    g_source_get_current_time (_peel_this, _peel_timeval);
  }

  unsigned
  get_id () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    return g_source_get_id (_peel_this);
  }

  const char *
  get_name () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    return g_source_get_name (_peel_this);
  }

  int
  get_priority () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    return g_source_get_priority (_peel_this);
  }

  int64_t
  get_ready_time () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    return g_source_get_ready_time (_peel_this);
  }

  int64_t
  get_time () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    return g_source_get_time (_peel_this);
  }

  bool
  is_destroyed () noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    gboolean _peel_return = g_source_is_destroyed (_peel_this);
    return !!_peel_return;
  }

#ifdef G_OS_UNIX
  void
  modify_unix_fd (void *tag, IOCondition new_events) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GIOCondition _peel_new_events = static_cast<::GIOCondition> (new_events);
    g_source_modify_unix_fd (_peel_this, tag, _peel_new_events);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  IOCondition
  query_unix_fd (void *tag) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GIOCondition _peel_return = g_source_query_unix_fd (_peel_this, tag);
    return static_cast<IOCondition> (_peel_return);
  }
#endif /* G_OS_UNIX */

  /* ref bound as RefTraits */

  peel_arg_in (2) peel_nonnull_args (2)
  void
  remove_child_source (Source *child_source) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GSource *_peel_child_source = reinterpret_cast<::GSource *> (child_source);
    g_source_remove_child_source (_peel_this, _peel_child_source);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  remove_poll (PollFD *fd) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GPollFD *_peel_fd = reinterpret_cast<::GPollFD *> (fd);
    g_source_remove_poll (_peel_this, _peel_fd);
  }

#ifdef G_OS_UNIX
  void
  remove_unix_fd (void *tag) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    g_source_remove_unix_fd (_peel_this, tag);
  }
#endif /* G_OS_UNIX */

  template<typename SourceFunc>
  void
  set_callback (SourceFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_notify;
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GSourceFunc _peel_func = peel::internals::CallbackHelper<gboolean>::wrap_notified_callback (
      static_cast<SourceFunc &&> (func),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_func ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_notify, peel::internals::is_const_invocable<SourceFunc, void>::value);
    g_source_set_callback (_peel_this, _peel_func, _peel_data, _peel_notify);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  set_callback_indirect (void *callback_data, SourceCallbackFuncs *callback_funcs) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GSourceCallbackFuncs *_peel_callback_funcs = reinterpret_cast<::GSourceCallbackFuncs *> (callback_funcs);
    g_source_set_callback_indirect (_peel_this, callback_data, _peel_callback_funcs);
  }

  void
  set_can_recurse (bool can_recurse) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    gboolean _peel_can_recurse = static_cast<gboolean> (can_recurse);
    g_source_set_can_recurse (_peel_this, _peel_can_recurse);
  }

  void
  set_dispose_function (::GSourceDisposeFunc dispose) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    g_source_set_dispose_function (_peel_this, dispose);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_funcs (SourceFuncs *funcs) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    ::GSourceFuncs *_peel_funcs = reinterpret_cast<::GSourceFuncs *> (funcs);
    g_source_set_funcs (_peel_this, _peel_funcs);
  }

  peel_nonnull_args (2)
  void
  set_name (const char *name) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    g_source_set_name (_peel_this, name);
  }

  void
  set_priority (int priority) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    g_source_set_priority (_peel_this, priority);
  }

  void
  set_ready_time (int64_t ready_time) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    g_source_set_ready_time (_peel_this, ready_time);
  }

  peel_nonnull_args (2)
  void
  set_static_name (const char *name) noexcept
  {
    ::GSource *_peel_this = reinterpret_cast<::GSource *> (this);
    g_source_set_static_name (_peel_this, name);
  }

  /* unref bound as RefTraits */

  static bool
  remove (unsigned tag) noexcept
  {
    gboolean _peel_return = g_source_remove (tag);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  remove_by_funcs_user_data (SourceFuncs *funcs, void *user_data) noexcept
  {
    ::GSourceFuncs *_peel_funcs = reinterpret_cast<::GSourceFuncs *> (funcs);
    gboolean _peel_return = g_source_remove_by_funcs_user_data (_peel_funcs, user_data);
    return !!_peel_return;
  }

  static bool
  remove_by_user_data (void *user_data) noexcept
  {
    gboolean _peel_return = g_source_remove_by_user_data (user_data);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  static void
  set_name_by_id (unsigned tag, const char *name) noexcept
  {
    g_source_set_name_by_id (tag, name);
  }
}; /* record Source */

static_assert (sizeof (Source) == sizeof (::GSource),
               "Source size mismatch");
static_assert (alignof (Source) == alignof (::GSource),
               "Source align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/MainContext.h>
