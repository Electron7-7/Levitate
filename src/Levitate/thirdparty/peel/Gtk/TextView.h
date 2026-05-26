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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Event;
struct Rectangle;
} /* namespace Gdk */

namespace Gio
{
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
enum class DeleteType : std::underlying_type<::GtkDeleteType>::type;
enum class InputHints : std::underlying_type<::GtkInputHints>::type;
enum class InputPurpose : std::underlying_type<::GtkInputPurpose>::type;
enum class Justification : std::underlying_type<::GtkJustification>::type;
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
enum class ScrollStep : std::underlying_type<::GtkScrollStep>::type;
class Snapshot;
class TextBuffer;
class TextChildAnchor;
enum class TextExtendSelection : std::underlying_type<::GtkTextExtendSelection>::type;
struct TextIter;
class TextMark;
class TextView;
enum class TextWindowType : std::underlying_type<::GtkTextWindowType>::type;
class Widget;
enum class WrapMode : std::underlying_type<::GtkWrapMode>::type;
} /* namespace Gtk */

namespace Pango
{
class Context;
class /* record */ TabArray;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TextView> ()
{
  return gtk_text_view_get_type ();
}


namespace Gtk
{
class TextView : public Widget
/* implements Accessible, AccessibleText, Buildable, Constraint::Target, Scrollable */
{
private:
  unsigned char _placeholder[sizeof (::GtkTextView) - sizeof (Widget)] peel_no_warn_unused;
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextView () = delete;
  TextView (const TextView &) = delete;
  TextView (TextView &&) = delete;
  TextView &
  operator = (const TextView &) = delete;
  TextView &
  operator = (TextView &&) = delete;
protected:
  ~TextView () = default;
public:
  enum class Layer : std::underlying_type<::GtkTextViewLayer>::type;

  static peel::FloatPtr<TextView>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_text_view_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<TextView> (reinterpret_cast<TextView *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<TextView>
  create_with_buffer (TextBuffer *buffer) noexcept
  {
    ::GtkTextBuffer *_peel_buffer = reinterpret_cast<::GtkTextBuffer *> (buffer);
    ::GtkWidget *_peel_return = gtk_text_view_new_with_buffer (_peel_buffer);
    peel_assume (_peel_return);
    return peel::FloatPtr<TextView> (reinterpret_cast<TextView *> (_peel_return));
  }

  peel_nonnull_args (3)
  void
  add_child_at_anchor (peel::FloatPtr<Widget> child, TextChildAnchor *anchor) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    ::GtkTextChildAnchor *_peel_anchor = reinterpret_cast<::GtkTextChildAnchor *> (anchor);
    gtk_text_view_add_child_at_anchor (_peel_this, _peel_child, _peel_anchor);
  }

  peel_nonnull_args (2)
  void
  add_overlay (Widget *child, int xpos, int ypos) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_text_view_add_overlay (_peel_this, _peel_child, xpos, ypos);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  backward_display_line (TextIter *iter) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_backward_display_line (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  backward_display_line_start (TextIter *iter) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_backward_display_line_start (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_out (5) peel_arg_out (6)
  void
  buffer_to_window_coords (TextWindowType win, int buffer_x, int buffer_y, int *window_x, int *window_y) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextWindowType _peel_win = static_cast<::GtkTextWindowType> (win);
    gtk_text_view_buffer_to_window_coords (_peel_this, _peel_win, buffer_x, buffer_y, window_x, window_y);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  forward_display_line (TextIter *iter) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_forward_display_line (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  forward_display_line_end (TextIter *iter) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_forward_display_line_end (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  bool
  get_accepts_tab () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_return = gtk_text_view_get_accepts_tab (_peel_this);
    return !!_peel_return;
  }

  int
  get_bottom_margin () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_bottom_margin (_peel_this);
  }

  peel_returns_nonnull
  TextBuffer *
  get_buffer () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextBuffer *_peel_return = gtk_text_view_get_buffer (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TextBuffer *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (3) peel_arg_out (4)
  void
  get_cursor_locations (const TextIter *iter, Gdk::Rectangle *strong, Gdk::Rectangle *weak) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    const ::GtkTextIter *_peel_iter = reinterpret_cast<const ::GtkTextIter *> (iter);
    ::GdkRectangle *_peel_strong = reinterpret_cast<::GdkRectangle *> (strong);
    ::GdkRectangle *_peel_weak = reinterpret_cast<::GdkRectangle *> (weak);
    gtk_text_view_get_cursor_locations (_peel_this, _peel_iter, _peel_strong, _peel_weak);
  }

  bool
  get_cursor_visible () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_return = gtk_text_view_get_cursor_visible (_peel_this);
    return !!_peel_return;
  }

  bool
  get_editable () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_return = gtk_text_view_get_editable (_peel_this);
    return !!_peel_return;
  }

  Gio::MenuModel *
  get_extra_menu () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GMenuModel *_peel_return = gtk_text_view_get_extra_menu (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  Widget *
  get_gutter (TextWindowType win) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextWindowType _peel_win = static_cast<::GtkTextWindowType> (win);
    ::GtkWidget *_peel_return = gtk_text_view_get_gutter (_peel_this, _peel_win);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_indent () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_indent (_peel_this);
  }

  InputHints
  get_input_hints () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkInputHints _peel_return = gtk_text_view_get_input_hints (_peel_this);
    return static_cast<InputHints> (_peel_return);
  }

  InputPurpose
  get_input_purpose () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkInputPurpose _peel_return = gtk_text_view_get_input_purpose (_peel_this);
    return static_cast<InputPurpose> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_iter_at_location (TextIter *iter, int x, int y) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_get_iter_at_location (_peel_this, _peel_iter, x, y);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2)
  bool
  get_iter_at_position (TextIter *iter, int *trailing, int x, int y) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_get_iter_at_position (_peel_this, _peel_iter, trailing, x, y);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_iter_location (const TextIter *iter, Gdk::Rectangle *location) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    const ::GtkTextIter *_peel_iter = reinterpret_cast<const ::GtkTextIter *> (iter);
    ::GdkRectangle *_peel_location = reinterpret_cast<::GdkRectangle *> (location);
    gtk_text_view_get_iter_location (_peel_this, _peel_iter, _peel_location);
  }

  Justification
  get_justification () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkJustification _peel_return = gtk_text_view_get_justification (_peel_this);
    return static_cast<Justification> (_peel_return);
  }

  int
  get_left_margin () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_left_margin (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  get_line_at_y (TextIter *target_iter, int y, int *line_top) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_target_iter = reinterpret_cast<::GtkTextIter *> (target_iter);
    gtk_text_view_get_line_at_y (_peel_this, _peel_target_iter, y, line_top);
  }

  peel_arg_in (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  get_line_yrange (const TextIter *iter, int *y, int *height) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    const ::GtkTextIter *_peel_iter = reinterpret_cast<const ::GtkTextIter *> (iter);
    gtk_text_view_get_line_yrange (_peel_this, _peel_iter, y, height);
  }

  peel_returns_nonnull
  Pango::Context *
  get_ltr_context () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::PangoContext *_peel_return = gtk_text_view_get_ltr_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::Context *> (_peel_return);
  }

  bool
  get_monospace () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_return = gtk_text_view_get_monospace (_peel_this);
    return !!_peel_return;
  }

  bool
  get_overwrite () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_return = gtk_text_view_get_overwrite (_peel_this);
    return !!_peel_return;
  }

  int
  get_pixels_above_lines () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_pixels_above_lines (_peel_this);
  }

  int
  get_pixels_below_lines () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_pixels_below_lines (_peel_this);
  }

  int
  get_pixels_inside_wrap () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_pixels_inside_wrap (_peel_this);
  }

  int
  get_right_margin () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_right_margin (_peel_this);
  }

  peel_returns_nonnull
  Pango::Context *
  get_rtl_context () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::PangoContext *_peel_return = gtk_text_view_get_rtl_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::Context *> (_peel_return);
  }

  peel::UniquePtr<Pango::TabArray>
  get_tabs () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::PangoTabArray *_peel_return = gtk_text_view_get_tabs (_peel_this);
    return peel::UniquePtr<Pango::TabArray>::adopt_ref (reinterpret_cast<Pango::TabArray *> (_peel_return));
  }

  int
  get_top_margin () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    return gtk_text_view_get_top_margin (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_visible_offset (double *x_offset, double *y_offset) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_get_visible_offset (_peel_this, x_offset, y_offset);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_visible_rect (Gdk::Rectangle *visible_rect) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GdkRectangle *_peel_visible_rect = reinterpret_cast<::GdkRectangle *> (visible_rect);
    gtk_text_view_get_visible_rect (_peel_this, _peel_visible_rect);
  }

  WrapMode
  get_wrap_mode () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkWrapMode _peel_return = gtk_text_view_get_wrap_mode (_peel_this);
    return static_cast<WrapMode> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  im_context_filter_keypress (Gdk::Event *event) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gboolean _peel_return = gtk_text_view_im_context_filter_keypress (_peel_this, _peel_event);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  move_mark_onscreen (TextMark *mark) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    gboolean _peel_return = gtk_text_view_move_mark_onscreen (_peel_this, _peel_mark);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  move_overlay (Widget *child, int xpos, int ypos) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_text_view_move_overlay (_peel_this, _peel_child, xpos, ypos);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  move_visually (TextIter *iter, int count) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_move_visually (_peel_this, _peel_iter, count);
    return !!_peel_return;
  }

  bool
  place_cursor_onscreen () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_return = gtk_text_view_place_cursor_onscreen (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  remove (Widget *child) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_text_view_remove (_peel_this, _peel_child);
  }

  void
  reset_cursor_blink () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_reset_cursor_blink (_peel_this);
  }

  void
  reset_im_context () noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_reset_im_context (_peel_this);
  }

  peel_nonnull_args (2)
  void
  scroll_mark_onscreen (TextMark *mark) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    gtk_text_view_scroll_mark_onscreen (_peel_this, _peel_mark);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  scroll_to_iter (TextIter *iter, double within_margin, bool use_align, double xalign, double yalign) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_use_align = static_cast<gboolean> (use_align);
    gboolean _peel_return = gtk_text_view_scroll_to_iter (_peel_this, _peel_iter, within_margin, _peel_use_align, xalign, yalign);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  scroll_to_mark (TextMark *mark, double within_margin, bool use_align, double xalign, double yalign) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    gboolean _peel_use_align = static_cast<gboolean> (use_align);
    gtk_text_view_scroll_to_mark (_peel_this, _peel_mark, within_margin, _peel_use_align, xalign, yalign);
  }

  void
  set_accepts_tab (bool accepts_tab) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_accepts_tab = static_cast<gboolean> (accepts_tab);
    gtk_text_view_set_accepts_tab (_peel_this, _peel_accepts_tab);
  }

  void
  set_bottom_margin (int bottom_margin) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_bottom_margin (_peel_this, bottom_margin);
  }

  void
  set_buffer (TextBuffer *buffer) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextBuffer *_peel_buffer = reinterpret_cast<::GtkTextBuffer *> (buffer);
    gtk_text_view_set_buffer (_peel_this, _peel_buffer);
  }

  void
  set_cursor_visible (bool setting) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_text_view_set_cursor_visible (_peel_this, _peel_setting);
  }

  void
  set_editable (bool setting) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_text_view_set_editable (_peel_this, _peel_setting);
  }

  void
  set_extra_menu (Gio::MenuModel *model) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_text_view_set_extra_menu (_peel_this, _peel_model);
  }

  void
  set_gutter (TextWindowType win, Widget *widget) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextWindowType _peel_win = static_cast<::GtkTextWindowType> (win);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_text_view_set_gutter (_peel_this, _peel_win, _peel_widget);
  }

  void
  set_indent (int indent) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_indent (_peel_this, indent);
  }

  void
  set_input_hints (InputHints hints) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkInputHints _peel_hints = static_cast<::GtkInputHints> (hints);
    gtk_text_view_set_input_hints (_peel_this, _peel_hints);
  }

  void
  set_input_purpose (InputPurpose purpose) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkInputPurpose _peel_purpose = static_cast<::GtkInputPurpose> (purpose);
    gtk_text_view_set_input_purpose (_peel_this, _peel_purpose);
  }

  void
  set_justification (Justification justification) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkJustification _peel_justification = static_cast<::GtkJustification> (justification);
    gtk_text_view_set_justification (_peel_this, _peel_justification);
  }

  void
  set_left_margin (int left_margin) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_left_margin (_peel_this, left_margin);
  }

  void
  set_monospace (bool monospace) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_monospace = static_cast<gboolean> (monospace);
    gtk_text_view_set_monospace (_peel_this, _peel_monospace);
  }

  void
  set_overwrite (bool overwrite) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gboolean _peel_overwrite = static_cast<gboolean> (overwrite);
    gtk_text_view_set_overwrite (_peel_this, _peel_overwrite);
  }

  void
  set_pixels_above_lines (int pixels_above_lines) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_pixels_above_lines (_peel_this, pixels_above_lines);
  }

  void
  set_pixels_below_lines (int pixels_below_lines) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_pixels_below_lines (_peel_this, pixels_below_lines);
  }

  void
  set_pixels_inside_wrap (int pixels_inside_wrap) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_pixels_inside_wrap (_peel_this, pixels_inside_wrap);
  }

  void
  set_right_margin (int right_margin) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_right_margin (_peel_this, right_margin);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_tabs (Pango::TabArray *tabs) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::PangoTabArray *_peel_tabs = reinterpret_cast<::PangoTabArray *> (tabs);
    gtk_text_view_set_tabs (_peel_this, _peel_tabs);
  }

  void
  set_top_margin (int top_margin) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    gtk_text_view_set_top_margin (_peel_this, top_margin);
  }

  void
  set_wrap_mode (WrapMode wrap_mode) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkWrapMode _peel_wrap_mode = static_cast<::GtkWrapMode> (wrap_mode);
    gtk_text_view_set_wrap_mode (_peel_this, _peel_wrap_mode);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  starts_display_line (const TextIter *iter) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    const ::GtkTextIter *_peel_iter = reinterpret_cast<const ::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_view_starts_display_line (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_out (5) peel_arg_out (6)
  void
  window_to_buffer_coords (TextWindowType win, int window_x, int window_y, int *buffer_x, int *buffer_y) noexcept
  {
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextWindowType _peel_win = static_cast<::GtkTextWindowType> (win);
    gtk_text_view_window_to_buffer_coords (_peel_this, _peel_win, window_x, window_y, buffer_x, buffer_y);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_backspace (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "backspace", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_backspace (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "backspace", object, handler_method, after);
  }

  void
  emit_backspace () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "backspace");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_copy_clipboard (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "copy-clipboard", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_copy_clipboard (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "copy-clipboard", object, handler_method, after);
  }

  void
  emit_copy_clipboard () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "copy-clipboard");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cut_clipboard (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "cut-clipboard", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cut_clipboard (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "cut-clipboard", object, handler_method, after);
  }

  void
  emit_cut_clipboard () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "cut-clipboard");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_delete_from_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void (DeleteType, int)>::_peel_connect_by_name (this, "delete-from-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_delete_from_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *, DeleteType, int), bool after = false) noexcept
  {
    return Signal<TextView, void (DeleteType, int)>::_peel_connect_by_name (this, "delete-from-cursor", object, handler_method, after);
  }

  void
  emit_delete_from_cursor (DeleteType type, int count) noexcept
  {
    return Signal<TextView, void (DeleteType, int)>::_peel_emit_by_name (this, "delete-from-cursor", type, count);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_extend_selection (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, bool (TextExtendSelection, const TextIter *, const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "extend-selection", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_extend_selection (HandlerObject *object, bool (HandlerObject::*handler_method) (TextView *, TextExtendSelection, const TextIter *, const TextIter *, const TextIter *), bool after = false) noexcept
  {
    return Signal<TextView, bool (TextExtendSelection, const TextIter *, const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "extend-selection", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_at_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void (const char *)>::_peel_connect_by_name (this, "insert-at-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_at_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *, const char *), bool after = false) noexcept
  {
    return Signal<TextView, void (const char *)>::_peel_connect_by_name (this, "insert-at-cursor", object, handler_method, after);
  }

  void
  emit_insert_at_cursor (const char *string) noexcept
  {
    return Signal<TextView, void (const char *)>::_peel_emit_by_name (this, "insert-at-cursor", string);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_emoji (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "insert-emoji", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_emoji (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "insert-emoji", object, handler_method, after);
  }

  void
  emit_insert_emoji () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "insert-emoji");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void (MovementStep, int, bool)>::_peel_connect_by_name (this, "move-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *, MovementStep, int, bool), bool after = false) noexcept
  {
    return Signal<TextView, void (MovementStep, int, bool)>::_peel_connect_by_name (this, "move-cursor", object, handler_method, after);
  }

  void
  emit_move_cursor (MovementStep step, int count, bool extend_selection) noexcept
  {
    return Signal<TextView, void (MovementStep, int, bool)>::_peel_emit_by_name (this, "move-cursor", step, count, extend_selection);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_viewport (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void (ScrollStep, int)>::_peel_connect_by_name (this, "move-viewport", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_viewport (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *, ScrollStep, int), bool after = false) noexcept
  {
    return Signal<TextView, void (ScrollStep, int)>::_peel_connect_by_name (this, "move-viewport", object, handler_method, after);
  }

  void
  emit_move_viewport (ScrollStep step, int count) noexcept
  {
    return Signal<TextView, void (ScrollStep, int)>::_peel_emit_by_name (this, "move-viewport", step, count);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_paste_clipboard (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "paste-clipboard", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_paste_clipboard (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "paste-clipboard", object, handler_method, after);
  }

  void
  emit_paste_clipboard () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "paste-clipboard");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_preedit_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void (const char *)>::_peel_connect_by_name (this, "preedit-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_preedit_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *, const char *), bool after = false) noexcept
  {
    return Signal<TextView, void (const char *)>::_peel_connect_by_name (this, "preedit-changed", object, handler_method, after);
  }

  void
  emit_preedit_changed (const char *preedit) noexcept
  {
    return Signal<TextView, void (const char *)>::_peel_emit_by_name (this, "preedit-changed", preedit);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void (bool)>::_peel_connect_by_name (this, "select-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_all (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *, bool), bool after = false) noexcept
  {
    return Signal<TextView, void (bool)>::_peel_connect_by_name (this, "select-all", object, handler_method, after);
  }

  void
  emit_select_all (bool select) noexcept
  {
    return Signal<TextView, void (bool)>::_peel_emit_by_name (this, "select-all", select);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_set_anchor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "set-anchor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_set_anchor (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "set-anchor", object, handler_method, after);
  }

  void
  emit_set_anchor () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "set-anchor");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_cursor_visible (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "toggle-cursor-visible", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_cursor_visible (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "toggle-cursor-visible", object, handler_method, after);
  }

  void
  emit_toggle_cursor_visible () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "toggle-cursor-visible");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_overwrite (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "toggle-overwrite", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_overwrite (HandlerObject *object, void (HandlerObject::*handler_method) (TextView *), bool after = false) noexcept
  {
    return Signal<TextView, void ()>::_peel_connect_by_name (this, "toggle-overwrite", object, handler_method, after);
  }

  void
  emit_toggle_overwrite () noexcept
  {
    return Signal<TextView, void ()>::_peel_emit_by_name (this, "toggle-overwrite");
  }

  static peel::Property<bool>
  prop_accepts_tab ()
  {
    return peel::Property<bool> { "accepts-tab" };
  }

  static peel::Property<int>
  prop_bottom_margin ()
  {
    return peel::Property<int> { "bottom-margin" };
  }

  static peel::Property<TextBuffer>
  prop_buffer ()
  {
    return peel::Property<TextBuffer> { "buffer" };
  }

  static peel::Property<bool>
  prop_cursor_visible ()
  {
    return peel::Property<bool> { "cursor-visible" };
  }

  static peel::Property<bool>
  prop_editable ()
  {
    return peel::Property<bool> { "editable" };
  }

  static peel::Property<Gio::MenuModel>
  prop_extra_menu ()
  {
    return peel::Property<Gio::MenuModel> { "extra-menu" };
  }

  static peel::Property<const char *>
  prop_im_module ()
  {
    return peel::Property<const char *> { "im-module" };
  }

  static peel::Property<int>
  prop_indent ()
  {
    return peel::Property<int> { "indent" };
  }

  static peel::Property<InputHints>
  prop_input_hints ()
  {
    return peel::Property<InputHints> { "input-hints" };
  }

  static peel::Property<InputPurpose>
  prop_input_purpose ()
  {
    return peel::Property<InputPurpose> { "input-purpose" };
  }

  static peel::Property<Justification>
  prop_justification ()
  {
    return peel::Property<Justification> { "justification" };
  }

  static peel::Property<int>
  prop_left_margin ()
  {
    return peel::Property<int> { "left-margin" };
  }

  static peel::Property<bool>
  prop_monospace ()
  {
    return peel::Property<bool> { "monospace" };
  }

  static peel::Property<bool>
  prop_overwrite ()
  {
    return peel::Property<bool> { "overwrite" };
  }

  static peel::Property<int>
  prop_pixels_above_lines ()
  {
    return peel::Property<int> { "pixels-above-lines" };
  }

  static peel::Property<int>
  prop_pixels_below_lines ()
  {
    return peel::Property<int> { "pixels-below-lines" };
  }

  static peel::Property<int>
  prop_pixels_inside_wrap ()
  {
    return peel::Property<int> { "pixels-inside-wrap" };
  }

  static peel::Property<int>
  prop_right_margin ()
  {
    return peel::Property<int> { "right-margin" };
  }

  static peel::Property<Pango::TabArray>
  prop_tabs ()
  {
    return peel::Property<Pango::TabArray> { "tabs" };
  }

  static peel::Property<int>
  prop_top_margin ()
  {
    return peel::Property<int> { "top-margin" };
  }

  static peel::Property<WrapMode>
  prop_wrap_mode ()
  {
    return peel::Property<WrapMode> { "wrap-mode" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TextView> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_backspace () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->backspace (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_copy_clipboard () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->copy_clipboard (_peel_this);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  TextBuffer *
  parent_vfunc_create_buffer () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextBuffer *_peel_return = _peel_class->create_buffer (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TextBuffer *> (_peel_return);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_cut_clipboard () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->cut_clipboard (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_delete_from_cursor (DeleteType type, int count) noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkDeleteType _peel_type = static_cast<::GtkDeleteType> (type);
    _peel_class->delete_from_cursor (_peel_this, _peel_type, count);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (3, 4, 5)
  bool
  parent_vfunc_extend_selection (TextExtendSelection granularity, const TextIter *location, TextIter *start, TextIter *end) noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextExtendSelection _peel_granularity = static_cast<::GtkTextExtendSelection> (granularity);
    const ::GtkTextIter *_peel_location = reinterpret_cast<const ::GtkTextIter *> (location);
    ::GtkTextIter *_peel_start = reinterpret_cast<::GtkTextIter *> (start);
    ::GtkTextIter *_peel_end = reinterpret_cast<::GtkTextIter *> (end);
    gboolean _peel_return = _peel_class->extend_selection (_peel_this, _peel_granularity, _peel_location, _peel_start, _peel_end);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_insert_at_cursor (const char *str) noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->insert_at_cursor (_peel_this, str);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_insert_emoji () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->insert_emoji (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_move_cursor (MovementStep step, int count, bool extend_selection) noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkMovementStep _peel_step = static_cast<::GtkMovementStep> (step);
    gboolean _peel_extend_selection = static_cast<gboolean> (extend_selection);
    _peel_class->move_cursor (_peel_this, _peel_step, count, _peel_extend_selection);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_paste_clipboard () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->paste_clipboard (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_anchor () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->set_anchor (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (3)
  void
  parent_vfunc_snapshot_layer (TextView::Layer layer, Snapshot *snapshot) noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    ::GtkTextViewLayer _peel_layer = static_cast<::GtkTextViewLayer> (layer);
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (snapshot);
    _peel_class->snapshot_layer (_peel_this, _peel_layer, _peel_snapshot);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_toggle_overwrite () noexcept
  {
    ::GtkTextViewClass *_peel_class = reinterpret_cast<::GtkTextViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextView *_peel_this = reinterpret_cast<::GtkTextView *> (this);
    _peel_class->toggle_overwrite (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTextViewClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_backspace ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->backspace = +[] (::GtkTextView *text_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_backspace ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_copy_clipboard ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->copy_clipboard = +[] (::GtkTextView *text_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_copy_clipboard ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create_buffer ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->create_buffer = +[] (::GtkTextView *text_view) -> ::GtkTextBuffer *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        TextBuffer *_peel_return = _peel_this->DerivedClass::vfunc_create_buffer ();
        return reinterpret_cast<::GtkTextBuffer *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_cut_clipboard ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->cut_clipboard = +[] (::GtkTextView *text_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_cut_clipboard ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_delete_from_cursor ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->delete_from_cursor = +[] (::GtkTextView *text_view, ::GtkDeleteType type, int count) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        DeleteType _peel_type = static_cast<DeleteType> (type);
        _peel_this->DerivedClass::vfunc_delete_from_cursor (_peel_type, count);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_extend_selection ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->extend_selection = +[] (::GtkTextView *text_view, ::GtkTextExtendSelection granularity, const ::GtkTextIter *location, ::GtkTextIter *start, ::GtkTextIter *end) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        TextExtendSelection _peel_granularity = static_cast<TextExtendSelection> (granularity);
        const TextIter *_peel_location = reinterpret_cast<const TextIter *> (location);
        TextIter *_peel_start = reinterpret_cast<TextIter *> (start);
        TextIter *_peel_end = reinterpret_cast<TextIter *> (end);
        bool _peel_return = _peel_this->DerivedClass::vfunc_extend_selection (_peel_granularity, _peel_location, _peel_start, _peel_end);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_insert_at_cursor ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->insert_at_cursor = +[] (::GtkTextView *text_view, const char *str) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_insert_at_cursor (str);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_insert_emoji ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->insert_emoji = +[] (::GtkTextView *text_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_insert_emoji ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_move_cursor ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->move_cursor = +[] (::GtkTextView *text_view, ::GtkMovementStep step, int count, gboolean extend_selection) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        MovementStep _peel_step = static_cast<MovementStep> (step);
        bool _peel_extend_selection = !!extend_selection;
        _peel_this->DerivedClass::vfunc_move_cursor (_peel_step, count, _peel_extend_selection);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_paste_clipboard ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->paste_clipboard = +[] (::GtkTextView *text_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_paste_clipboard ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_anchor ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->set_anchor = +[] (::GtkTextView *text_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_set_anchor ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_snapshot_layer ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->snapshot_layer = +[] (::GtkTextView *text_view, ::GtkTextViewLayer layer, ::GtkSnapshot *snapshot) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        TextView::Layer _peel_layer = static_cast<TextView::Layer> (layer);
        Snapshot *_peel_snapshot = reinterpret_cast<Snapshot *> (snapshot);
        _peel_this->DerivedClass::vfunc_snapshot_layer (_peel_layer, _peel_snapshot);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_toggle_overwrite ()
    {
      ::GtkTextViewClass *klass = reinterpret_cast<::GtkTextViewClass *> (this);
      klass->toggle_overwrite = +[] (::GtkTextView *text_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (text_view);
        _peel_this->DerivedClass::vfunc_toggle_overwrite ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkTextViewClass),
                 "TextView::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTextViewClass),
                 "TextView::Class align mismatch");
}; /* class TextView */

static_assert (sizeof (TextView) == sizeof (::GtkTextView),
               "TextView size mismatch");
static_assert (alignof (TextView) == alignof (::GtkTextView),
               "TextView align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Pango/TabArray.h>
