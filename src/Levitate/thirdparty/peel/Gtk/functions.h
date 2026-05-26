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
#include <peel/GLib/Quark.h>
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
} /* namespace GLib */

namespace GObject
{
class Object;
enum class ParamFlags : std::underlying_type<::GParamFlags>::type;
class ParamSpec;
struct Value;
} /* namespace GObject */

namespace Gdk
{
class ContentProvider;
class Display;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
class Texture;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
} /* namespace Gio */

namespace Gtk
{
class /* interface */ Accessible;
enum class DebugFlags : std::underlying_type<::GtkDebugFlags>::type;
class Expression;
class PageSetup;
class PrintSettings;
class Printer;
struct RequestedSize;
class StyleContext;
enum class TextDirection : std::underlying_type<::GtkTextDirection>::type;
class /* interface */ TreeModel;
class /* record */ TreePath;
class Widget;
class Window;
} /* namespace Gtk */

namespace Pango
{
class /* record */ Language;
class Layout;
} /* namespace Pango */


namespace Gtk
{
peel_no_warn_unused
static peel::String
accelerator_get_accessible_label (unsigned accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  ::GdkModifierType _peel_accelerator_mods = static_cast<::GdkModifierType> (accelerator_mods);
  char *_peel_return = gtk_accelerator_get_accessible_label (accelerator_key, _peel_accelerator_mods);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static Gdk::ModifierType
accelerator_get_default_mod_mask () noexcept
{
  ::GdkModifierType _peel_return = gtk_accelerator_get_default_mod_mask ();
  return static_cast<Gdk::ModifierType> (_peel_return);
}

peel_no_warn_unused
static peel::String
accelerator_get_label (unsigned accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  ::GdkModifierType _peel_accelerator_mods = static_cast<::GdkModifierType> (accelerator_mods);
  char *_peel_return = gtk_accelerator_get_label (accelerator_key, _peel_accelerator_mods);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
accelerator_get_label_with_keycode (Gdk::Display *display, unsigned accelerator_key, unsigned keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
  ::GdkModifierType _peel_accelerator_mods = static_cast<::GdkModifierType> (accelerator_mods);
  char *_peel_return = gtk_accelerator_get_label_with_keycode (_peel_display, accelerator_key, keycode, _peel_accelerator_mods);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
accelerator_name (unsigned accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  ::GdkModifierType _peel_accelerator_mods = static_cast<::GdkModifierType> (accelerator_mods);
  char *_peel_return = gtk_accelerator_name (accelerator_key, _peel_accelerator_mods);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
accelerator_name_with_keycode (Gdk::Display *display, unsigned accelerator_key, unsigned keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
  ::GdkModifierType _peel_accelerator_mods = static_cast<::GdkModifierType> (accelerator_mods);
  char *_peel_return = gtk_accelerator_name_with_keycode (_peel_display, accelerator_key, keycode, _peel_accelerator_mods);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (1)
static bool
accelerator_parse (const char *accelerator, unsigned *accelerator_key, Gdk::ModifierType *accelerator_mods) noexcept
{
  guint *_peel_accelerator_key = reinterpret_cast<guint *> (accelerator_key);
  ::GdkModifierType *_peel_accelerator_mods = reinterpret_cast<::GdkModifierType *> (accelerator_mods);
  gboolean _peel_return = gtk_accelerator_parse (accelerator, _peel_accelerator_key, _peel_accelerator_mods);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (5) peel_nonnull_args (1)
static bool
accelerator_parse_with_keycode (const char *accelerator, Gdk::Display *display, unsigned *accelerator_key, peel::ZTUniquePtr<unsigned[]> *accelerator_codes, Gdk::ModifierType *accelerator_mods) noexcept
{
  ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
  guint *_peel_accelerator_key = reinterpret_cast<guint *> (accelerator_key);
  guint *_peel_accelerator_codes;
  ::GdkModifierType *_peel_accelerator_mods = reinterpret_cast<::GdkModifierType *> (accelerator_mods);
  gboolean _peel_return = gtk_accelerator_parse_with_keycode (accelerator, _peel_display, _peel_accelerator_key, accelerator_codes ? &_peel_accelerator_codes : nullptr, _peel_accelerator_mods);
  if (accelerator_codes)
    *accelerator_codes = peel::ZTUniquePtr<unsigned[]>::adopt_ref (reinterpret_cast<unsigned *> (_peel_accelerator_codes));
  return !!_peel_return;
}

peel_no_warn_unused
static bool
accelerator_valid (unsigned keyval, Gdk::ModifierType modifiers) noexcept
{
  ::GdkModifierType _peel_modifiers = static_cast<::GdkModifierType> (modifiers);
  gboolean _peel_return = gtk_accelerator_valid (keyval, _peel_modifiers);
  return !!_peel_return;
}

/* accessible_property_init_value moved to AccessibleProperty.init_value */

/* accessible_relation_init_value moved to AccessibleRelation.init_value */

/* accessible_state_init_value moved to AccessibleState.init_value */

/* bitset_iter_init_at moved to BitsetIter.init_at */

/* bitset_iter_init_first moved to BitsetIter.init_first */

/* bitset_iter_init_last moved to BitsetIter.init_last */

/* builder_error_quark moved to BuilderError.quark */

peel_no_warn_unused
static const char *
check_version (unsigned required_major, unsigned required_minor, unsigned required_micro) noexcept
{
  return gtk_check_version (required_major, required_minor, required_micro);
}

/* constraint_vfl_parser_error_quark moved to ConstraintVflParserError.quark */

peel_no_warn_unused
static GLib::Quark
css_parser_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_css_parser_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}

peel_no_warn_unused
static GLib::Quark
css_parser_warning_quark () noexcept
{
  ::GQuark _peel_return = gtk_css_parser_warning_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}

/* dialog_error_quark moved to DialogError.quark */

peel_no_warn_unused
static void
disable_portal_interfaces (peel::StrvRef portal_interfaces) noexcept
{
  const char **_peel_portal_interfaces = const_cast<const char **> (portal_interfaces.data ());
  gtk_disable_portal_interfaces (_peel_portal_interfaces);
}

peel_no_warn_unused
static void
disable_portals () noexcept
{
  gtk_disable_portals ();
}

peel_no_warn_unused
static void
disable_setlocale () noexcept
{
  gtk_disable_setlocale ();
}

peel_no_warn_unused
static int
distribute_natural_allocation (int extra_space, peel::ArrayRef<RequestedSize> sizes) noexcept
{
  guint _peel_n_requested_sizes;
  ::GtkRequestedSize *_peel_sizes = (_peel_n_requested_sizes = sizes.size (), reinterpret_cast<::GtkRequestedSize *> (sizes.data ()));
  return gtk_distribute_natural_allocation (extra_space, _peel_n_requested_sizes, _peel_sizes);
}

/* editable_delegate_get_property moved to Editable.delegate_get_property */

/* editable_delegate_set_property moved to Editable.delegate_set_property */

/* editable_install_properties moved to Editable.install_properties */

/* Unsupported for now: enumerate_printers: explicitly skipped */

/* file_chooser_error_quark moved to FileChooserError.quark */

peel_no_warn_unused
static unsigned
get_binary_age () noexcept
{
  return gtk_get_binary_age ();
}

peel_no_warn_unused
static DebugFlags
get_debug_flags () noexcept
{
  ::GtkDebugFlags _peel_return = gtk_get_debug_flags ();
  return static_cast<DebugFlags> (_peel_return);
}

peel_no_warn_unused peel_returns_nonnull
static Pango::Language *
get_default_language () noexcept
{
  ::PangoLanguage *_peel_return = gtk_get_default_language ();
  peel_assume (_peel_return);
  return reinterpret_cast<Pango::Language *> (_peel_return);
}

peel_no_warn_unused
static unsigned
get_interface_age () noexcept
{
  return gtk_get_interface_age ();
}

peel_no_warn_unused
static TextDirection
get_locale_direction () noexcept
{
  ::GtkTextDirection _peel_return = gtk_get_locale_direction ();
  return static_cast<TextDirection> (_peel_return);
}

peel_no_warn_unused
static unsigned
get_major_version () noexcept
{
  return gtk_get_major_version ();
}

peel_no_warn_unused
static unsigned
get_micro_version () noexcept
{
  return gtk_get_micro_version ();
}

peel_no_warn_unused
static unsigned
get_minor_version () noexcept
{
  return gtk_get_minor_version ();
}

peel_no_warn_unused peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (4, 5, 6)
static void
hsv_to_rgb (float h, float s, float v, float *r, float *g, float *b) noexcept
{
  gtk_hsv_to_rgb (h, s, v, r, g, b);
}

/* icon_theme_error_quark moved to IconThemeError.quark */

peel_no_warn_unused
static void
init () noexcept
{
  gtk_init ();
}

peel_no_warn_unused
static bool
init_check () noexcept
{
  gboolean _peel_return = gtk_init_check ();
  return !!_peel_return;
}

peel_no_warn_unused
static bool
is_initialized () noexcept
{
  gboolean _peel_return = gtk_is_initialized ();
  return !!_peel_return;
}

/* native_get_for_surface moved to Native.get_for_surface */

/* ordering_from_cmpfunc moved to Ordering.from_cmpfunc */

/* paper_size_get_default moved to PaperSize.get_default */

/* paper_size_get_paper_sizes moved to PaperSize.get_paper_sizes */

peel_no_warn_unused peel_nonnull_args (1, 2, 3)
static peel::RefPtr<GObject::ParamSpec>
param_spec_expression (const char *name, const char *nick, const char *blurb, GObject::ParamFlags flags) noexcept
{
  ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
  ::GParamSpec *_peel_return = gtk_param_spec_expression (name, nick, blurb, _peel_flags);
  peel_assume (_peel_return);
  return peel::RefPtr<GObject::ParamSpec>::adopt_ref (reinterpret_cast<GObject::ParamSpec *> (_peel_return));
}

/* print_error_quark moved to PrintError.quark */

peel_no_warn_unused peel_nonnull_args (3)
static peel::RefPtr<PageSetup>
print_run_page_setup_dialog (Window *parent, PageSetup *page_setup, PrintSettings *settings) noexcept
{
  ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
  ::GtkPageSetup *_peel_page_setup = reinterpret_cast<::GtkPageSetup *> (page_setup);
  ::GtkPrintSettings *_peel_settings = reinterpret_cast<::GtkPrintSettings *> (settings);
  ::GtkPageSetup *_peel_return = gtk_print_run_page_setup_dialog (_peel_parent, _peel_page_setup, _peel_settings);
  peel_assume (_peel_return);
  return peel::RefPtr<PageSetup>::adopt_ref (reinterpret_cast<PageSetup *> (_peel_return));
}

template<typename PageSetupDoneFunc>
peel_no_warn_unused peel_nonnull_args (3)
static void
print_run_page_setup_dialog_async (Window *parent, PageSetup *page_setup, PrintSettings *settings, PageSetupDoneFunc &&done_cb) noexcept
{
  gpointer _peel_data;
  ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
  ::GtkPageSetup *_peel_page_setup = reinterpret_cast<::GtkPageSetup *> (page_setup);
  ::GtkPrintSettings *_peel_settings = reinterpret_cast<::GtkPrintSettings *> (settings);
  ::GtkPageSetupDoneFunc _peel_done_cb = peel::internals::CallbackHelper<void, ::GtkPageSetup *>::wrap_async_callback (
      static_cast<PageSetupDoneFunc &&> (done_cb),
      [] (::GtkPageSetup *page_setup, gpointer data) -> void
      {
        PageSetupDoneFunc &_peel_captured_done_cb = *reinterpret_cast<typename std::remove_reference<PageSetupDoneFunc>::type *> (data);
        PageSetup *_peel_page_setup = reinterpret_cast<PageSetup *> (page_setup);
        static_cast<PageSetupDoneFunc &&> (_peel_captured_done_cb) (_peel_page_setup);
      },
      &_peel_data);
  gtk_print_run_page_setup_dialog_async (_peel_parent, _peel_page_setup, _peel_settings, _peel_done_cb, _peel_data);
}

/* recent_manager_error_quark moved to RecentManagerError.quark */

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_activity (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_activity (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_arrow (StyleContext *context, ::cairo_t *cr, double angle, double x, double y, double size) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_arrow (_peel_context, cr, angle, x, y, size);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_background (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_background (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_check (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_check (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_expander (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_expander (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_focus (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_focus (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_frame (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_frame (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_handle (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_handle (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2, 3)
static void
render_icon (StyleContext *context, ::cairo_t *cr, Gdk::Texture *texture, double x, double y) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
  gtk_render_icon (_peel_context, cr, _peel_texture, x, y);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2, 5)
static void
render_layout (StyleContext *context, ::cairo_t *cr, double x, double y, Pango::Layout *layout) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
  gtk_render_layout (_peel_context, cr, x, y, _peel_layout);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_line (StyleContext *context, ::cairo_t *cr, double x0, double y0, double x1, double y1) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_line (_peel_context, cr, x0, y0, x1, y1);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
render_option (StyleContext *context, ::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
  gtk_render_option (_peel_context, cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (4, 5, 6)
static void
rgb_to_hsv (float r, float g, float b, float *h, float *s, float *v) noexcept
{
  gtk_rgb_to_hsv (r, g, b, h, s, v);
}

peel_no_warn_unused
static void
set_debug_flags (DebugFlags flags) noexcept
{
  ::GtkDebugFlags _peel_flags = static_cast<::GtkDebugFlags> (flags);
  gtk_set_debug_flags (_peel_flags);
}

template<typename... Args>
peel_no_warn_unused
static void
show_about_dialog (Window *parent, Args &&...args) noexcept
{
  ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
  peel::internals::ObjectCreateHelper<Args...>::template invoke<void, decltype (gtk_show_about_dialog) *, ::GtkWindow *> (gtk_show_about_dialog, _peel_parent, std::forward<Args> (args)...);
}

peel_no_warn_unused peel_nonnull_args (2)
static void
show_uri (Window *parent, const char *uri, uint32_t timestamp) noexcept
{
  ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
  gtk_show_uri (_peel_parent, uri, timestamp);
}

template<typename AsyncReadyCallback>
peel_no_warn_unused peel_nonnull_args (2)
static void
show_uri_full (Window *parent, const char *uri, uint32_t timestamp, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
{
  gpointer _peel_user_data;
  ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
  gtk_show_uri_full (_peel_parent, uri, timestamp, _peel_cancellable, _peel_callback, _peel_user_data);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
show_uri_full_finish (Window *parent, Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
  ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = gtk_show_uri_full_finish (_peel_parent, _peel_result, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

/* svg_error_get_attribute moved to SvgError.get_attribute */

/* svg_error_get_element moved to SvgError.get_element */

/* svg_error_get_end moved to SvgError.get_end */

/* svg_error_get_start moved to SvgError.get_start */

/* svg_error_quark moved to SvgError.quark */

peel_no_warn_unused peel_nonnull_args (1, 2, 4, 5, 6)
static void
test_accessible_assertion_message_role (const char *domain, const char *file, int line, const char *func, const char *expr, Accessible *accessible, Accessible::Role expected_role, Accessible::Role actual_role) noexcept
{
  ::GtkAccessible *_peel_accessible = reinterpret_cast<::GtkAccessible *> (accessible);
  ::GtkAccessibleRole _peel_expected_role = static_cast<::GtkAccessibleRole> (expected_role);
  ::GtkAccessibleRole _peel_actual_role = static_cast<::GtkAccessibleRole> (actual_role);
  gtk_test_accessible_assertion_message_role (domain, file, line, func, expr, _peel_accessible, _peel_expected_role, _peel_actual_role);
}

/* Unsupported for now: test_accessible_check_property: varargs */

/* Unsupported for now: test_accessible_check_relation: varargs */

/* Unsupported for now: test_accessible_check_state: varargs */

peel_no_warn_unused peel_nonnull_args (1)
static bool
test_accessible_has_property (Accessible *accessible, Accessible::Property property) noexcept
{
  ::GtkAccessible *_peel_accessible = reinterpret_cast<::GtkAccessible *> (accessible);
  ::GtkAccessibleProperty _peel_property = static_cast<::GtkAccessibleProperty> (property);
  gboolean _peel_return = gtk_test_accessible_has_property (_peel_accessible, _peel_property);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
test_accessible_has_relation (Accessible *accessible, Accessible::Relation relation) noexcept
{
  ::GtkAccessible *_peel_accessible = reinterpret_cast<::GtkAccessible *> (accessible);
  ::GtkAccessibleRelation _peel_relation = static_cast<::GtkAccessibleRelation> (relation);
  gboolean _peel_return = gtk_test_accessible_has_relation (_peel_accessible, _peel_relation);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
test_accessible_has_role (Accessible *accessible, Accessible::Role role) noexcept
{
  ::GtkAccessible *_peel_accessible = reinterpret_cast<::GtkAccessible *> (accessible);
  ::GtkAccessibleRole _peel_role = static_cast<::GtkAccessibleRole> (role);
  gboolean _peel_return = gtk_test_accessible_has_role (_peel_accessible, _peel_role);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
test_accessible_has_state (Accessible *accessible, Accessible::State state) noexcept
{
  ::GtkAccessible *_peel_accessible = reinterpret_cast<::GtkAccessible *> (accessible);
  ::GtkAccessibleState _peel_state = static_cast<::GtkAccessibleState> (state);
  gboolean _peel_return = gtk_test_accessible_has_state (_peel_accessible, _peel_state);
  return !!_peel_return;
}

/* Unsupported for now: test_init: varargs */

peel_no_warn_unused
static peel::ArrayRef<const GObject::Type>
test_list_all_types () noexcept
{
  guint _peel_n_types;
  const GType *_peel_return = gtk_test_list_all_types (&_peel_n_types);
  peel_assume (_peel_return);
  return peel::ArrayRef<const GObject::Type> (reinterpret_cast<const GObject::Type *> (_peel_return), _peel_n_types);
}

peel_no_warn_unused
static void
test_register_all_types () noexcept
{
  gtk_test_register_all_types ();
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_widget_wait_for_draw (Widget *widget) noexcept
{
  ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
  gtk_test_widget_wait_for_draw (_peel_widget);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static peel::RefPtr<Gdk::ContentProvider>
tree_create_row_drag_content (TreeModel *tree_model, TreePath *path) noexcept
{
  ::GtkTreeModel *_peel_tree_model = reinterpret_cast<::GtkTreeModel *> (tree_model);
  ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
  ::GdkContentProvider *_peel_return = gtk_tree_create_row_drag_content (_peel_tree_model, _peel_path);
  peel_assume (_peel_return);
  return peel::RefPtr<Gdk::ContentProvider>::adopt_ref (reinterpret_cast<Gdk::ContentProvider *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (1) peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (1)
static bool
tree_get_row_drag_data (const GObject::Value *value, TreeModel **tree_model, peel::UniquePtr<TreePath> *path) noexcept
{
  const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
  ::GtkTreeModel **_peel_tree_model = reinterpret_cast<::GtkTreeModel **> (tree_model);
  ::GtkTreePath *_peel_path;
  gboolean _peel_return = gtk_tree_get_row_drag_data (_peel_value, _peel_tree_model, path ? &_peel_path : nullptr);
  if (path)
    *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
  return !!_peel_return;
}

/* tree_row_reference_deleted moved to TreeRowReference.deleted */

/* tree_row_reference_inserted moved to TreeRowReference.inserted */

/* tree_row_reference_reordered moved to TreeRowReference.reordered */

/* Unsupported for now: value_dup_expression: explicitly skipped */

/* Unsupported for now: value_get_expression: explicitly skipped */

/* Unsupported for now: value_set_expression: explicitly skipped */

/* Unsupported for now: value_take_expression: explicitly skipped */



} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/ParamFlags.h>
#include <peel/GObject/ParamSpec.h>
#include <peel/GObject/Value.h>
#include <peel/Gdk/ContentProvider.h>
#include <peel/Gdk/Display.h>
#include <peel/Gdk/ModifierType.h>
#include <peel/Gdk/Texture.h>
#include <peel/Gio/AsyncResult.h>
#include <peel/Gio/Cancellable.h>
#include <peel/Gtk/AccessibleProperty.h>
#include <peel/Gtk/AccessibleRelation.h>
#include <peel/Gtk/AccessibleRole.h>
#include <peel/Gtk/AccessibleState.h>
#include <peel/Gtk/DebugFlags.h>
#include <peel/Gtk/Expression.h>
#include <peel/Gtk/PageSetup.h>
#include <peel/Gtk/PrintSettings.h>
#include <peel/Gtk/RequestedSize.h>
#include <peel/Gtk/StyleContext.h>
#include <peel/Gtk/TextDirection.h>
#include <peel/Gtk/TreeModel.h>
#include <peel/Gtk/TreePath.h>
#include <peel/Gtk/Widget.h>
#include <peel/Gtk/Window.h>
#include <peel/Pango/Language.h>
#include <peel/Pango/Layout.h>
