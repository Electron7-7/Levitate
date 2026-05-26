#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GLib/List.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* interface */ AppInfo;
class AppLaunchContext;
class /* interface */ File;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::AppLaunchContext> ()
{
  return g_app_launch_context_get_type ();
}


namespace Gio
{
class AppLaunchContext : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GAppLaunchContext) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AppLaunchContext () = delete;
  AppLaunchContext (const AppLaunchContext &) = delete;
  AppLaunchContext (AppLaunchContext &&) = delete;
  AppLaunchContext &
  operator = (const AppLaunchContext &) = delete;
  AppLaunchContext &
  operator = (AppLaunchContext &&) = delete;
protected:
  ~AppLaunchContext () = default;
public:

  static peel::RefPtr<AppLaunchContext>
  create () noexcept
  {
    ::GAppLaunchContext *_peel_return = g_app_launch_context_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<AppLaunchContext>::adopt_ref (reinterpret_cast<AppLaunchContext *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::String
  get_display (AppInfo *info, GLib::ListRef<File * const> files) noexcept
  {
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    ::GAppInfo *_peel_info = reinterpret_cast<::GAppInfo *> (info);
    GList *_peel_files = files.raw_list ();
    char *_peel_return = g_app_launch_context_get_display (_peel_this, _peel_info, _peel_files);
    return peel::String::adopt_string (_peel_return);
  }

  peel::Strv
  get_environment () noexcept
  {
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    char **_peel_return = g_app_launch_context_get_environment (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::String
  get_startup_notify_id (AppInfo *info, GLib::ListRef<File * const> files) noexcept
  {
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    ::GAppInfo *_peel_info = reinterpret_cast<::GAppInfo *> (info);
    GList *_peel_files = files.raw_list ();
    char *_peel_return = g_app_launch_context_get_startup_notify_id (_peel_this, _peel_info, _peel_files);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  void
  launch_failed (const char *startup_notify_id) noexcept
  {
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    g_app_launch_context_launch_failed (_peel_this, startup_notify_id);
  }

  peel_nonnull_args (2, 3)
  void
  setenv (const char *variable, const char *value) noexcept
  {
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    g_app_launch_context_setenv (_peel_this, variable, value);
  }

  peel_nonnull_args (2)
  void
  unsetenv (const char *variable) noexcept
  {
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    g_app_launch_context_unsetenv (_peel_this, variable);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_launch_failed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppLaunchContext, void (const char *)>::_peel_connect_by_name (this, "launch-failed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_launch_failed (HandlerObject *object, void (HandlerObject::*handler_method) (AppLaunchContext *, const char *), bool after = false) noexcept
  {
    return Signal<AppLaunchContext, void (const char *)>::_peel_connect_by_name (this, "launch-failed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_launch_started (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppLaunchContext, void (AppInfo *, GLib::Variant *)>::_peel_connect_by_name (this, "launch-started", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_launch_started (HandlerObject *object, void (HandlerObject::*handler_method) (AppLaunchContext *, AppInfo *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<AppLaunchContext, void (AppInfo *, GLib::Variant *)>::_peel_connect_by_name (this, "launch-started", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_launched (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppLaunchContext, void (AppInfo *, GLib::Variant *)>::_peel_connect_by_name (this, "launched", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_launched (HandlerObject *object, void (HandlerObject::*handler_method) (AppLaunchContext *, AppInfo *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<AppLaunchContext, void (AppInfo *, GLib::Variant *)>::_peel_connect_by_name (this, "launched", object, handler_method, after);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<AppLaunchContext> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_get_display (AppInfo *info, GLib::ListRef<File * const> files) noexcept
  {
    ::GAppLaunchContextClass *_peel_class = reinterpret_cast<::GAppLaunchContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    ::GAppInfo *_peel_info = reinterpret_cast<::GAppInfo *> (info);
    GList *_peel_files = files.raw_list ();
    char *_peel_return = _peel_class->get_display (_peel_this, _peel_info, _peel_files);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_startup_notify_id (AppInfo *info, GLib::ListRef<File * const> files) noexcept
  {
    ::GAppLaunchContextClass *_peel_class = reinterpret_cast<::GAppLaunchContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    ::GAppInfo *_peel_info = reinterpret_cast<::GAppInfo *> (info);
    GList *_peel_files = files.raw_list ();
    char *_peel_return = _peel_class->get_startup_notify_id (_peel_this, _peel_info, _peel_files);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_launch_failed (const char *startup_notify_id) noexcept
  {
    ::GAppLaunchContextClass *_peel_class = reinterpret_cast<::GAppLaunchContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    _peel_class->launch_failed (_peel_this, startup_notify_id);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_launch_started (AppInfo *info, GLib::Variant *platform_data) noexcept
  {
    ::GAppLaunchContextClass *_peel_class = reinterpret_cast<::GAppLaunchContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    ::GAppInfo *_peel_info = reinterpret_cast<::GAppInfo *> (info);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_class->launch_started (_peel_this, _peel_info, _peel_platform_data);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_launched (AppInfo *info, GLib::Variant *platform_data) noexcept
  {
    ::GAppLaunchContextClass *_peel_class = reinterpret_cast<::GAppLaunchContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GAppLaunchContext *_peel_this = reinterpret_cast<::GAppLaunchContext *> (this);
    ::GAppInfo *_peel_info = reinterpret_cast<::GAppInfo *> (info);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_class->launched (_peel_this, _peel_info, _peel_platform_data);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GAppLaunchContextClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_display ()
    {
      ::GAppLaunchContextClass *klass = reinterpret_cast<::GAppLaunchContextClass *> (this);
      klass->get_display = +[] (::GAppLaunchContext *context, ::GAppInfo *info, GList *files) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        AppInfo *_peel_info = reinterpret_cast<AppInfo *> (info);
        GLib::ListRef<File * const> _peel_files = GLib::ListRef<File * const>::from_raw_list (files);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_display (_peel_info, _peel_files);
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_startup_notify_id ()
    {
      ::GAppLaunchContextClass *klass = reinterpret_cast<::GAppLaunchContextClass *> (this);
      klass->get_startup_notify_id = +[] (::GAppLaunchContext *context, ::GAppInfo *info, GList *files) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        AppInfo *_peel_info = reinterpret_cast<AppInfo *> (info);
        GLib::ListRef<File * const> _peel_files = GLib::ListRef<File * const>::from_raw_list (files);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_startup_notify_id (_peel_info, _peel_files);
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_launch_failed ()
    {
      ::GAppLaunchContextClass *klass = reinterpret_cast<::GAppLaunchContextClass *> (this);
      klass->launch_failed = +[] (::GAppLaunchContext *context, const char *startup_notify_id) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_launch_failed (startup_notify_id);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_launch_started ()
    {
      ::GAppLaunchContextClass *klass = reinterpret_cast<::GAppLaunchContextClass *> (this);
      klass->launch_started = +[] (::GAppLaunchContext *context, ::GAppInfo *info, ::GVariant *platform_data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        AppInfo *_peel_info = reinterpret_cast<AppInfo *> (info);
        GLib::Variant *_peel_platform_data = reinterpret_cast<GLib::Variant *> (platform_data);
        _peel_this->DerivedClass::vfunc_launch_started (_peel_info, _peel_platform_data);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_launched ()
    {
      ::GAppLaunchContextClass *klass = reinterpret_cast<::GAppLaunchContextClass *> (this);
      klass->launched = +[] (::GAppLaunchContext *context, ::GAppInfo *info, ::GVariant *platform_data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        AppInfo *_peel_info = reinterpret_cast<AppInfo *> (info);
        GLib::Variant *_peel_platform_data = reinterpret_cast<GLib::Variant *> (platform_data);
        _peel_this->DerivedClass::vfunc_launched (_peel_info, _peel_platform_data);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GAppLaunchContextClass),
                 "AppLaunchContext::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GAppLaunchContextClass),
                 "AppLaunchContext::Class align mismatch");
}; /* class AppLaunchContext */

static_assert (sizeof (AppLaunchContext) == sizeof (::GAppLaunchContext),
               "AppLaunchContext size mismatch");
static_assert (alignof (AppLaunchContext) == alignof (::GAppLaunchContext),
               "AppLaunchContext align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
