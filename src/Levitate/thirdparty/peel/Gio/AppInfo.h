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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AppInfo;
class AppLaunchContext;
class /* interface */ AsyncResult;
class Cancellable;
class /* interface */ File;
class /* interface */ Icon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::AppInfo> ()
{
  return g_app_info_get_type ();
}


namespace Gio
{
class /* interface */ AppInfo : public GObject::Object
/* requires GObject::Object */
{
private:
  AppInfo () = delete;
  AppInfo (const AppInfo &) = delete;
  AppInfo (AppInfo &&) = delete;

  AppInfo &
  operator = (const AppInfo &) = delete;
  AppInfo &
  operator = (AppInfo &&) = delete;

protected:
  ~AppInfo () = default;

public:
  enum class CreateFlags : std::underlying_type<::GAppInfoCreateFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<AppInfo>
  create_from_commandline (const char *commandline, const char *application_name, AppInfo::CreateFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoCreateFlags _peel_flags = static_cast<::GAppInfoCreateFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::GAppInfo *_peel_return = g_app_info_create_from_commandline (commandline, application_name, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  static GLib::List<peel::RefPtr<AppInfo>>
  get_all () noexcept
  {
    GList *_peel_return = g_app_info_get_all ();
    return GLib::List<peel::RefPtr<AppInfo>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (1)
  static GLib::List<peel::RefPtr<AppInfo>>
  get_all_for_type (const char *content_type) noexcept
  {
    GList *_peel_return = g_app_info_get_all_for_type (content_type);
    return GLib::List<peel::RefPtr<AppInfo>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (1)
  static peel::RefPtr<AppInfo>
  get_default_for_type (const char *content_type, bool must_support_uris) noexcept
  {
    gboolean _peel_must_support_uris = static_cast<gboolean> (must_support_uris);
    ::GAppInfo *_peel_return = g_app_info_get_default_for_type (content_type, _peel_must_support_uris);
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  get_default_for_type_async (const char *content_type, bool must_support_uris, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    gboolean _peel_must_support_uris = static_cast<gboolean> (must_support_uris);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_app_info_get_default_for_type_async (content_type, _peel_must_support_uris, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (1)
  static peel::RefPtr<AppInfo>
  get_default_for_type_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GAppInfo *_peel_return = g_app_info_get_default_for_type_finish (_peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<AppInfo>
  get_default_for_uri_scheme (const char *uri_scheme) noexcept
  {
    ::GAppInfo *_peel_return = g_app_info_get_default_for_uri_scheme (uri_scheme);
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  get_default_for_uri_scheme_async (const char *uri_scheme, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_app_info_get_default_for_uri_scheme_async (uri_scheme, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (1)
  static peel::RefPtr<AppInfo>
  get_default_for_uri_scheme_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GAppInfo *_peel_return = g_app_info_get_default_for_uri_scheme_finish (_peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  peel_nonnull_args (1)
  static GLib::List<peel::RefPtr<AppInfo>>
  get_fallback_for_type (const char *content_type) noexcept
  {
    GList *_peel_return = g_app_info_get_fallback_for_type (content_type);
    return GLib::List<peel::RefPtr<AppInfo>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (1)
  static GLib::List<peel::RefPtr<AppInfo>>
  get_recommended_for_type (const char *content_type) noexcept
  {
    GList *_peel_return = g_app_info_get_recommended_for_type (content_type);
    return GLib::List<peel::RefPtr<AppInfo>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (1)
  static bool
  launch_default_for_uri (const char *uri, AppLaunchContext *context, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_launch_default_for_uri (uri, _peel_context, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  launch_default_for_uri_async (const char *uri, AppLaunchContext *context, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_app_info_launch_default_for_uri_async (uri, _peel_context, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (1)
  static bool
  launch_default_for_uri_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_launch_default_for_uri_finish (_peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (1)
  static void
  reset_type_associations (const char *content_type) noexcept
  {
    g_app_info_reset_type_associations (content_type);
  }

  peel_nonnull_args (2)
  bool
  add_supports_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_add_supports_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  can_delete () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = g_app_info_can_delete (_peel_this);
    return !!_peel_return;
  }

  bool
  can_remove_supports_type () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = g_app_info_can_remove_supports_type (_peel_this);
    return !!_peel_return;
  }

  bool
  delete_ () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = g_app_info_delete (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<AppInfo>
  dup () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAppInfo *_peel_return = g_app_info_dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  equal (AppInfo *appinfo2) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAppInfo *_peel_appinfo2 = reinterpret_cast<::GAppInfo *> (appinfo2);
    gboolean _peel_return = g_app_info_equal (_peel_this, _peel_appinfo2);
    return !!_peel_return;
  }

  const char *
  get_commandline () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return g_app_info_get_commandline (_peel_this);
  }

  const char *
  get_description () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return g_app_info_get_description (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_display_name () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return g_app_info_get_display_name (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_executable () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return g_app_info_get_executable (_peel_this);
  }

  Icon *
  get_icon () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GIcon *_peel_return = g_app_info_get_icon (_peel_this);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  const char *
  get_id () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return g_app_info_get_id (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return g_app_info_get_name (_peel_this);
  }

  peel::StrvRef
  get_supported_types () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    const char **_peel_return = g_app_info_get_supported_types (_peel_this);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  bool
  launch (GLib::ListRef<File * const> files, AppLaunchContext *context, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_files = files.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_launch (_peel_this, _peel_files, _peel_context, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  launch_uris (GLib::ListRef<const char * const> uris, AppLaunchContext *context, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_uris = uris.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_launch_uris (_peel_this, _peel_uris, _peel_context, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  launch_uris_async (GLib::ListRef<const char * const> uris, AppLaunchContext *context, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_uris = uris.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_app_info_launch_uris_async (_peel_this, _peel_uris, _peel_context, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  launch_uris_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_launch_uris_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  remove_supports_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_remove_supports_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_as_default_for_extension (const char *extension, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_set_as_default_for_extension (_peel_this, extension, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_as_default_for_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_set_as_default_for_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_as_last_used_for_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_app_info_set_as_last_used_for_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  should_show () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = g_app_info_should_show (_peel_this);
    return !!_peel_return;
  }

  bool
  supports_files () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = g_app_info_supports_files (_peel_this);
    return !!_peel_return;
  }

  bool
  supports_uris () noexcept
  {
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = g_app_info_supports_uris (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_add_supports_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->add_supports_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_add_supports_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->add_supports_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_delete () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->can_delete (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_delete () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->can_delete (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_remove_supports_type () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->can_remove_supports_type (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_remove_supports_type () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->can_remove_supports_type (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_do_delete () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->do_delete (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_do_delete () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->do_delete (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<AppInfo>
  parent_vfunc_dup () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAppInfo *_peel_return = _peel_iface->dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  peel::RefPtr<AppInfo>
  default_vfunc_dup () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAppInfo *_peel_return = _peel_iface->dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_equal (AppInfo *appinfo2) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAppInfo *_peel_appinfo2 = reinterpret_cast<::GAppInfo *> (appinfo2);
    gboolean _peel_return = _peel_iface->equal (_peel_this, _peel_appinfo2);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_equal (AppInfo *appinfo2) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAppInfo *_peel_appinfo2 = reinterpret_cast<::GAppInfo *> (appinfo2);
    gboolean _peel_return = _peel_iface->equal (_peel_this, _peel_appinfo2);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_commandline () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_commandline (_peel_this);
  }

  const char *
  default_vfunc_get_commandline () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_commandline (_peel_this);
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_description () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_description (_peel_this);
  }

  const char *
  default_vfunc_get_description () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_description (_peel_this);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_display_name () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_display_name (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_display_name () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_display_name (_peel_this);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_executable () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_executable (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_executable () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_executable (_peel_this);
  }

  template<typename DerivedClass>
  Icon *
  parent_vfunc_get_icon () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  Icon *
  default_vfunc_get_icon () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_id () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_id (_peel_this);
  }

  const char *
  default_vfunc_get_id () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_id (_peel_this);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_name () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_name (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_name () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    return _peel_iface->get_name (_peel_this);
  }

  template<typename DerivedClass>
  peel::StrvRef
  parent_vfunc_get_supported_types () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    const char **_peel_return = _peel_iface->get_supported_types (_peel_this);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  peel::StrvRef
  default_vfunc_get_supported_types () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    const char **_peel_return = _peel_iface->get_supported_types (_peel_this);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_launch (GLib::ListRef<File * const> files, AppLaunchContext *context, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_files = files.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->launch (_peel_this, _peel_files, _peel_context, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_launch (GLib::ListRef<File * const> files, AppLaunchContext *context, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_files = files.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->launch (_peel_this, _peel_files, _peel_context, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_launch_uris (GLib::ListRef<const char * const> uris, AppLaunchContext *context, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_uris = uris.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->launch_uris (_peel_this, _peel_uris, _peel_context, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_launch_uris (GLib::ListRef<const char * const> uris, AppLaunchContext *context, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_uris = uris.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->launch_uris (_peel_this, _peel_uris, _peel_context, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_launch_uris_async (GLib::ListRef<const char * const> uris, AppLaunchContext *context, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_uris = uris.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    _peel_iface->launch_uris_async (_peel_this, _peel_uris, _peel_context, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_launch_uris_async (GLib::ListRef<const char * const> uris, AppLaunchContext *context, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    gpointer _peel_user_data;
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    GList *_peel_uris = uris.raw_list ();
    ::GAppLaunchContext *_peel_context = reinterpret_cast<::GAppLaunchContext *> (context);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    _peel_iface->launch_uris_async (_peel_this, _peel_uris, _peel_context, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_launch_uris_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->launch_uris_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_launch_uris_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->launch_uris_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_remove_supports_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->remove_supports_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_remove_supports_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->remove_supports_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_set_as_default_for_extension (const char *extension, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_as_default_for_extension (_peel_this, extension, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_set_as_default_for_extension (const char *extension, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_as_default_for_extension (_peel_this, extension, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_set_as_default_for_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_as_default_for_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_set_as_default_for_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_as_default_for_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_set_as_last_used_for_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_as_last_used_for_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_set_as_last_used_for_type (const char *content_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_as_last_used_for_type (_peel_this, content_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_should_show () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->should_show (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_should_show () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->should_show (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_supports_files () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->supports_files (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_supports_files () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->supports_files (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_supports_uris () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AppInfo> ())->peek_parent ());
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->supports_uris (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_supports_uris () noexcept
  {
    ::GAppInfoIface *_peel_iface = reinterpret_cast<::GAppInfoIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AppInfo> ()));
    ::GAppInfo *_peel_this = reinterpret_cast<::GAppInfo *> (this);
    gboolean _peel_return = _peel_iface->supports_uris (_peel_this);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GAppInfoIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_add_supports_type ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->add_supports_type = +[] (::GAppInfo *appinfo, const char *content_type, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_add_supports_type (content_type, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_delete ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->can_delete = +[] (::GAppInfo *appinfo) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_delete ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_remove_supports_type ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->can_remove_supports_type = +[] (::GAppInfo *appinfo) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_remove_supports_type ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_do_delete ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->do_delete = +[] (::GAppInfo *appinfo) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        bool _peel_return = _peel_this->DerivedClass::vfunc_do_delete ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_dup ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->dup = +[] (::GAppInfo *appinfo) -> ::GAppInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        peel::RefPtr<AppInfo> _peel_return = _peel_this->DerivedClass::vfunc_dup ();
        return reinterpret_cast<::GAppInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_equal ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->equal = +[] (::GAppInfo *appinfo1, ::GAppInfo *appinfo2) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo1);
        AppInfo *_peel_appinfo2 = reinterpret_cast<AppInfo *> (appinfo2);
        bool _peel_return = _peel_this->DerivedClass::vfunc_equal (_peel_appinfo2);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_commandline ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_commandline = +[] (::GAppInfo *appinfo) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        return _peel_this->DerivedClass::vfunc_get_commandline ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_description ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_description = +[] (::GAppInfo *appinfo) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        return _peel_this->DerivedClass::vfunc_get_description ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_display_name ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_display_name = +[] (::GAppInfo *appinfo) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        return _peel_this->DerivedClass::vfunc_get_display_name ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_executable ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_executable = +[] (::GAppInfo *appinfo) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        return _peel_this->DerivedClass::vfunc_get_executable ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_icon ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_icon = +[] (::GAppInfo *appinfo) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        Icon *_peel_return = _peel_this->DerivedClass::vfunc_get_icon ();
        return reinterpret_cast<::GIcon *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_id ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_id = +[] (::GAppInfo *appinfo) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        return _peel_this->DerivedClass::vfunc_get_id ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_name ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_name = +[] (::GAppInfo *appinfo) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        return _peel_this->DerivedClass::vfunc_get_name ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_supported_types ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->get_supported_types = +[] (::GAppInfo *appinfo) -> const char **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        peel::StrvRef _peel_return = _peel_this->DerivedClass::vfunc_get_supported_types ();
        return const_cast<const char **> (_peel_return.data ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_launch ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->launch = +[] (::GAppInfo *appinfo, GList *files, ::GAppLaunchContext *context, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        GLib::ListRef<File * const> _peel_files = GLib::ListRef<File * const>::from_raw_list (files);
        AppLaunchContext *_peel_context = reinterpret_cast<AppLaunchContext *> (context);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_launch (_peel_files, _peel_context, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_launch_uris ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->launch_uris = +[] (::GAppInfo *appinfo, GList *uris, ::GAppLaunchContext *context, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        GLib::ListRef<const char * const> _peel_uris = GLib::ListRef<const char * const>::from_raw_list (uris);
        AppLaunchContext *_peel_context = reinterpret_cast<AppLaunchContext *> (context);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_launch_uris (_peel_uris, _peel_context, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: launch_uris_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_launch_uris_finish ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->launch_uris_finish = +[] (::GAppInfo *appinfo, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_launch_uris_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_remove_supports_type ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->remove_supports_type = +[] (::GAppInfo *appinfo, const char *content_type, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_remove_supports_type (content_type, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_as_default_for_extension ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->set_as_default_for_extension = +[] (::GAppInfo *appinfo, const char *extension, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_as_default_for_extension (extension, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_as_default_for_type ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->set_as_default_for_type = +[] (::GAppInfo *appinfo, const char *content_type, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_as_default_for_type (content_type, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_as_last_used_for_type ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->set_as_last_used_for_type = +[] (::GAppInfo *appinfo, const char *content_type, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_as_last_used_for_type (content_type, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_should_show ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->should_show = +[] (::GAppInfo *appinfo) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        bool _peel_return = _peel_this->DerivedClass::vfunc_should_show ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_supports_files ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->supports_files = +[] (::GAppInfo *appinfo) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        bool _peel_return = _peel_this->DerivedClass::vfunc_supports_files ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_supports_uris ()
    {
      ::GAppInfoIface *klass = reinterpret_cast<::GAppInfoIface *> (this);
      klass->supports_uris = +[] (::GAppInfo *appinfo) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (appinfo);
        bool _peel_return = _peel_this->DerivedClass::vfunc_supports_uris ();
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GAppInfoIface),
                 "AppInfo::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GAppInfoIface),
                 "AppInfo::Iface align mismatch");
}; /* interface AppInfo */
static_assert (sizeof (AppInfo) == sizeof (GObject::Object),
               "AppInfo size mismatch");
static_assert (alignof (AppInfo) == alignof (GObject::Object),
               "AppInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
