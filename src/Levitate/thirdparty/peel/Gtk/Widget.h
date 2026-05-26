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
#include <peel/GLib/List.h>
#include <peel/GLib/Variant.h>
#include <peel/GObject/InitiallyUnowned.h>
#include <peel/Gtk/Accessible.h>
#include <peel/Gtk/Builder.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
class /* record */ Variant;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gdk
{
class Clipboard;
class Cursor;
class Display;
class FrameClock;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
struct RGBA;
struct Rectangle;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ ActionGroup;
class /* interface */ ListModel;
} /* namespace Gio */

namespace Graphene
{
struct Matrix;
struct Point;
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
class /* record */ Transform;
} /* namespace Gsk */

namespace Gtk
{
enum class Align : std::underlying_type<::GtkAlign>::type;
class /* record */ CssStyleChange;
enum class DirectionType : std::underlying_type<::GtkDirectionType>::type;
class EventController;
class LayoutManager;
class /* interface */ Native;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
enum class Overflow : std::underlying_type<::GtkOverflow>::type;
enum class PickFlags : std::underlying_type<::GtkPickFlags>::type;
struct Requisition;
class /* interface */ Root;
class Settings;
class Shortcut;
enum class SizeRequestMode : std::underlying_type<::GtkSizeRequestMode>::type;
class Snapshot;
enum class StateFlags : std::underlying_type<::GtkStateFlags>::type;
class StyleContext;
enum class SystemSetting : std::underlying_type<::GtkSystemSetting>::type;
enum class TextDirection : std::underlying_type<::GtkTextDirection>::type;
class Tooltip;
class Widget;
} /* namespace Gtk */

namespace Pango
{
class Context;
class FontMap;
class Layout;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Widget> ()
{
  return gtk_widget_get_type ();
}


namespace Gtk
{
class Widget : public GObject::InitiallyUnowned
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  unsigned char _placeholder[sizeof (::GtkWidget) - sizeof (GObject::InitiallyUnowned)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Widget () = delete;
  Widget (const Widget &) = delete;
  Widget (Widget &&) = delete;
  Widget &
  operator = (const Widget &) = delete;
  Widget &
  operator = (Widget &&) = delete;
protected:
  ~Widget () = default;
public:

  static TextDirection
  get_default_direction () noexcept
  {
    ::GtkTextDirection _peel_return = gtk_widget_get_default_direction ();
    return static_cast<TextDirection> (_peel_return);
  }

  static void
  set_default_direction (TextDirection dir) noexcept
  {
    ::GtkTextDirection _peel_dir = static_cast<::GtkTextDirection> (dir);
    gtk_widget_set_default_direction (_peel_dir);
  }

protected:
  peel_nonnull_args (2)
  void
  action_set_enabled (const char *action_name, bool enabled) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    gtk_widget_action_set_enabled (_peel_this, action_name, _peel_enabled);
  }

public:
  bool
  activate () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_activate (_peel_this);
    return !!_peel_return;
  }

  template<typename... Args>
  peel_nonnull_args (2)
  bool
  activate_action (const char *name, const char *format_string, Args &&...args) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_activate_action (_peel_this, name, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
    return !!_peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (2)
  bool
  activate_action_variant (const char *name, GLib::Variant *args) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GVariant *_peel_args = reinterpret_cast<::GVariant *> (args);
    gboolean _peel_return = gtk_widget_activate_action_variant (_peel_this, name, _peel_args);
    return !!_peel_return;
  }

  void
  activate_default () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_activate_default (_peel_this);
  }

  void
  add_controller (peel::RefPtr<EventController> controller) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkEventController *_peel_controller = reinterpret_cast<::GtkEventController *> (std::move (controller).release_ref ());
    gtk_widget_add_controller (_peel_this, _peel_controller);
  }

  peel_nonnull_args (2)
  void
  add_css_class (const char *css_class) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_add_css_class (_peel_this, css_class);
  }

  peel_nonnull_args (2)
  void
  add_mnemonic_label (Widget *label) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_label = reinterpret_cast<::GtkWidget *> (label);
    gtk_widget_add_mnemonic_label (_peel_this, _peel_label);
  }

  template<typename TickCallback>
  unsigned
  add_tick_callback (TickCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_notify;
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkTickCallback _peel_callback = peel::internals::CallbackHelper<gboolean, ::GtkWidget *, ::GdkFrameClock *>::wrap_notified_callback (
      static_cast<TickCallback &&> (callback),
      [] (::GtkWidget *widget, ::GdkFrameClock *frame_clock, gpointer user_data) -> gboolean
      {
        TickCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<TickCallback>::type *> (user_data);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        Gdk::FrameClock *_peel_frame_clock = reinterpret_cast<Gdk::FrameClock *> (frame_clock);
        bool _peel_return = _peel_captured_callback (_peel_widget, _peel_frame_clock);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_notify, peel::internals::is_const_invocable<TickCallback, void, Widget *, Gdk::FrameClock *>::value);
    return gtk_widget_add_tick_callback (_peel_this, _peel_callback, _peel_user_data, _peel_notify);
  }

  void
  allocate (int width, int height, int baseline, peel::RefPtr<Gsk::Transform> transform) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GskTransform *_peel_transform = reinterpret_cast<::GskTransform *> (std::move (transform).release_ref ());
    gtk_widget_allocate (_peel_this, width, height, baseline, _peel_transform);
  }

  bool
  child_focus (DirectionType direction) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkDirectionType _peel_direction = static_cast<::GtkDirectionType> (direction);
    gboolean _peel_return = gtk_widget_child_focus (_peel_this, _peel_direction);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  compute_bounds (Widget *target, Graphene::Rect *out_bounds) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_target = reinterpret_cast<::GtkWidget *> (target);
    ::graphene_rect_t *_peel_out_bounds = reinterpret_cast<::graphene_rect_t *> (out_bounds);
    gboolean _peel_return = gtk_widget_compute_bounds (_peel_this, _peel_target, _peel_out_bounds);
    return !!_peel_return;
  }

  bool
  compute_expand (Orientation orientation) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    gboolean _peel_return = gtk_widget_compute_expand (_peel_this, _peel_orientation);
    return !!_peel_return;
  }

  peel_arg_in (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  bool
  compute_point (Widget *target, const Graphene::Point *point, Graphene::Point *out_point) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_target = reinterpret_cast<::GtkWidget *> (target);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    ::graphene_point_t *_peel_out_point = reinterpret_cast<::graphene_point_t *> (out_point);
    gboolean _peel_return = gtk_widget_compute_point (_peel_this, _peel_target, _peel_point, _peel_out_point);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  compute_transform (Widget *target, Graphene::Matrix *out_transform) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_target = reinterpret_cast<::GtkWidget *> (target);
    ::graphene_matrix_t *_peel_out_transform = reinterpret_cast<::graphene_matrix_t *> (out_transform);
    gboolean _peel_return = gtk_widget_compute_transform (_peel_this, _peel_target, _peel_out_transform);
    return !!_peel_return;
  }

  bool
  contains (double x, double y) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_contains (_peel_this, x, y);
    return !!_peel_return;
  }

  peel::RefPtr<Pango::Context>
  create_pango_context () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::PangoContext *_peel_return = gtk_widget_create_pango_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Pango::Context>::adopt_ref (reinterpret_cast<Pango::Context *> (_peel_return));
  }

  peel::RefPtr<Pango::Layout>
  create_pango_layout (const char *text) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::PangoLayout *_peel_return = gtk_widget_create_pango_layout (_peel_this, text);
    peel_assume (_peel_return);
    return peel::RefPtr<Pango::Layout>::adopt_ref (reinterpret_cast<Pango::Layout *> (_peel_return));
  }

protected:
  void
  dispose_template (GObject::Type widget_type) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_dispose_template (_peel_this, widget_type);
  }

public:
  bool
  drag_check_threshold (int start_x, int start_y, int current_x, int current_y) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_drag_check_threshold (_peel_this, start_x, start_y, current_x, current_y);
    return !!_peel_return;
  }

  void
  error_bell () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_error_bell (_peel_this);
  }

  int
  get_allocated_baseline () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_allocated_baseline (_peel_this);
  }

  int
  get_allocated_height () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_allocated_height (_peel_this);
  }

  int
  get_allocated_width () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_allocated_width (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_allocation (Gdk::Rectangle *allocation) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkAllocation *_peel_allocation = reinterpret_cast<::GtkAllocation *> (allocation);
    gtk_widget_get_allocation (_peel_this, _peel_allocation);
  }

  Widget *
  get_ancestor (GObject::Type widget_type) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_return = gtk_widget_get_ancestor (_peel_this, widget_type);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_baseline () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_baseline (_peel_this);
  }

  bool
  get_can_focus () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_can_focus (_peel_this);
    return !!_peel_return;
  }

  bool
  get_can_target () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_can_target (_peel_this);
    return !!_peel_return;
  }

  bool
  get_child_visible () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_child_visible (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Gdk::Clipboard *
  get_clipboard () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GdkClipboard *_peel_return = gtk_widget_get_clipboard (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::Clipboard *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_color (Gdk::RGBA *color) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GdkRGBA *_peel_color = reinterpret_cast<::GdkRGBA *> (color);
    gtk_widget_get_color (_peel_this, _peel_color);
  }

  peel::Strv
  get_css_classes () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    char **_peel_return = gtk_widget_get_css_classes (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_css_name () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_css_name (_peel_this);
  }

  Gdk::Cursor *
  get_cursor () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GdkCursor *_peel_return = gtk_widget_get_cursor (_peel_this);
    return reinterpret_cast<Gdk::Cursor *> (_peel_return);
  }

  TextDirection
  get_direction () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkTextDirection _peel_return = gtk_widget_get_direction (_peel_this);
    return static_cast<TextDirection> (_peel_return);
  }

  peel_returns_nonnull
  Gdk::Display *
  get_display () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GdkDisplay *_peel_return = gtk_widget_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::Display *> (_peel_return);
  }

  Widget *
  get_first_child () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_return = gtk_widget_get_first_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  Widget *
  get_focus_child () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_return = gtk_widget_get_focus_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_focus_on_click () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_focus_on_click (_peel_this);
    return !!_peel_return;
  }

  bool
  get_focusable () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_focusable (_peel_this);
    return !!_peel_return;
  }

  Pango::FontMap *
  get_font_map () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::PangoFontMap *_peel_return = gtk_widget_get_font_map (_peel_this);
    return reinterpret_cast<Pango::FontMap *> (_peel_return);
  }

  const ::cairo_font_options_t *
  get_font_options () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_font_options (_peel_this);
  }

  Gdk::FrameClock *
  get_frame_clock () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GdkFrameClock *_peel_return = gtk_widget_get_frame_clock (_peel_this);
    return reinterpret_cast<Gdk::FrameClock *> (_peel_return);
  }

  Align
  get_halign () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkAlign _peel_return = gtk_widget_get_halign (_peel_this);
    return static_cast<Align> (_peel_return);
  }

  bool
  get_has_tooltip () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_has_tooltip (_peel_this);
    return !!_peel_return;
  }

  int
  get_height () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_height (_peel_this);
  }

  bool
  get_hexpand () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_hexpand (_peel_this);
    return !!_peel_return;
  }

  bool
  get_hexpand_set () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_hexpand_set (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_last_child () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_return = gtk_widget_get_last_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  LayoutManager *
  get_layout_manager () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkLayoutManager *_peel_return = gtk_widget_get_layout_manager (_peel_this);
    return reinterpret_cast<LayoutManager *> (_peel_return);
  }

  bool
  get_limit_events () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_limit_events (_peel_this);
    return !!_peel_return;
  }

  bool
  get_mapped () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_mapped (_peel_this);
    return !!_peel_return;
  }

  int
  get_margin_bottom () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_margin_bottom (_peel_this);
  }

  int
  get_margin_end () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_margin_end (_peel_this);
  }

  int
  get_margin_start () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_margin_start (_peel_this);
  }

  int
  get_margin_top () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_margin_top (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_name (_peel_this);
  }

  Native *
  get_native () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkNative *_peel_return = gtk_widget_get_native (_peel_this);
    return reinterpret_cast<Native *> (_peel_return);
  }

  Widget *
  get_next_sibling () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_return = gtk_widget_get_next_sibling (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  double
  get_opacity () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_opacity (_peel_this);
  }

  Overflow
  get_overflow () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkOverflow _peel_return = gtk_widget_get_overflow (_peel_this);
    return static_cast<Overflow> (_peel_return);
  }

  peel_returns_nonnull
  Pango::Context *
  get_pango_context () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::PangoContext *_peel_return = gtk_widget_get_pango_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::Context *> (_peel_return);
  }

  Widget *
  get_parent () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_return = gtk_widget_get_parent (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_preferred_size (Requisition *minimum_size, Requisition *natural_size) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkRequisition *_peel_minimum_size = reinterpret_cast<::GtkRequisition *> (minimum_size);
    ::GtkRequisition *_peel_natural_size = reinterpret_cast<::GtkRequisition *> (natural_size);
    gtk_widget_get_preferred_size (_peel_this, _peel_minimum_size, _peel_natural_size);
  }

  Widget *
  get_prev_sibling () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_return = gtk_widget_get_prev_sibling (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_returns_nonnull
  Gdk::Clipboard *
  get_primary_clipboard () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GdkClipboard *_peel_return = gtk_widget_get_primary_clipboard (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::Clipboard *> (_peel_return);
  }

  bool
  get_realized () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_realized (_peel_this);
    return !!_peel_return;
  }

  bool
  get_receives_default () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_receives_default (_peel_this);
    return !!_peel_return;
  }

  SizeRequestMode
  get_request_mode () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkSizeRequestMode _peel_return = gtk_widget_get_request_mode (_peel_this);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  Root *
  get_root () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkRoot *_peel_return = gtk_widget_get_root (_peel_this);
    return reinterpret_cast<Root *> (_peel_return);
  }

  int
  get_scale_factor () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_scale_factor (_peel_this);
  }

  bool
  get_sensitive () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_sensitive (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Settings *
  get_settings () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkSettings *_peel_return = gtk_widget_get_settings (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Settings *> (_peel_return);
  }

  int
  get_size (Orientation orientation) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    return gtk_widget_get_size (_peel_this, _peel_orientation);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_size_request (int *width, int *height) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_get_size_request (_peel_this, width, height);
  }

  StateFlags
  get_state_flags () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkStateFlags _peel_return = gtk_widget_get_state_flags (_peel_this);
    return static_cast<StateFlags> (_peel_return);
  }

  peel_returns_nonnull
  StyleContext *
  get_style_context () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkStyleContext *_peel_return = gtk_widget_get_style_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<StyleContext *> (_peel_return);
  }

protected:
  peel_nonnull_args (3) peel_returns_nonnull
  GObject::Object *
  get_template_child (GObject::Type widget_type, const char *name) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GObject *_peel_return = gtk_widget_get_template_child (_peel_this, widget_type, name);
    peel_assume (_peel_return);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

public:
  const char *
  get_tooltip_markup () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_tooltip_markup (_peel_this);
  }

  const char *
  get_tooltip_text () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_tooltip_text (_peel_this);
  }

  Align
  get_valign () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkAlign _peel_return = gtk_widget_get_valign (_peel_this);
    return static_cast<Align> (_peel_return);
  }

  bool
  get_vexpand () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_vexpand (_peel_this);
    return !!_peel_return;
  }

  bool
  get_vexpand_set () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_vexpand_set (_peel_this);
    return !!_peel_return;
  }

  bool
  get_visible () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_get_visible (_peel_this);
    return !!_peel_return;
  }

  int
  get_width () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    return gtk_widget_get_width (_peel_this);
  }

  bool
  grab_focus () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_grab_focus (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_css_class (const char *css_class) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_has_css_class (_peel_this, css_class);
    return !!_peel_return;
  }

  bool
  has_default () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_has_default (_peel_this);
    return !!_peel_return;
  }

  bool
  has_focus () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_has_focus (_peel_this);
    return !!_peel_return;
  }

  bool
  has_visible_focus () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_has_visible_focus (_peel_this);
    return !!_peel_return;
  }

  void
  hide () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_hide (_peel_this);
  }

  bool
  in_destruction () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_in_destruction (_peel_this);
    return !!_peel_return;
  }

protected:
  void
  init_template () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_init_template (_peel_this);
  }

public:
  peel_nonnull_args (2)
  void
  insert_action_group (const char *name, Gio::ActionGroup *group) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GActionGroup *_peel_group = reinterpret_cast<::GActionGroup *> (group);
    gtk_widget_insert_action_group (_peel_this, name, _peel_group);
  }

protected:
  void
  insert_after (peel::FloatPtr<Widget> widget, Widget *previous_sibling) noexcept
  {
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (std::move (widget).release_floating_ptr ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_previous_sibling = reinterpret_cast<::GtkWidget *> (previous_sibling);
    gtk_widget_insert_after (_peel_widget, _peel_this, _peel_previous_sibling);
  }

  void
  insert_before (peel::FloatPtr<Widget> widget, Widget *next_sibling) noexcept
  {
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (std::move (widget).release_floating_ptr ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_next_sibling = reinterpret_cast<::GtkWidget *> (next_sibling);
    gtk_widget_insert_before (_peel_widget, _peel_this, _peel_next_sibling);
  }

public:
  peel_nonnull_args (2)
  bool
  is_ancestor (Widget *ancestor) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_ancestor = reinterpret_cast<::GtkWidget *> (ancestor);
    gboolean _peel_return = gtk_widget_is_ancestor (_peel_this, _peel_ancestor);
    return !!_peel_return;
  }

  bool
  is_drawable () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_is_drawable (_peel_this);
    return !!_peel_return;
  }

  bool
  is_focus () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_is_focus (_peel_this);
    return !!_peel_return;
  }

  bool
  is_sensitive () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_is_sensitive (_peel_this);
    return !!_peel_return;
  }

  bool
  is_visible () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_is_visible (_peel_this);
    return !!_peel_return;
  }

  bool
  keynav_failed (DirectionType direction) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkDirectionType _peel_direction = static_cast<::GtkDirectionType> (direction);
    gboolean _peel_return = gtk_widget_keynav_failed (_peel_this, _peel_direction);
    return !!_peel_return;
  }

  GLib::List<Widget *>
  list_mnemonic_labels () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    GList *_peel_return = gtk_widget_list_mnemonic_labels (_peel_this);
    return GLib::List<Widget *>::adopt_list (_peel_return);
  }

  void
  map () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_map (_peel_this);
  }

  peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  void
  measure (Orientation orientation, int for_size, int *minimum, int *natural, int *minimum_baseline, int *natural_baseline) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    gtk_widget_measure (_peel_this, _peel_orientation, for_size, minimum, natural, minimum_baseline, natural_baseline);
  }

  bool
  mnemonic_activate (bool group_cycling) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_group_cycling = static_cast<gboolean> (group_cycling);
    gboolean _peel_return = gtk_widget_mnemonic_activate (_peel_this, _peel_group_cycling);
    return !!_peel_return;
  }

  peel::RefPtr<Gio::ListModel>
  observe_children () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GListModel *_peel_return = gtk_widget_observe_children (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  peel::RefPtr<Gio::ListModel>
  observe_controllers () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GListModel *_peel_return = gtk_widget_observe_controllers (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  Widget *
  pick (double x, double y, PickFlags flags) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkPickFlags _peel_flags = static_cast<::GtkPickFlags> (flags);
    ::GtkWidget *_peel_return = gtk_widget_pick (_peel_this, x, y, _peel_flags);
    return reinterpret_cast<Widget *> (_peel_return);
  }

protected:
  void
  queue_allocate () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_queue_allocate (_peel_this);
  }

  void
  queue_draw () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_queue_draw (_peel_this);
  }

  void
  queue_resize () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_queue_resize (_peel_this);
  }

public:
  void
  realize () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_realize (_peel_this);
  }

  peel_nonnull_args (2)
  void
  remove_controller (EventController *controller) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkEventController *_peel_controller = reinterpret_cast<::GtkEventController *> (controller);
    gtk_widget_remove_controller (_peel_this, _peel_controller);
  }

  peel_nonnull_args (2)
  void
  remove_css_class (const char *css_class) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_remove_css_class (_peel_this, css_class);
  }

  peel_nonnull_args (2)
  void
  remove_mnemonic_label (Widget *label) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_label = reinterpret_cast<::GtkWidget *> (label);
    gtk_widget_remove_mnemonic_label (_peel_this, _peel_label);
  }

  void
  remove_tick_callback (unsigned id) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_remove_tick_callback (_peel_this, id);
  }

  void
  set_can_focus (bool can_focus) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_can_focus = static_cast<gboolean> (can_focus);
    gtk_widget_set_can_focus (_peel_this, _peel_can_focus);
  }

  void
  set_can_target (bool can_target) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_can_target = static_cast<gboolean> (can_target);
    gtk_widget_set_can_target (_peel_this, _peel_can_target);
  }

  void
  set_child_visible (bool child_visible) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_child_visible = static_cast<gboolean> (child_visible);
    gtk_widget_set_child_visible (_peel_this, _peel_child_visible);
  }

  void
  set_css_classes (peel::StrvRef classes) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    const char **_peel_classes = const_cast<const char **> (classes.data ());
    gtk_widget_set_css_classes (_peel_this, _peel_classes);
  }

  void
  set_cursor (Gdk::Cursor *cursor) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GdkCursor *_peel_cursor = reinterpret_cast<::GdkCursor *> (cursor);
    gtk_widget_set_cursor (_peel_this, _peel_cursor);
  }

  void
  set_cursor_from_name (const char *name) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_cursor_from_name (_peel_this, name);
  }

  void
  set_direction (TextDirection dir) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkTextDirection _peel_dir = static_cast<::GtkTextDirection> (dir);
    gtk_widget_set_direction (_peel_this, _peel_dir);
  }

  void
  set_focus_child (Widget *child) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_widget_set_focus_child (_peel_this, _peel_child);
  }

  void
  set_focus_on_click (bool focus_on_click) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_focus_on_click = static_cast<gboolean> (focus_on_click);
    gtk_widget_set_focus_on_click (_peel_this, _peel_focus_on_click);
  }

  void
  set_focusable (bool focusable) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_focusable = static_cast<gboolean> (focusable);
    gtk_widget_set_focusable (_peel_this, _peel_focusable);
  }

  void
  set_font_map (Pango::FontMap *font_map) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::PangoFontMap *_peel_font_map = reinterpret_cast<::PangoFontMap *> (font_map);
    gtk_widget_set_font_map (_peel_this, _peel_font_map);
  }

  peel_arg_in (2)
  void
  set_font_options (const ::cairo_font_options_t *options) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_font_options (_peel_this, options);
  }

  void
  set_halign (Align align) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkAlign _peel_align = static_cast<::GtkAlign> (align);
    gtk_widget_set_halign (_peel_this, _peel_align);
  }

  void
  set_has_tooltip (bool has_tooltip) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_has_tooltip = static_cast<gboolean> (has_tooltip);
    gtk_widget_set_has_tooltip (_peel_this, _peel_has_tooltip);
  }

  void
  set_hexpand (bool expand) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_widget_set_hexpand (_peel_this, _peel_expand);
  }

  void
  set_hexpand_set (bool set) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_set = static_cast<gboolean> (set);
    gtk_widget_set_hexpand_set (_peel_this, _peel_set);
  }

  void
  set_layout_manager (peel::RefPtr<LayoutManager> layout_manager) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkLayoutManager *_peel_layout_manager = reinterpret_cast<::GtkLayoutManager *> (std::move (layout_manager).release_ref ());
    gtk_widget_set_layout_manager (_peel_this, _peel_layout_manager);
  }

  void
  set_limit_events (bool limit_events) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_limit_events = static_cast<gboolean> (limit_events);
    gtk_widget_set_limit_events (_peel_this, _peel_limit_events);
  }

  void
  set_margin_bottom (int margin) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_margin_bottom (_peel_this, margin);
  }

  void
  set_margin_end (int margin) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_margin_end (_peel_this, margin);
  }

  void
  set_margin_start (int margin) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_margin_start (_peel_this, margin);
  }

  void
  set_margin_top (int margin) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_margin_top (_peel_this, margin);
  }

  peel_nonnull_args (2)
  void
  set_name (const char *name) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_name (_peel_this, name);
  }

  void
  set_opacity (double opacity) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_opacity (_peel_this, opacity);
  }

  void
  set_overflow (Overflow overflow) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkOverflow _peel_overflow = static_cast<::GtkOverflow> (overflow);
    gtk_widget_set_overflow (_peel_this, _peel_overflow);
  }

protected:
  void
  set_parent (peel::FloatPtr<Widget> widget) noexcept
  {
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (std::move (widget).release_floating_ptr ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_parent (_peel_widget, _peel_this);
  }

public:
  void
  set_receives_default (bool receives_default) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_receives_default = static_cast<gboolean> (receives_default);
    gtk_widget_set_receives_default (_peel_this, _peel_receives_default);
  }

  void
  set_sensitive (bool sensitive) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_sensitive = static_cast<gboolean> (sensitive);
    gtk_widget_set_sensitive (_peel_this, _peel_sensitive);
  }

  void
  set_size_request (int width, int height) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_size_request (_peel_this, width, height);
  }

protected:
  void
  set_state_flags (StateFlags flags, bool clear) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkStateFlags _peel_flags = static_cast<::GtkStateFlags> (flags);
    gboolean _peel_clear = static_cast<gboolean> (clear);
    gtk_widget_set_state_flags (_peel_this, _peel_flags, _peel_clear);
  }

public:
  void
  set_tooltip_markup (const char *markup) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_tooltip_markup (_peel_this, markup);
  }

  void
  set_tooltip_text (const char *text) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_set_tooltip_text (_peel_this, text);
  }

  void
  set_valign (Align align) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkAlign _peel_align = static_cast<::GtkAlign> (align);
    gtk_widget_set_valign (_peel_this, _peel_align);
  }

  void
  set_vexpand (bool expand) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_widget_set_vexpand (_peel_this, _peel_expand);
  }

  void
  set_vexpand_set (bool set) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_set = static_cast<gboolean> (set);
    gtk_widget_set_vexpand_set (_peel_this, _peel_set);
  }

  void
  set_visible (bool visible) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_widget_set_visible (_peel_this, _peel_visible);
  }

  bool
  should_layout () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = gtk_widget_should_layout (_peel_this);
    return !!_peel_return;
  }

  void
  show () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_show (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  size_allocate (const Gdk::Rectangle *allocation, int baseline) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    const ::GtkAllocation *_peel_allocation = reinterpret_cast<const ::GtkAllocation *> (allocation);
    gtk_widget_size_allocate (_peel_this, _peel_allocation, baseline);
  }

protected:
  peel_nonnull_args (2, 3)
  void
  snapshot_child (Widget *child, Snapshot *snapshot) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (snapshot);
    gtk_widget_snapshot_child (_peel_this, _peel_child, _peel_snapshot);
  }

public:
  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2)
  bool
  translate_coordinates (Widget *dest_widget, double src_x, double src_y, double *dest_x, double *dest_y) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_dest_widget = reinterpret_cast<::GtkWidget *> (dest_widget);
    gboolean _peel_return = gtk_widget_translate_coordinates (_peel_this, _peel_dest_widget, src_x, src_y, dest_x, dest_y);
    return !!_peel_return;
  }

  void
  trigger_tooltip_query () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_trigger_tooltip_query (_peel_this);
  }

  void
  unmap () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_unmap (_peel_this);
  }

  void
  unparent () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_unparent (_peel_this);
  }

  void
  unrealize () noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gtk_widget_unrealize (_peel_this);
  }

protected:
  void
  unset_state_flags (StateFlags flags) noexcept
  {
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkStateFlags _peel_flags = static_cast<::GtkStateFlags> (flags);
    gtk_widget_unset_state_flags (_peel_this, _peel_flags);
  }

public:
  template<typename Handler>
  peel::SignalConnection::Token
  connect_destroy (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "destroy", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_destroy (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *), bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "destroy", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_direction_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void (TextDirection)>::_peel_connect_by_name (this, "direction-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_direction_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *, TextDirection), bool after = false) noexcept
  {
    return Signal<Widget, void (TextDirection)>::_peel_connect_by_name (this, "direction-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_hide (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "hide", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_hide (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *), bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "hide", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_keynav_failed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, bool (DirectionType)>::_peel_connect_by_name (this, "keynav-failed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_keynav_failed (HandlerObject *object, bool (HandlerObject::*handler_method) (Widget *, DirectionType), bool after = false) noexcept
  {
    return Signal<Widget, bool (DirectionType)>::_peel_connect_by_name (this, "keynav-failed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_map (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "map", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_map (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *), bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "map", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_mnemonic_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, bool (bool)>::_peel_connect_by_name (this, "mnemonic-activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_mnemonic_activate (HandlerObject *object, bool (HandlerObject::*handler_method) (Widget *, bool), bool after = false) noexcept
  {
    return Signal<Widget, bool (bool)>::_peel_connect_by_name (this, "mnemonic-activate", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_focus (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void (DirectionType)>::_peel_connect_by_name (this, "move-focus", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_focus (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *, DirectionType), bool after = false) noexcept
  {
    return Signal<Widget, void (DirectionType)>::_peel_connect_by_name (this, "move-focus", object, handler_method, after);
  }

  void
  emit_move_focus (DirectionType direction) noexcept
  {
    return Signal<Widget, void (DirectionType)>::_peel_emit_by_name (this, "move-focus", direction);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_query_tooltip (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, bool (int, int, bool, Tooltip *)>::_peel_connect_by_name (this, "query-tooltip", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_query_tooltip (HandlerObject *object, bool (HandlerObject::*handler_method) (Widget *, int, int, bool, Tooltip *), bool after = false) noexcept
  {
    return Signal<Widget, bool (int, int, bool, Tooltip *)>::_peel_connect_by_name (this, "query-tooltip", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_realize (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "realize", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_realize (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *), bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "realize", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_show (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "show", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_show (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *), bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "show", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_state_flags_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void (StateFlags)>::_peel_connect_by_name (this, "state-flags-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_state_flags_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *, StateFlags), bool after = false) noexcept
  {
    return Signal<Widget, void (StateFlags)>::_peel_connect_by_name (this, "state-flags-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unmap (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "unmap", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unmap (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *), bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "unmap", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unrealize (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "unrealize", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unrealize (HandlerObject *object, void (HandlerObject::*handler_method) (Widget *), bool after = false) noexcept
  {
    return Signal<Widget, void ()>::_peel_connect_by_name (this, "unrealize", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_can_focus ()
  {
    return peel::Property<bool> { "can-focus" };
  }

  static peel::Property<bool>
  prop_can_target ()
  {
    return peel::Property<bool> { "can-target" };
  }

  static peel::Property<peel::Strv>
  prop_css_classes ()
  {
    return peel::Property<peel::Strv> { "css-classes" };
  }

  static peel::Property<const char *>
  prop_css_name ()
  {
    return peel::Property<const char *> { "css-name" };
  }

  static peel::Property<Gdk::Cursor>
  prop_cursor ()
  {
    return peel::Property<Gdk::Cursor> { "cursor" };
  }

  static peel::Property<bool>
  prop_focus_on_click ()
  {
    return peel::Property<bool> { "focus-on-click" };
  }

  static peel::Property<bool>
  prop_focusable ()
  {
    return peel::Property<bool> { "focusable" };
  }

  static peel::Property<Align>
  prop_halign ()
  {
    return peel::Property<Align> { "halign" };
  }

  static peel::Property<bool>
  prop_has_default ()
  {
    return peel::Property<bool> { "has-default" };
  }

  static peel::Property<bool>
  prop_has_focus ()
  {
    return peel::Property<bool> { "has-focus" };
  }

  static peel::Property<bool>
  prop_has_tooltip ()
  {
    return peel::Property<bool> { "has-tooltip" };
  }

  static peel::Property<int>
  prop_height_request ()
  {
    return peel::Property<int> { "height-request" };
  }

  static peel::Property<bool>
  prop_hexpand ()
  {
    return peel::Property<bool> { "hexpand" };
  }

  static peel::Property<bool>
  prop_hexpand_set ()
  {
    return peel::Property<bool> { "hexpand-set" };
  }

  static peel::Property<LayoutManager>
  prop_layout_manager ()
  {
    return peel::Property<LayoutManager> { "layout-manager" };
  }

  static peel::Property<bool>
  prop_limit_events ()
  {
    return peel::Property<bool> { "limit-events" };
  }

  static peel::Property<int>
  prop_margin_bottom ()
  {
    return peel::Property<int> { "margin-bottom" };
  }

  static peel::Property<int>
  prop_margin_end ()
  {
    return peel::Property<int> { "margin-end" };
  }

  static peel::Property<int>
  prop_margin_start ()
  {
    return peel::Property<int> { "margin-start" };
  }

  static peel::Property<int>
  prop_margin_top ()
  {
    return peel::Property<int> { "margin-top" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<double>
  prop_opacity ()
  {
    return peel::Property<double> { "opacity" };
  }

  static peel::Property<Overflow>
  prop_overflow ()
  {
    return peel::Property<Overflow> { "overflow" };
  }

  static peel::Property<Widget>
  prop_parent ()
  {
    return peel::Property<Widget> { "parent" };
  }

  static peel::Property<bool>
  prop_receives_default ()
  {
    return peel::Property<bool> { "receives-default" };
  }

  static peel::Property<Root>
  prop_root ()
  {
    return peel::Property<Root> { "root" };
  }

  static peel::Property<int>
  prop_scale_factor ()
  {
    return peel::Property<int> { "scale-factor" };
  }

  static peel::Property<bool>
  prop_sensitive ()
  {
    return peel::Property<bool> { "sensitive" };
  }

  static peel::Property<const char *>
  prop_tooltip_markup ()
  {
    return peel::Property<const char *> { "tooltip-markup" };
  }

  static peel::Property<const char *>
  prop_tooltip_text ()
  {
    return peel::Property<const char *> { "tooltip-text" };
  }

  static peel::Property<Align>
  prop_valign ()
  {
    return peel::Property<Align> { "valign" };
  }

  static peel::Property<bool>
  prop_vexpand ()
  {
    return peel::Property<bool> { "vexpand" };
  }

  static peel::Property<bool>
  prop_vexpand_set ()
  {
    return peel::Property<bool> { "vexpand-set" };
  }

  static peel::Property<bool>
  prop_visible ()
  {
    return peel::Property<bool> { "visible" };
  }

  static peel::Property<int>
  prop_width_request ()
  {
    return peel::Property<int> { "width-request" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Widget> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_compute_expand (bool *hexpand_p, bool *vexpand_p) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_hexpand_p;
    gboolean _peel_vexpand_p;
    _peel_class->compute_expand (_peel_this, &_peel_hexpand_p, &_peel_vexpand_p);
    *hexpand_p = !!_peel_hexpand_p;
    *vexpand_p = !!_peel_vexpand_p;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_contains (double x, double y) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = _peel_class->contains (_peel_this, x, y);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_css_changed (CssStyleChange *change) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkCssStyleChange *_peel_change = reinterpret_cast<::GtkCssStyleChange *> (change);
    _peel_class->css_changed (_peel_this, _peel_change);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_direction_changed (TextDirection previous_direction) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkTextDirection _peel_previous_direction = static_cast<::GtkTextDirection> (previous_direction);
    _peel_class->direction_changed (_peel_this, _peel_previous_direction);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_focus (DirectionType direction) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkDirectionType _peel_direction = static_cast<::GtkDirectionType> (direction);
    gboolean _peel_return = _peel_class->focus (_peel_this, _peel_direction);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  SizeRequestMode
  parent_vfunc_get_request_mode () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkSizeRequestMode _peel_return = _peel_class->get_request_mode (_peel_this);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_grab_focus () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_return = _peel_class->grab_focus (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_hide () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->hide (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_keynav_failed (DirectionType direction) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkDirectionType _peel_direction = static_cast<::GtkDirectionType> (direction);
    gboolean _peel_return = _peel_class->keynav_failed (_peel_this, _peel_direction);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_map () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->map (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  void
  parent_vfunc_measure (Orientation orientation, int for_size, int *minimum, int *natural, int *minimum_baseline, int *natural_baseline) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    _peel_class->measure (_peel_this, _peel_orientation, for_size, minimum, natural, minimum_baseline, natural_baseline);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_mnemonic_activate (bool group_cycling) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_group_cycling = static_cast<gboolean> (group_cycling);
    gboolean _peel_return = _peel_class->mnemonic_activate (_peel_this, _peel_group_cycling);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_move_focus (DirectionType direction) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkDirectionType _peel_direction = static_cast<::GtkDirectionType> (direction);
    _peel_class->move_focus (_peel_this, _peel_direction);
  }

  template<typename DerivedClass>
  peel_nonnull_args (5)
  bool
  parent_vfunc_query_tooltip (int x, int y, bool keyboard_tooltip, Tooltip *tooltip) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    gboolean _peel_keyboard_tooltip = static_cast<gboolean> (keyboard_tooltip);
    ::GtkTooltip *_peel_tooltip = reinterpret_cast<::GtkTooltip *> (tooltip);
    gboolean _peel_return = _peel_class->query_tooltip (_peel_this, x, y, _peel_keyboard_tooltip, _peel_tooltip);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_realize () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->realize (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_root () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->root (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_focus_child (Widget *child) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    _peel_class->set_focus_child (_peel_this, _peel_child);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_show () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->show (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_size_allocate (int width, int height, int baseline) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->size_allocate (_peel_this, width, height, baseline);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_snapshot (Snapshot *snapshot) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (snapshot);
    _peel_class->snapshot (_peel_this, _peel_snapshot);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_state_flags_changed (StateFlags previous_state_flags) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkStateFlags _peel_previous_state_flags = static_cast<::GtkStateFlags> (previous_state_flags);
    _peel_class->state_flags_changed (_peel_this, _peel_previous_state_flags);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_system_setting_changed (SystemSetting settings) noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    ::GtkSystemSetting _peel_settings = static_cast<::GtkSystemSetting> (settings);
    _peel_class->system_setting_changed (_peel_this, _peel_settings);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_unmap () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->unmap (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_unrealize () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->unrealize (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_unroot () noexcept
  {
    ::GtkWidgetClass *_peel_class = reinterpret_cast<::GtkWidgetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWidget *_peel_this = reinterpret_cast<::GtkWidget *> (this);
    _peel_class->unroot (_peel_this);
  }

public:
  class Class : public GObject::InitiallyUnowned::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkWidgetClass) - sizeof (GObject::InitiallyUnowned::Class)] peel_no_warn_unused;
  protected:
    template<typename ShortcutFunc, typename... Args>
    void
    add_binding (unsigned keyval, Gdk::ModifierType mods, ShortcutFunc callback, const char *format_string, Args &&...args) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GdkModifierType _peel_mods = static_cast<::GdkModifierType> (mods);
      ::GtkShortcutFunc _peel_callback = ((void) callback, +[] (::GtkWidget *widget, ::GVariant *args, gpointer user_data) -> gboolean
      {
        static_assert (std::is_empty<ShortcutFunc>::value, "Use a captureless lambda");
#ifdef peel_cpp_20
        ShortcutFunc _peel_callback;
#else
        ShortcutFunc &_peel_callback = *reinterpret_cast<ShortcutFunc *> (0x123456);
#endif
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        GLib::Variant *_peel_args = reinterpret_cast<GLib::Variant *> (args);
        bool _peel_return = _peel_callback (_peel_widget, _peel_args);
        return static_cast<gboolean> (_peel_return);
      });
      gtk_widget_class_add_binding (_peel_this, keyval, _peel_mods, _peel_callback, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
    }

    template<typename... Args>
    peel_nonnull_args (4)
    void
    add_binding_action (unsigned keyval, Gdk::ModifierType mods, const char *action_name, const char *format_string, Args &&...args) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GdkModifierType _peel_mods = static_cast<::GdkModifierType> (mods);
      gtk_widget_class_add_binding_action (_peel_this, keyval, _peel_mods, action_name, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
    }

    template<typename... Args>
    peel_nonnull_args (4)
    void
    add_binding_signal (unsigned keyval, Gdk::ModifierType mods, const char *signal, const char *format_string, Args &&...args) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GdkModifierType _peel_mods = static_cast<::GdkModifierType> (mods);
      gtk_widget_class_add_binding_signal (_peel_this, keyval, _peel_mods, signal, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
    }

    peel_nonnull_args (2)
    void
    add_shortcut (Shortcut *shortcut) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GtkShortcut *_peel_shortcut = reinterpret_cast<::GtkShortcut *> (shortcut);
      gtk_widget_class_add_shortcut (_peel_this, _peel_shortcut);
    }

    peel_nonnull_args (2)
    void
    bind_template_callback_full (const char *callback_name, ::GCallback callback_symbol) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gtk_widget_class_bind_template_callback_full (_peel_this, callback_name, callback_symbol);
    }

    peel_nonnull_args (2)
    void
    bind_template_child_full (const char *name, bool internal_child, gssize struct_offset) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gboolean _peel_internal_child = static_cast<gboolean> (internal_child);
      gtk_widget_class_bind_template_child_full (_peel_this, name, _peel_internal_child, struct_offset);
    }

  public:
    Accessible::Role
    get_accessible_role () noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GtkAccessibleRole _peel_return = gtk_widget_class_get_accessible_role (_peel_this);
      return static_cast<Accessible::Role> (_peel_return);
    }

    unsigned
    get_activate_signal () noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      return gtk_widget_class_get_activate_signal (_peel_this);
    }

    peel_returns_nonnull
    const char *
    get_css_name () noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      return gtk_widget_class_get_css_name (_peel_this);
    }

    GObject::Type
    get_layout_manager_type () noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      return gtk_widget_class_get_layout_manager_type (_peel_this);
    }

  protected:
    template<typename WidgetActionActivateFunc>
    peel_nonnull_args (2)
    void
    install_action (const char *action_name, const char *parameter_type, WidgetActionActivateFunc activate) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GtkWidgetActionActivateFunc _peel_activate = ((void) activate, +[] (::GtkWidget *widget, const char *action_name, ::GVariant *parameter) -> void
      {
        static_assert (std::is_empty<WidgetActionActivateFunc>::value, "Use a captureless lambda");
#ifdef peel_cpp_20
        WidgetActionActivateFunc _peel_activate;
#else
        WidgetActionActivateFunc &_peel_activate = *reinterpret_cast<WidgetActionActivateFunc *> (0x123456);
#endif
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        GLib::Variant *_peel_parameter = reinterpret_cast<GLib::Variant *> (parameter);
        _peel_activate (_peel_widget, action_name, _peel_parameter);
      });
      gtk_widget_class_install_action (_peel_this, action_name, parameter_type, _peel_activate);
    }

    peel_nonnull_args (2, 3)
    void
    install_property_action (const char *action_name, const char *property_name) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gtk_widget_class_install_property_action (_peel_this, action_name, property_name);
    }

  public:
    peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (3, 4, 5, 6)
    bool
    query_action (unsigned index_, GObject::Type *owner, const char **action_name, const GLib::Variant::Type **parameter_type, const char **property_name) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      GType *_peel_owner = reinterpret_cast<GType *> (owner);
      const ::GVariantType **_peel_parameter_type = reinterpret_cast<const ::GVariantType **> (parameter_type);
      gboolean _peel_return = gtk_widget_class_query_action (_peel_this, index_, _peel_owner, action_name, _peel_parameter_type, property_name);
      return !!_peel_return;
    }

  protected:
    void
    set_accessible_role (Accessible::Role accessible_role) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GtkAccessibleRole _peel_accessible_role = static_cast<::GtkAccessibleRole> (accessible_role);
      gtk_widget_class_set_accessible_role (_peel_this, _peel_accessible_role);
    }

    void
    set_activate_signal (unsigned signal_id) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gtk_widget_class_set_activate_signal (_peel_this, signal_id);
    }

    peel_nonnull_args (2)
    void
    set_activate_signal_from_name (const char *signal_name) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gtk_widget_class_set_activate_signal_from_name (_peel_this, signal_name);
    }

    peel_nonnull_args (2)
    void
    set_css_name (const char *name) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gtk_widget_class_set_css_name (_peel_this, name);
    }

    void
    set_layout_manager_type (GObject::Type type) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gtk_widget_class_set_layout_manager_type (_peel_this, type);
    }

    peel_arg_in (2) peel_nonnull_args (2)
    void
    set_template (GLib::Bytes *template_bytes) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GBytes *_peel_template_bytes = reinterpret_cast<::GBytes *> (template_bytes);
      gtk_widget_class_set_template (_peel_this, _peel_template_bytes);
    }

    peel_nonnull_args (2)
    void
    set_template_from_resource (const char *resource_name) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      gtk_widget_class_set_template_from_resource (_peel_this, resource_name);
    }

    peel_nonnull_args (2)
    void
    set_template_scope (Builder::Scope *scope) noexcept
    {
      ::GtkWidgetClass *_peel_this = reinterpret_cast<::GtkWidgetClass *> (this);
      ::GtkBuilderScope *_peel_scope = reinterpret_cast<::GtkBuilderScope *> (scope);
      gtk_widget_class_set_template_scope (_peel_this, _peel_scope);
    }

    template<typename DerivedClass>
    void
    override_vfunc_compute_expand ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->compute_expand = +[] (::GtkWidget *widget, gboolean *hexpand_p, gboolean *vexpand_p) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        bool _peel_hexpand_p;
        bool _peel_vexpand_p;
        _peel_this->DerivedClass::vfunc_compute_expand (&_peel_hexpand_p, &_peel_vexpand_p);
        *hexpand_p = static_cast<gboolean> (_peel_hexpand_p);
        *vexpand_p = static_cast<gboolean> (_peel_vexpand_p);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_contains ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->contains = +[] (::GtkWidget *widget, double x, double y) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        bool _peel_return = _peel_this->DerivedClass::vfunc_contains (x, y);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_css_changed ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->css_changed = +[] (::GtkWidget *widget, ::GtkCssStyleChange *change) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        CssStyleChange *_peel_change = reinterpret_cast<CssStyleChange *> (change);
        _peel_this->DerivedClass::vfunc_css_changed (_peel_change);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_direction_changed ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->direction_changed = +[] (::GtkWidget *widget, ::GtkTextDirection previous_direction) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        TextDirection _peel_previous_direction = static_cast<TextDirection> (previous_direction);
        _peel_this->DerivedClass::vfunc_direction_changed (_peel_previous_direction);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_focus ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->focus = +[] (::GtkWidget *widget, ::GtkDirectionType direction) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        DirectionType _peel_direction = static_cast<DirectionType> (direction);
        bool _peel_return = _peel_this->DerivedClass::vfunc_focus (_peel_direction);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_request_mode ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->get_request_mode = +[] (::GtkWidget *widget) -> ::GtkSizeRequestMode
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        SizeRequestMode _peel_return = _peel_this->DerivedClass::vfunc_get_request_mode ();
        return static_cast<::GtkSizeRequestMode> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_grab_focus ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->grab_focus = +[] (::GtkWidget *widget) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        bool _peel_return = _peel_this->DerivedClass::vfunc_grab_focus ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_hide ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->hide = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_hide ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_keynav_failed ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->keynav_failed = +[] (::GtkWidget *widget, ::GtkDirectionType direction) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        DirectionType _peel_direction = static_cast<DirectionType> (direction);
        bool _peel_return = _peel_this->DerivedClass::vfunc_keynav_failed (_peel_direction);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_map ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->map = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_map ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_measure ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->measure = +[] (::GtkWidget *widget, ::GtkOrientation orientation, int for_size, int *minimum, int *natural, int *minimum_baseline, int *natural_baseline) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        Orientation _peel_orientation = static_cast<Orientation> (orientation);
        _peel_this->DerivedClass::vfunc_measure (_peel_orientation, for_size, minimum, natural, minimum_baseline, natural_baseline);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mnemonic_activate ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->mnemonic_activate = +[] (::GtkWidget *widget, gboolean group_cycling) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        bool _peel_group_cycling = !!group_cycling;
        bool _peel_return = _peel_this->DerivedClass::vfunc_mnemonic_activate (_peel_group_cycling);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_move_focus ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->move_focus = +[] (::GtkWidget *widget, ::GtkDirectionType direction) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        DirectionType _peel_direction = static_cast<DirectionType> (direction);
        _peel_this->DerivedClass::vfunc_move_focus (_peel_direction);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_tooltip ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->query_tooltip = +[] (::GtkWidget *widget, int x, int y, gboolean keyboard_tooltip, ::GtkTooltip *tooltip) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        bool _peel_keyboard_tooltip = !!keyboard_tooltip;
        Tooltip *_peel_tooltip = reinterpret_cast<Tooltip *> (tooltip);
        bool _peel_return = _peel_this->DerivedClass::vfunc_query_tooltip (x, y, _peel_keyboard_tooltip, _peel_tooltip);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_realize ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->realize = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_realize ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_root ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->root = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_root ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_focus_child ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->set_focus_child = +[] (::GtkWidget *widget, ::GtkWidget *child) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        Widget *_peel_child = reinterpret_cast<Widget *> (child);
        _peel_this->DerivedClass::vfunc_set_focus_child (_peel_child);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_show ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->show = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_show ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_size_allocate ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->size_allocate = +[] (::GtkWidget *widget, int width, int height, int baseline) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_size_allocate (width, height, baseline);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_snapshot ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->snapshot = +[] (::GtkWidget *widget, ::GtkSnapshot *snapshot) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        Snapshot *_peel_snapshot = reinterpret_cast<Snapshot *> (snapshot);
        _peel_this->DerivedClass::vfunc_snapshot (_peel_snapshot);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_state_flags_changed ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->state_flags_changed = +[] (::GtkWidget *widget, ::GtkStateFlags previous_state_flags) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        StateFlags _peel_previous_state_flags = static_cast<StateFlags> (previous_state_flags);
        _peel_this->DerivedClass::vfunc_state_flags_changed (_peel_previous_state_flags);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_system_setting_changed ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->system_setting_changed = +[] (::GtkWidget *widget, ::GtkSystemSetting settings) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        SystemSetting _peel_settings = static_cast<SystemSetting> (settings);
        _peel_this->DerivedClass::vfunc_system_setting_changed (_peel_settings);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unmap ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->unmap = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_unmap ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unrealize ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->unrealize = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_unrealize ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unroot ()
    {
      ::GtkWidgetClass *klass = reinterpret_cast<::GtkWidgetClass *> (this);
      klass->unroot = +[] (::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (widget);
        _peel_this->DerivedClass::vfunc_unroot ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkWidgetClass),
                 "Widget::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkWidgetClass),
                 "Widget::Class align mismatch");
}; /* class Widget */

static_assert (sizeof (Widget) == sizeof (::GtkWidget),
               "Widget size mismatch");
static_assert (alignof (Widget) == alignof (::GtkWidget),
               "Widget align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
#include <peel/Gsk/Transform.h>
#include <peel/Gtk/EventController.h>
#include <peel/Gtk/LayoutManager.h>
#include <peel/Pango/Context.h>
#include <peel/Pango/Layout.h>
