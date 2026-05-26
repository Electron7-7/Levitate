#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>
#include <peel/GLib/SList.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Pango
{
enum class Alignment : std::underlying_type<::PangoAlignment>::type;
class /* record */ AttrList;
class Context;
enum class Direction : std::underlying_type<::PangoDirection>::type;
enum class EllipsizeMode : std::underlying_type<::PangoEllipsizeMode>::type;
class /* record */ FontDescription;
class Layout;
struct LayoutLine;
struct LogAttr;
struct Rectangle;
class /* record */ TabArray;
enum class WrapMode : std::underlying_type<::PangoWrapMode>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Layout> ()
{
  return pango_layout_get_type ();
}


namespace Pango
{
class Layout : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Layout () = delete;
  Layout (const Layout &) = delete;
  Layout (Layout &&) = delete;
  Layout &
  operator = (const Layout &) = delete;
  Layout &
  operator = (Layout &&) = delete;
  ~Layout () = delete;
public:
  enum class DeserializeFlags : std::underlying_type<::PangoLayoutDeserializeFlags>::type;
  class /* record */ Iter;
  enum class SerializeFlags : std::underlying_type<::PangoLayoutSerializeFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<Layout>
  create (Context *context) noexcept
  {
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    ::PangoLayout *_peel_return = pango_layout_new (_peel_context);
    peel_assume (_peel_return);
    return peel::RefPtr<Layout>::adopt_ref (reinterpret_cast<Layout *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<Layout>
  deserialize (Context *context, GLib::Bytes *bytes, Layout::DeserializeFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::PangoLayoutDeserializeFlags _peel_flags = static_cast<::PangoLayoutDeserializeFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::PangoLayout *_peel_return = pango_layout_deserialize (_peel_context, _peel_bytes, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Layout>::adopt_ref (reinterpret_cast<Layout *> (_peel_return));
  }

  void
  context_changed () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_context_changed (_peel_this);
  }

  peel::RefPtr<Layout>
  copy () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoLayout *_peel_return = pango_layout_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Layout>::adopt_ref (reinterpret_cast<Layout *> (_peel_return));
  }

  Alignment
  get_alignment () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoAlignment _peel_return = pango_layout_get_alignment (_peel_this);
    return static_cast<Alignment> (_peel_return);
  }

  AttrList *
  get_attributes () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoAttrList *_peel_return = pango_layout_get_attributes (_peel_this);
    return reinterpret_cast<AttrList *> (_peel_return);
  }

  bool
  get_auto_dir () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_return = pango_layout_get_auto_dir (_peel_this);
    return !!_peel_return;
  }

  int
  get_baseline () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_baseline (_peel_this);
  }

  peel_arg_out (3) peel_arg_out (4)
  void
  get_caret_pos (int index_, Rectangle *strong_pos, Rectangle *weak_pos) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoRectangle *_peel_strong_pos = reinterpret_cast<::PangoRectangle *> (strong_pos);
    ::PangoRectangle *_peel_weak_pos = reinterpret_cast<::PangoRectangle *> (weak_pos);
    pango_layout_get_caret_pos (_peel_this, index_, _peel_strong_pos, _peel_weak_pos);
  }

  int
  get_character_count () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_character_count (_peel_this);
  }

  peel_returns_nonnull
  Context *
  get_context () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoContext *_peel_return = pango_layout_get_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Context *> (_peel_return);
  }

  peel_arg_out (3) peel_arg_out (4)
  void
  get_cursor_pos (int index_, Rectangle *strong_pos, Rectangle *weak_pos) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoRectangle *_peel_strong_pos = reinterpret_cast<::PangoRectangle *> (strong_pos);
    ::PangoRectangle *_peel_weak_pos = reinterpret_cast<::PangoRectangle *> (weak_pos);
    pango_layout_get_cursor_pos (_peel_this, index_, _peel_strong_pos, _peel_weak_pos);
  }

  Direction
  get_direction (int index) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoDirection _peel_return = pango_layout_get_direction (_peel_this, index);
    return static_cast<Direction> (_peel_return);
  }

  EllipsizeMode
  get_ellipsize () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoEllipsizeMode _peel_return = pango_layout_get_ellipsize (_peel_this);
    return static_cast<EllipsizeMode> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_get_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  const FontDescription *
  get_font_description () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    const ::PangoFontDescription *_peel_return = pango_layout_get_font_description (_peel_this);
    return reinterpret_cast<const FontDescription *> (_peel_return);
  }

  int
  get_height () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_height (_peel_this);
  }

  int
  get_indent () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_indent (_peel_this);
  }

  peel::UniquePtr<Layout::Iter>
  get_iter () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoLayoutIter *_peel_return = pango_layout_get_iter (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Layout::Iter>::adopt_ref (reinterpret_cast<Layout::Iter *> (_peel_return));
  }

  bool
  get_justify () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_return = pango_layout_get_justify (_peel_this);
    return !!_peel_return;
  }

  bool
  get_justify_last_line () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_return = pango_layout_get_justify_last_line (_peel_this);
    return !!_peel_return;
  }

  LayoutLine *
  get_line (int line) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoLayoutLine *_peel_return = pango_layout_get_line (_peel_this, line);
    return reinterpret_cast<LayoutLine *> (_peel_return);
  }

  int
  get_line_count () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_line_count (_peel_this);
  }

  LayoutLine *
  get_line_readonly (int line) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoLayoutLine *_peel_return = pango_layout_get_line_readonly (_peel_this, line);
    return reinterpret_cast<LayoutLine *> (_peel_return);
  }

  float
  get_line_spacing () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_line_spacing (_peel_this);
  }

  GLib::SListRef<LayoutLine * const>
  get_lines () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    GSList *_peel_return = pango_layout_get_lines (_peel_this);
    return GLib::SListRef<LayoutLine * const>::from_raw_list (_peel_return);
  }

  GLib::SListRef<LayoutLine * const>
  get_lines_readonly () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    GSList *_peel_return = pango_layout_get_lines_readonly (_peel_this);
    return GLib::SListRef<LayoutLine * const>::from_raw_list (_peel_return);
  }

  void
  get_log_attrs (peel::UniquePtr<LogAttr[]> *attrs) noexcept
  {
    gint _peel_n_attrs;
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoLogAttr *_peel_attrs;
    pango_layout_get_log_attrs (_peel_this, &_peel_attrs, &_peel_n_attrs);
    *attrs = peel::UniquePtr<LogAttr[]>::adopt_ref (reinterpret_cast<LogAttr *> (_peel_attrs), _peel_n_attrs);
  }

  peel::ArrayRef<const LogAttr>
  get_log_attrs_readonly () noexcept
  {
    gint _peel_n_attrs;
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    const ::PangoLogAttr *_peel_return = pango_layout_get_log_attrs_readonly (_peel_this, &_peel_n_attrs);
    peel_assume (_peel_return);
    return peel::ArrayRef<const LogAttr> (reinterpret_cast<const LogAttr *> (_peel_return), _peel_n_attrs);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_pixel_extents (Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_layout_get_pixel_extents (_peel_this, _peel_ink_rect, _peel_logical_rect);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_pixel_size (int *width, int *height) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_get_pixel_size (_peel_this, width, height);
  }

  unsigned
  get_serial () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_serial (_peel_this);
  }

  bool
  get_single_paragraph_mode () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_return = pango_layout_get_single_paragraph_mode (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_size (int *width, int *height) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_get_size (_peel_this, width, height);
  }

  int
  get_spacing () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_spacing (_peel_this);
  }

  peel::UniquePtr<TabArray>
  get_tabs () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoTabArray *_peel_return = pango_layout_get_tabs (_peel_this);
    return peel::UniquePtr<TabArray>::adopt_ref (reinterpret_cast<TabArray *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_text () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_text (_peel_this);
  }

  int
  get_unknown_glyphs_count () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_unknown_glyphs_count (_peel_this);
  }

  int
  get_width () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    return pango_layout_get_width (_peel_this);
  }

  WrapMode
  get_wrap () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoWrapMode _peel_return = pango_layout_get_wrap (_peel_this);
    return static_cast<WrapMode> (_peel_return);
  }

  peel_arg_out (4) peel_arg_out (5)
  void
  index_to_line_x (int index_, bool trailing, int *line, int *x_pos) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_trailing = static_cast<gboolean> (trailing);
    pango_layout_index_to_line_x (_peel_this, index_, _peel_trailing, line, x_pos);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  index_to_pos (int index_, Rectangle *pos) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoRectangle *_peel_pos = reinterpret_cast<::PangoRectangle *> (pos);
    pango_layout_index_to_pos (_peel_this, index_, _peel_pos);
  }

  bool
  is_ellipsized () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_return = pango_layout_is_ellipsized (_peel_this);
    return !!_peel_return;
  }

  bool
  is_wrapped () noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_return = pango_layout_is_wrapped (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (6, 7)
  void
  move_cursor_visually (bool strong, int old_index, int old_trailing, int direction, int *new_index, int *new_trailing) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_strong = static_cast<gboolean> (strong);
    pango_layout_move_cursor_visually (_peel_this, _peel_strong, old_index, old_trailing, direction, new_index, new_trailing);
  }

  peel::RefPtr<GLib::Bytes>
  serialize (Layout::SerializeFlags flags) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoLayoutSerializeFlags _peel_flags = static_cast<::PangoLayoutSerializeFlags> (flags);
    ::GBytes *_peel_return = pango_layout_serialize (_peel_this, _peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  void
  set_alignment (Alignment alignment) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoAlignment _peel_alignment = static_cast<::PangoAlignment> (alignment);
    pango_layout_set_alignment (_peel_this, _peel_alignment);
  }

  peel_arg_in (2)
  void
  set_attributes (AttrList *attrs) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoAttrList *_peel_attrs = reinterpret_cast<::PangoAttrList *> (attrs);
    pango_layout_set_attributes (_peel_this, _peel_attrs);
  }

  void
  set_auto_dir (bool auto_dir) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_auto_dir = static_cast<gboolean> (auto_dir);
    pango_layout_set_auto_dir (_peel_this, _peel_auto_dir);
  }

  void
  set_ellipsize (EllipsizeMode ellipsize) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoEllipsizeMode _peel_ellipsize = static_cast<::PangoEllipsizeMode> (ellipsize);
    pango_layout_set_ellipsize (_peel_this, _peel_ellipsize);
  }

  peel_arg_in (2)
  void
  set_font_description (const FontDescription *desc) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    pango_layout_set_font_description (_peel_this, _peel_desc);
  }

  void
  set_height (int height) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_height (_peel_this, height);
  }

  void
  set_indent (int indent) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_indent (_peel_this, indent);
  }

  void
  set_justify (bool justify) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_justify = static_cast<gboolean> (justify);
    pango_layout_set_justify (_peel_this, _peel_justify);
  }

  void
  set_justify_last_line (bool justify) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_justify = static_cast<gboolean> (justify);
    pango_layout_set_justify_last_line (_peel_this, _peel_justify);
  }

  void
  set_line_spacing (float factor) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_line_spacing (_peel_this, factor);
  }

  peel_nonnull_args (2)
  void
  set_markup (const char *markup, int length) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_markup (_peel_this, markup, length);
  }

  peel_arg_out (5) peel_nonnull_args (2)
  void
  set_markup_with_accel (const char *markup, int length, gunichar accel_marker, gunichar *accel_char) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_markup_with_accel (_peel_this, markup, length, accel_marker, accel_char);
  }

  void
  set_single_paragraph_mode (bool setting) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    pango_layout_set_single_paragraph_mode (_peel_this, _peel_setting);
  }

  void
  set_spacing (int spacing) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_spacing (_peel_this, spacing);
  }

  peel_arg_in (2)
  void
  set_tabs (TabArray *tabs) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoTabArray *_peel_tabs = reinterpret_cast<::PangoTabArray *> (tabs);
    pango_layout_set_tabs (_peel_this, _peel_tabs);
  }

  peel_nonnull_args (2)
  void
  set_text (const char *text, int length) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_text (_peel_this, text, length);
  }

  void
  set_width (int width) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    pango_layout_set_width (_peel_this, width);
  }

  void
  set_wrap (WrapMode wrap) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoWrapMode _peel_wrap = static_cast<::PangoWrapMode> (wrap);
    pango_layout_set_wrap (_peel_this, _peel_wrap);
  }

  peel_nonnull_args (3)
  bool
  write_to_file (Layout::SerializeFlags flags, const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    ::PangoLayoutSerializeFlags _peel_flags = static_cast<::PangoLayoutSerializeFlags> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = pango_layout_write_to_file (_peel_this, _peel_flags, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  bool
  xy_to_index (int x, int y, int *index_, int *trailing) noexcept
  {
    ::PangoLayout *_peel_this = reinterpret_cast<::PangoLayout *> (this);
    gboolean _peel_return = pango_layout_xy_to_index (_peel_this, x, y, index_, trailing);
    return !!_peel_return;
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Layout */

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/Pango/LayoutIter.h>
#include <peel/Pango/LogAttr.h>
#include <peel/Pango/TabArray.h>
