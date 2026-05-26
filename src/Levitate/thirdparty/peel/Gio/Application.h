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
#include <peel/GLib/Variant.h>
#include <peel/Gio/ActionMap.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
enum class OptionArg : std::underlying_type<::GOptionArg>::type;
struct OptionEntry;
enum class OptionFlags : std::underlying_type<::GOptionFlags>::type;
class /* record */ OptionGroup;
class /* record */ Variant;
struct VariantDict;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ ActionGroup;
class Application;
class ApplicationCommandLine;
class Cancellable;
class DBusConnection;
class /* interface */ File;
class Notification;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Application> ()
{
  return g_application_get_type ();
}


namespace Gio
{
class Application : public ActionMap
/* extends GObject::Object */
/* implements ActionGroup, ActionMap */
{
private:
  unsigned char _placeholder[sizeof (::GApplication) - sizeof (ActionMap)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Application () = delete;
  Application (const Application &) = delete;
  Application (Application &&) = delete;
  Application &
  operator = (const Application &) = delete;
  Application &
  operator = (Application &&) = delete;
protected:
  ~Application () = default;
public:
  enum class Flags : std::underlying_type<::GApplicationFlags>::type;

  static peel::RefPtr<Application>
  create (const char *application_id, Application::Flags flags) noexcept
  {
    ::GApplicationFlags _peel_flags = static_cast<::GApplicationFlags> (flags);
    ::GApplication *_peel_return = g_application_new (application_id, _peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<Application>::adopt_ref (reinterpret_cast<Application *> (_peel_return));
  }

  static Application *
  get_default () noexcept
  {
    ::GApplication *_peel_return = g_application_get_default ();
    return reinterpret_cast<Application *> (_peel_return);
  }

  peel_nonnull_args (1)
  static bool
  id_is_valid (const char *application_id) noexcept
  {
    gboolean _peel_return = g_application_id_is_valid (application_id);
    return !!_peel_return;
  }

  void
  activate () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_activate (_peel_this);
  }

  peel_nonnull_args (2, 6)
  void
  add_main_option (const char *long_name, char short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const char *description, const char *arg_description) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GOptionFlags _peel_flags = static_cast<::GOptionFlags> (flags);
    ::GOptionArg _peel_arg = static_cast<::GOptionArg> (arg);
    g_application_add_main_option (_peel_this, long_name, short_name, _peel_flags, _peel_arg, description, arg_description);
  }

  void
  add_main_option_entries (peel::ZTArrayRef<const GLib::OptionEntry> entries) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    const ::GOptionEntry *_peel_entries = reinterpret_cast<const ::GOptionEntry *> (entries.data ());
    g_application_add_main_option_entries (_peel_this, _peel_entries);
  }

  void
  add_option_group (peel::RefPtr<GLib::OptionGroup> group) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GOptionGroup *_peel_group = reinterpret_cast<::GOptionGroup *> (std::move (group).release_ref ());
    g_application_add_option_group (_peel_this, _peel_group);
  }

  peel_nonnull_args (2, 3)
  void
  bind_busy_property (GObject::Object *object, const char *property) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    g_application_bind_busy_property (_peel_this, _peel_object, property);
  }

  const char *
  get_application_id () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    return g_application_get_application_id (_peel_this);
  }

  DBusConnection *
  get_dbus_connection () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GDBusConnection *_peel_return = g_application_get_dbus_connection (_peel_this);
    return reinterpret_cast<DBusConnection *> (_peel_return);
  }

  const char *
  get_dbus_object_path () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    return g_application_get_dbus_object_path (_peel_this);
  }

  Application::Flags
  get_flags () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GApplicationFlags _peel_return = g_application_get_flags (_peel_this);
    return static_cast<Application::Flags> (_peel_return);
  }

  unsigned
  get_inactivity_timeout () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    return g_application_get_inactivity_timeout (_peel_this);
  }

  bool
  get_is_busy () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    gboolean _peel_return = g_application_get_is_busy (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_registered () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    gboolean _peel_return = g_application_get_is_registered (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_remote () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    gboolean _peel_return = g_application_get_is_remote (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_resource_base_path () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    return g_application_get_resource_base_path (_peel_this);
  }

  const char *
  get_version () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    return g_application_get_version (_peel_this);
  }

  void
  hold () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_hold (_peel_this);
  }

  void
  mark_busy () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_mark_busy (_peel_this);
  }

  peel_nonnull_args (3)
  void
  open (peel::ArrayRef<File *> files, const char *hint) noexcept
  {
    gint _peel_n_files;
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GFile **_peel_files = (_peel_n_files = files.size (), reinterpret_cast<::GFile **> (files.data ()));
    g_application_open (_peel_this, _peel_files, _peel_n_files, hint);
  }

  void
  quit () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_quit (_peel_this);
  }

  bool
  register_ (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_application_register (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  release () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_release (_peel_this);
  }

  int
  run (peel::ArrayRef<const char *> argv) noexcept
  {
    int _peel_argc;
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    char **_peel_argv = (_peel_argc = argv.size (), const_cast<char **> (argv.data ()));
    return g_application_run (_peel_this, _peel_argc, _peel_argv);
  }

  int
  run (int argc, char **argv) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    return g_application_run (_peel_this, argc, argv);
  }

  peel_nonnull_args (3)
  void
  send_notification (const char *id, Notification *notification) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GNotification *_peel_notification = reinterpret_cast<::GNotification *> (notification);
    g_application_send_notification (_peel_this, id, _peel_notification);
  }

  void
  set_action_group (ActionGroup *action_group) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GActionGroup *_peel_action_group = reinterpret_cast<::GActionGroup *> (action_group);
    g_application_set_action_group (_peel_this, _peel_action_group);
  }

  void
  set_application_id (const char *application_id) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_application_id (_peel_this, application_id);
  }

  void
  set_default () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_default (_peel_this);
  }

  void
  set_flags (Application::Flags flags) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GApplicationFlags _peel_flags = static_cast<::GApplicationFlags> (flags);
    g_application_set_flags (_peel_this, _peel_flags);
  }

  void
  set_inactivity_timeout (unsigned inactivity_timeout) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_inactivity_timeout (_peel_this, inactivity_timeout);
  }

  void
  set_option_context_description (const char *description) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_option_context_description (_peel_this, description);
  }

  void
  set_option_context_parameter_string (const char *parameter_string) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_option_context_parameter_string (_peel_this, parameter_string);
  }

  void
  set_option_context_summary (const char *summary) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_option_context_summary (_peel_this, summary);
  }

  void
  set_resource_base_path (const char *resource_path) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_resource_base_path (_peel_this, resource_path);
  }

  peel_nonnull_args (2)
  void
  set_version (const char *version) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_set_version (_peel_this, version);
  }

  peel_nonnull_args (2, 3)
  void
  unbind_busy_property (GObject::Object *object, const char *property) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    g_application_unbind_busy_property (_peel_this, _peel_object, property);
  }

  void
  unmark_busy () noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_unmark_busy (_peel_this);
  }

  peel_nonnull_args (2)
  void
  withdraw_notification (const char *id) noexcept
  {
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    g_application_withdraw_notification (_peel_this, id);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (Application *), bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_command_line (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, int (ApplicationCommandLine *)>::_peel_connect_by_name (this, "command-line", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_command_line (HandlerObject *object, int (HandlerObject::*handler_method) (Application *, ApplicationCommandLine *), bool after = false) noexcept
  {
    return Signal<Application, int (ApplicationCommandLine *)>::_peel_connect_by_name (this, "command-line", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_handle_local_options (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, int (GLib::VariantDict *)>::_peel_connect_by_name (this, "handle-local-options", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_handle_local_options (HandlerObject *object, int (HandlerObject::*handler_method) (Application *, GLib::VariantDict *), bool after = false) noexcept
  {
    return Signal<Application, int (GLib::VariantDict *)>::_peel_connect_by_name (this, "handle-local-options", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_name_lost (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, bool ()>::_peel_connect_by_name (this, "name-lost", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_name_lost (HandlerObject *object, bool (HandlerObject::*handler_method) (Application *), bool after = false) noexcept
  {
    return Signal<Application, bool ()>::_peel_connect_by_name (this, "name-lost", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_open (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, void (peel::ArrayRef<File *>, int, const char *)>::_peel_connect_by_name (this, "open", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_open (HandlerObject *object, void (HandlerObject::*handler_method) (Application *, peel::ArrayRef<File *>, int, const char *), bool after = false) noexcept
  {
    return Signal<Application, void (peel::ArrayRef<File *>, int, const char *)>::_peel_connect_by_name (this, "open", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_shutdown (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "shutdown", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_shutdown (HandlerObject *object, void (HandlerObject::*handler_method) (Application *), bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "shutdown", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_startup (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "startup", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_startup (HandlerObject *object, void (HandlerObject::*handler_method) (Application *), bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "startup", object, handler_method, after);
  }

  static peel::Property<ActionGroup>
  prop_action_group ()
  {
    return peel::Property<ActionGroup> { "action-group" };
  }

  static peel::Property<const char *>
  prop_application_id ()
  {
    return peel::Property<const char *> { "application-id" };
  }

  static peel::Property<Application::Flags>
  prop_flags ()
  {
    return peel::Property<Application::Flags> { "flags" };
  }

  static peel::Property<unsigned>
  prop_inactivity_timeout ()
  {
    return peel::Property<unsigned> { "inactivity-timeout" };
  }

  static peel::Property<bool>
  prop_is_busy ()
  {
    return peel::Property<bool> { "is-busy" };
  }

  static peel::Property<bool>
  prop_is_registered ()
  {
    return peel::Property<bool> { "is-registered" };
  }

  static peel::Property<bool>
  prop_is_remote ()
  {
    return peel::Property<bool> { "is-remote" };
  }

  static peel::Property<const char *>
  prop_resource_base_path ()
  {
    return peel::Property<const char *> { "resource-base-path" };
  }

  static peel::Property<const char *>
  prop_version ()
  {
    return peel::Property<const char *> { "version" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Application> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate () noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    _peel_class->activate (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_add_platform_data (GLib::Variant::Builder *builder) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GVariantBuilder *_peel_builder = reinterpret_cast<::GVariantBuilder *> (builder);
    _peel_class->add_platform_data (_peel_this, _peel_builder);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_after_emit (GLib::Variant *platform_data) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_class->after_emit (_peel_this, _peel_platform_data);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_before_emit (GLib::Variant *platform_data) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GVariant *_peel_platform_data = reinterpret_cast<::GVariant *> (platform_data);
    _peel_class->before_emit (_peel_this, _peel_platform_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  int
  parent_vfunc_command_line (ApplicationCommandLine *command_line) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GApplicationCommandLine *_peel_command_line = reinterpret_cast<::GApplicationCommandLine *> (command_line);
    return _peel_class->command_line (_peel_this, _peel_command_line);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  bool
  parent_vfunc_dbus_register (DBusConnection *connection, const char *object_path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->dbus_register (_peel_this, _peel_connection, object_path, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_dbus_unregister (DBusConnection *connection, const char *object_path) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    _peel_class->dbus_unregister (_peel_this, _peel_connection, object_path);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  int
  parent_vfunc_handle_local_options (GLib::VariantDict *options) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GVariantDict *_peel_options = reinterpret_cast<::GVariantDict *> (options);
    return _peel_class->handle_local_options (_peel_this, _peel_options);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_nonnull_args (3)
  bool
  parent_vfunc_local_command_line (peel::Strv *arguments, int *exit_status) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    gchar **_peel_arguments = reinterpret_cast<gchar **> (std::move (*arguments).release_ref ());
    gboolean _peel_return = _peel_class->local_command_line (_peel_this, &_peel_arguments, exit_status);
    *arguments = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_arguments));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_name_lost () noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    gboolean _peel_return = _peel_class->name_lost (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (3)
  void
  parent_vfunc_open (peel::ArrayRef<File *> files, const char *hint) noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gint _peel_n_files;
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    ::GFile **_peel_files = (_peel_n_files = files.size (), reinterpret_cast<::GFile **> (files.data ()));
    _peel_class->open (_peel_this, _peel_files, _peel_n_files, hint);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_quit_mainloop () noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    _peel_class->quit_mainloop (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_run_mainloop () noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    _peel_class->run_mainloop (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_shutdown () noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    _peel_class->shutdown (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_startup () noexcept
  {
    ::GApplicationClass *_peel_class = reinterpret_cast<::GApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplication *_peel_this = reinterpret_cast<::GApplication *> (this);
    _peel_class->startup (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GApplicationClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->activate = +[] (::GApplication *application) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        _peel_this->DerivedClass::vfunc_activate ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_add_platform_data ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->add_platform_data = +[] (::GApplication *application, ::GVariantBuilder *builder) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        GLib::Variant::Builder *_peel_builder = reinterpret_cast<GLib::Variant::Builder *> (builder);
        _peel_this->DerivedClass::vfunc_add_platform_data (_peel_builder);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_after_emit ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->after_emit = +[] (::GApplication *application, ::GVariant *platform_data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        GLib::Variant *_peel_platform_data = reinterpret_cast<GLib::Variant *> (platform_data);
        _peel_this->DerivedClass::vfunc_after_emit (_peel_platform_data);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_before_emit ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->before_emit = +[] (::GApplication *application, ::GVariant *platform_data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        GLib::Variant *_peel_platform_data = reinterpret_cast<GLib::Variant *> (platform_data);
        _peel_this->DerivedClass::vfunc_before_emit (_peel_platform_data);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_command_line ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->command_line = +[] (::GApplication *application, ::GApplicationCommandLine *command_line) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        ApplicationCommandLine *_peel_command_line = reinterpret_cast<ApplicationCommandLine *> (command_line);
        return _peel_this->DerivedClass::vfunc_command_line (_peel_command_line);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_dbus_register ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->dbus_register = +[] (::GApplication *application, ::GDBusConnection *connection, const gchar *object_path, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_dbus_register (_peel_connection, object_path, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_dbus_unregister ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->dbus_unregister = +[] (::GApplication *application, ::GDBusConnection *connection, const gchar *object_path) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        _peel_this->DerivedClass::vfunc_dbus_unregister (_peel_connection, object_path);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_handle_local_options ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->handle_local_options = +[] (::GApplication *application, ::GVariantDict *options) -> gint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        GLib::VariantDict *_peel_options = reinterpret_cast<GLib::VariantDict *> (options);
        return _peel_this->DerivedClass::vfunc_handle_local_options (_peel_options);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_local_command_line ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->local_command_line = +[] (::GApplication *application, gchar ***arguments, int *exit_status) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        peel::Strv _peel_arguments = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (*arguments));
        bool _peel_return = _peel_this->DerivedClass::vfunc_local_command_line (&_peel_arguments, exit_status);
        *arguments = reinterpret_cast<gchar **> (std::move (_peel_arguments).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_name_lost ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->name_lost = +[] (::GApplication *application) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        bool _peel_return = _peel_this->DerivedClass::vfunc_name_lost ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_open ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->open = +[] (::GApplication *application, ::GFile **files, gint n_files, const gchar *hint) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        peel::ArrayRef<File *> _peel_files = peel::ArrayRef<File *> (reinterpret_cast<File **> (files), n_files);
        _peel_this->DerivedClass::vfunc_open (_peel_files, hint);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_quit_mainloop ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->quit_mainloop = +[] (::GApplication *application) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        _peel_this->DerivedClass::vfunc_quit_mainloop ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_run_mainloop ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->run_mainloop = +[] (::GApplication *application) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        _peel_this->DerivedClass::vfunc_run_mainloop ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_shutdown ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->shutdown = +[] (::GApplication *application) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        _peel_this->DerivedClass::vfunc_shutdown ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_startup ()
    {
      ::GApplicationClass *klass = reinterpret_cast<::GApplicationClass *> (this);
      klass->startup = +[] (::GApplication *application) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        _peel_this->DerivedClass::vfunc_startup ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GApplicationClass),
                 "Application::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GApplicationClass),
                 "Application::Class align mismatch");
}; /* class Application */

static_assert (sizeof (Application) == sizeof (::GApplication),
               "Application size mismatch");
static_assert (alignof (Application) == alignof (::GApplication),
               "Application align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/OptionGroup.h>
