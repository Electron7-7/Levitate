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
#include <gtk/gtk.h>
#include <peel/Gtk/PrintOperationPreview.h>

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

namespace Gtk
{
class PageSetup;
class PrintContext;
class PrintOperation;
class /* interface */ PrintOperationPreview;
class PrintSettings;
enum class PrintStatus : std::underlying_type<::GtkPrintStatus>::type;
enum class Unit : std::underlying_type<::GtkUnit>::type;
class Widget;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintOperation> ()
{
  return gtk_print_operation_get_type ();
}


namespace Gtk
{
class PrintOperation : public PrintOperationPreview
/* extends GObject::Object */
/* implements PrintOperationPreview */
{
private:
  unsigned char _placeholder[sizeof (::GtkPrintOperation) - sizeof (PrintOperationPreview)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PrintOperation () = delete;
  PrintOperation (const PrintOperation &) = delete;
  PrintOperation (PrintOperation &&) = delete;
  PrintOperation &
  operator = (const PrintOperation &) = delete;
  PrintOperation &
  operator = (PrintOperation &&) = delete;
protected:
  ~PrintOperation () = default;
public:
  enum class Action : std::underlying_type<::GtkPrintOperationAction>::type;
  enum class Result : std::underlying_type<::GtkPrintOperationResult>::type;

  static peel::RefPtr<PrintOperation>
  create () noexcept
  {
    ::GtkPrintOperation *_peel_return = gtk_print_operation_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PrintOperation>::adopt_ref (reinterpret_cast<PrintOperation *> (_peel_return));
  }

  void
  cancel () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_cancel (_peel_this);
  }

  void
  draw_page_finish () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_draw_page_finish (_peel_this);
  }

  peel_returns_nonnull
  PageSetup *
  get_default_page_setup () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPageSetup *_peel_return = gtk_print_operation_get_default_page_setup (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<PageSetup *> (_peel_return);
  }

  bool
  get_embed_page_setup () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_return = gtk_print_operation_get_embed_page_setup (_peel_this);
    return !!_peel_return;
  }

  void
  get_error (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GError *_peel_error = nullptr;
    gtk_print_operation_get_error (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  }

  bool
  get_has_selection () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_return = gtk_print_operation_get_has_selection (_peel_this);
    return !!_peel_return;
  }

  int
  get_n_pages_to_print () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    return gtk_print_operation_get_n_pages_to_print (_peel_this);
  }

  PrintSettings *
  get_print_settings () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintSettings *_peel_return = gtk_print_operation_get_print_settings (_peel_this);
    return reinterpret_cast<PrintSettings *> (_peel_return);
  }

  PrintStatus
  get_status () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintStatus _peel_return = gtk_print_operation_get_status (_peel_this);
    return static_cast<PrintStatus> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_status_string () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    return gtk_print_operation_get_status_string (_peel_this);
  }

  bool
  get_support_selection () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_return = gtk_print_operation_get_support_selection (_peel_this);
    return !!_peel_return;
  }

  bool
  is_finished () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_return = gtk_print_operation_is_finished (_peel_this);
    return !!_peel_return;
  }

  PrintOperation::Result
  run (PrintOperation::Action action, Window *parent, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintOperationAction _peel_action = static_cast<::GtkPrintOperationAction> (action);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GError *_peel_error = nullptr;
    ::GtkPrintOperationResult _peel_return = gtk_print_operation_run (_peel_this, _peel_action, _peel_parent, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<PrintOperation::Result> (_peel_return);
  }

  void
  set_allow_async (bool allow_async) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_allow_async = static_cast<gboolean> (allow_async);
    gtk_print_operation_set_allow_async (_peel_this, _peel_allow_async);
  }

  void
  set_current_page (int current_page) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_set_current_page (_peel_this, current_page);
  }

  void
  set_custom_tab_label (const char *label) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_set_custom_tab_label (_peel_this, label);
  }

  void
  set_default_page_setup (PageSetup *default_page_setup) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPageSetup *_peel_default_page_setup = reinterpret_cast<::GtkPageSetup *> (default_page_setup);
    gtk_print_operation_set_default_page_setup (_peel_this, _peel_default_page_setup);
  }

  void
  set_defer_drawing () noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_set_defer_drawing (_peel_this);
  }

  void
  set_embed_page_setup (bool embed) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_embed = static_cast<gboolean> (embed);
    gtk_print_operation_set_embed_page_setup (_peel_this, _peel_embed);
  }

  peel_nonnull_args (2)
  void
  set_export_filename (const char *filename) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_set_export_filename (_peel_this, filename);
  }

  void
  set_has_selection (bool has_selection) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_has_selection = static_cast<gboolean> (has_selection);
    gtk_print_operation_set_has_selection (_peel_this, _peel_has_selection);
  }

  peel_nonnull_args (2)
  void
  set_job_name (const char *job_name) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_set_job_name (_peel_this, job_name);
  }

  void
  set_n_pages (int n_pages) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gtk_print_operation_set_n_pages (_peel_this, n_pages);
  }

  void
  set_print_settings (PrintSettings *print_settings) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintSettings *_peel_print_settings = reinterpret_cast<::GtkPrintSettings *> (print_settings);
    gtk_print_operation_set_print_settings (_peel_this, _peel_print_settings);
  }

  void
  set_show_progress (bool show_progress) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_show_progress = static_cast<gboolean> (show_progress);
    gtk_print_operation_set_show_progress (_peel_this, _peel_show_progress);
  }

  void
  set_support_selection (bool support_selection) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_support_selection = static_cast<gboolean> (support_selection);
    gtk_print_operation_set_support_selection (_peel_this, _peel_support_selection);
  }

  void
  set_track_print_status (bool track_status) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_track_status = static_cast<gboolean> (track_status);
    gtk_print_operation_set_track_print_status (_peel_this, _peel_track_status);
  }

  void
  set_unit (Unit unit) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_print_operation_set_unit (_peel_this, _peel_unit);
  }

  void
  set_use_full_page (bool full_page) noexcept
  {
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    gboolean _peel_full_page = static_cast<gboolean> (full_page);
    gtk_print_operation_set_use_full_page (_peel_this, _peel_full_page);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_begin_print (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *)>::_peel_connect_by_name (this, "begin-print", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_begin_print (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *, PrintContext *), bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *)>::_peel_connect_by_name (this, "begin-print", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_create_custom_widget (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, GObject::Object * ()>::_peel_connect_by_name (this, "create-custom-widget", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_create_custom_widget (HandlerObject *object, GObject::Object * (HandlerObject::*handler_method) (PrintOperation *), bool after = false) noexcept
  {
    return Signal<PrintOperation, GObject::Object * ()>::_peel_connect_by_name (this, "create-custom-widget", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_custom_widget_apply (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void (Widget *)>::_peel_connect_by_name (this, "custom-widget-apply", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_custom_widget_apply (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *, Widget *), bool after = false) noexcept
  {
    return Signal<PrintOperation, void (Widget *)>::_peel_connect_by_name (this, "custom-widget-apply", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_done (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintOperation::Result)>::_peel_connect_by_name (this, "done", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_done (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *, PrintOperation::Result), bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintOperation::Result)>::_peel_connect_by_name (this, "done", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_draw_page (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *, int)>::_peel_connect_by_name (this, "draw-page", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_draw_page (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *, PrintContext *, int), bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *, int)>::_peel_connect_by_name (this, "draw-page", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_end_print (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *)>::_peel_connect_by_name (this, "end-print", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_end_print (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *, PrintContext *), bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *)>::_peel_connect_by_name (this, "end-print", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_paginate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, bool (PrintContext *)>::_peel_connect_by_name (this, "paginate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_paginate (HandlerObject *object, bool (HandlerObject::*handler_method) (PrintOperation *, PrintContext *), bool after = false) noexcept
  {
    return Signal<PrintOperation, bool (PrintContext *)>::_peel_connect_by_name (this, "paginate", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_preview (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, bool (PrintOperationPreview *, PrintContext *, Window *)>::_peel_connect_by_name (this, "preview", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_preview (HandlerObject *object, bool (HandlerObject::*handler_method) (PrintOperation *, PrintOperationPreview *, PrintContext *, Window *), bool after = false) noexcept
  {
    return Signal<PrintOperation, bool (PrintOperationPreview *, PrintContext *, Window *)>::_peel_connect_by_name (this, "preview", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_request_page_setup (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *, int, PageSetup *)>::_peel_connect_by_name (this, "request-page-setup", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_request_page_setup (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *, PrintContext *, int, PageSetup *), bool after = false) noexcept
  {
    return Signal<PrintOperation, void (PrintContext *, int, PageSetup *)>::_peel_connect_by_name (this, "request-page-setup", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_status_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void ()>::_peel_connect_by_name (this, "status-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_status_changed (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *), bool after = false) noexcept
  {
    return Signal<PrintOperation, void ()>::_peel_connect_by_name (this, "status-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_update_custom_widget (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperation, void (Widget *, PageSetup *, PrintSettings *)>::_peel_connect_by_name (this, "update-custom-widget", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_update_custom_widget (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperation *, Widget *, PageSetup *, PrintSettings *), bool after = false) noexcept
  {
    return Signal<PrintOperation, void (Widget *, PageSetup *, PrintSettings *)>::_peel_connect_by_name (this, "update-custom-widget", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_allow_async ()
  {
    return peel::Property<bool> { "allow-async" };
  }

  static peel::Property<int>
  prop_current_page ()
  {
    return peel::Property<int> { "current-page" };
  }

  static peel::Property<const char *>
  prop_custom_tab_label ()
  {
    return peel::Property<const char *> { "custom-tab-label" };
  }

  static peel::Property<PageSetup>
  prop_default_page_setup ()
  {
    return peel::Property<PageSetup> { "default-page-setup" };
  }

  static peel::Property<bool>
  prop_embed_page_setup ()
  {
    return peel::Property<bool> { "embed-page-setup" };
  }

  static peel::Property<const char *>
  prop_export_filename ()
  {
    return peel::Property<const char *> { "export-filename" };
  }

  static peel::Property<bool>
  prop_has_selection ()
  {
    return peel::Property<bool> { "has-selection" };
  }

  static peel::Property<const char *>
  prop_job_name ()
  {
    return peel::Property<const char *> { "job-name" };
  }

  static peel::Property<int>
  prop_n_pages ()
  {
    return peel::Property<int> { "n-pages" };
  }

  static peel::Property<int>
  prop_n_pages_to_print ()
  {
    return peel::Property<int> { "n-pages-to-print" };
  }

  static peel::Property<PrintSettings>
  prop_print_settings ()
  {
    return peel::Property<PrintSettings> { "print-settings" };
  }

  static peel::Property<bool>
  prop_show_progress ()
  {
    return peel::Property<bool> { "show-progress" };
  }

  static peel::Property<PrintStatus>
  prop_status ()
  {
    return peel::Property<PrintStatus> { "status" };
  }

  static peel::Property<const char *>
  prop_status_string ()
  {
    return peel::Property<const char *> { "status-string" };
  }

  static peel::Property<bool>
  prop_support_selection ()
  {
    return peel::Property<bool> { "support-selection" };
  }

  static peel::Property<bool>
  prop_track_print_status ()
  {
    return peel::Property<bool> { "track-print-status" };
  }

  static peel::Property<Unit>
  prop_unit ()
  {
    return peel::Property<Unit> { "unit" };
  }

  static peel::Property<bool>
  prop_use_full_page ()
  {
    return peel::Property<bool> { "use-full-page" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<PrintOperation> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_begin_print (PrintContext *context) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    _peel_class->begin_print (_peel_this, _peel_context);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  Widget *
  parent_vfunc_create_custom_widget () noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkWidget *_peel_return = _peel_class->create_custom_widget (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_custom_widget_apply (Widget *widget) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->custom_widget_apply (_peel_this, _peel_widget);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_done (PrintOperation::Result result) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintOperationResult _peel_result = static_cast<::GtkPrintOperationResult> (result);
    _peel_class->done (_peel_this, _peel_result);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_draw_page (PrintContext *context, int page_nr) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    _peel_class->draw_page (_peel_this, _peel_context, page_nr);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_end_print (PrintContext *context) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    _peel_class->end_print (_peel_this, _peel_context);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_paginate (PrintContext *context) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    gboolean _peel_return = _peel_class->paginate (_peel_this, _peel_context);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3, 4)
  bool
  parent_vfunc_preview (PrintOperationPreview *preview, PrintContext *context, Window *parent) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintOperationPreview *_peel_preview = reinterpret_cast<::GtkPrintOperationPreview *> (preview);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    gboolean _peel_return = _peel_class->preview (_peel_this, _peel_preview, _peel_context, _peel_parent);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 4)
  void
  parent_vfunc_request_page_setup (PrintContext *context, int page_nr, PageSetup *setup) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    ::GtkPageSetup *_peel_setup = reinterpret_cast<::GtkPageSetup *> (setup);
    _peel_class->request_page_setup (_peel_this, _peel_context, page_nr, _peel_setup);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_status_changed () noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    _peel_class->status_changed (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_update_custom_widget (Widget *widget, PageSetup *setup, PrintSettings *settings) noexcept
  {
    ::GtkPrintOperationClass *_peel_class = reinterpret_cast<::GtkPrintOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPrintOperation *_peel_this = reinterpret_cast<::GtkPrintOperation *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkPageSetup *_peel_setup = reinterpret_cast<::GtkPageSetup *> (setup);
    ::GtkPrintSettings *_peel_settings = reinterpret_cast<::GtkPrintSettings *> (settings);
    _peel_class->update_custom_widget (_peel_this, _peel_widget, _peel_setup, _peel_settings);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkPrintOperationClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_begin_print ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->begin_print = +[] (::GtkPrintOperation *operation, ::GtkPrintContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        _peel_this->DerivedClass::vfunc_begin_print (_peel_context);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create_custom_widget ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->create_custom_widget = +[] (::GtkPrintOperation *operation) -> ::GtkWidget *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        Widget *_peel_return = _peel_this->DerivedClass::vfunc_create_custom_widget ();
        return reinterpret_cast<::GtkWidget *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_custom_widget_apply ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->custom_widget_apply = +[] (::GtkPrintOperation *operation, ::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_custom_widget_apply (_peel_widget);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_done ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->done = +[] (::GtkPrintOperation *operation, ::GtkPrintOperationResult result) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        PrintOperation::Result _peel_result = static_cast<PrintOperation::Result> (result);
        _peel_this->DerivedClass::vfunc_done (_peel_result);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_page ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->draw_page = +[] (::GtkPrintOperation *operation, ::GtkPrintContext *context, int page_nr) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        _peel_this->DerivedClass::vfunc_draw_page (_peel_context, page_nr);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_end_print ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->end_print = +[] (::GtkPrintOperation *operation, ::GtkPrintContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        _peel_this->DerivedClass::vfunc_end_print (_peel_context);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_paginate ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->paginate = +[] (::GtkPrintOperation *operation, ::GtkPrintContext *context) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        bool _peel_return = _peel_this->DerivedClass::vfunc_paginate (_peel_context);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_preview ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->preview = +[] (::GtkPrintOperation *operation, ::GtkPrintOperationPreview *preview, ::GtkPrintContext *context, ::GtkWindow *parent) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        PrintOperationPreview *_peel_preview = reinterpret_cast<PrintOperationPreview *> (preview);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        Window *_peel_parent = reinterpret_cast<Window *> (parent);
        bool _peel_return = _peel_this->DerivedClass::vfunc_preview (_peel_preview, _peel_context, _peel_parent);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_request_page_setup ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->request_page_setup = +[] (::GtkPrintOperation *operation, ::GtkPrintContext *context, int page_nr, ::GtkPageSetup *setup) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        PageSetup *_peel_setup = reinterpret_cast<PageSetup *> (setup);
        _peel_this->DerivedClass::vfunc_request_page_setup (_peel_context, page_nr, _peel_setup);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_status_changed ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->status_changed = +[] (::GtkPrintOperation *operation) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        _peel_this->DerivedClass::vfunc_status_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_update_custom_widget ()
    {
      ::GtkPrintOperationClass *klass = reinterpret_cast<::GtkPrintOperationClass *> (this);
      klass->update_custom_widget = +[] (::GtkPrintOperation *operation, ::GtkWidget *widget, ::GtkPageSetup *setup, ::GtkPrintSettings *settings) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (operation);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        PageSetup *_peel_setup = reinterpret_cast<PageSetup *> (setup);
        PrintSettings *_peel_settings = reinterpret_cast<PrintSettings *> (settings);
        _peel_this->DerivedClass::vfunc_update_custom_widget (_peel_widget, _peel_setup, _peel_settings);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkPrintOperationClass),
                 "PrintOperation::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkPrintOperationClass),
                 "PrintOperation::Class align mismatch");
}; /* class PrintOperation */

static_assert (sizeof (PrintOperation) == sizeof (::GtkPrintOperation),
               "PrintOperation size mismatch");
static_assert (alignof (PrintOperation) == alignof (::GtkPrintOperation),
               "PrintOperation align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
