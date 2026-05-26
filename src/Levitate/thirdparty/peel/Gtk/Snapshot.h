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
#include <peel/Gdk/Snapshot.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Gdk
{
class /* interface */ Paintable;
struct RGBA;
class Texture;
} /* namespace Gdk */

namespace Graphene
{
struct Matrix;
struct Point;
struct Point3D;
struct Rect;
struct Size;
struct Vec3;
struct Vec4;
} /* namespace Graphene */

namespace Gsk
{
enum class BlendMode : std::underlying_type<::GskBlendMode>::type;
struct ColorStop;
class /* record */ ComponentTransfer;
enum class FillRule : std::underlying_type<::GskFillRule>::type;
class GLShader;
enum class Isolation : std::underlying_type<::GskIsolation>::type;
enum class MaskMode : std::underlying_type<::GskMaskMode>::type;
class /* record */ Path;
enum class PorterDuff : std::underlying_type<::GskPorterDuff>::type;
class RenderNode;
struct RoundedRect;
enum class ScalingFilter : std::underlying_type<::GskScalingFilter>::type;
struct Shadow;
class /* record */ Stroke;
class /* record */ Transform;
} /* namespace Gsk */

namespace Gtk
{
class Snapshot;
class StyleContext;
} /* namespace Gtk */

namespace Pango
{
enum class Direction : std::underlying_type<::PangoDirection>::type;
class Layout;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Snapshot> ()
{
  return gtk_snapshot_get_type ();
}


namespace Gtk
{
class Snapshot : public Gdk::Snapshot
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Snapshot () = delete;
  Snapshot (const Snapshot &) = delete;
  Snapshot (Snapshot &&) = delete;
  Snapshot &
  operator = (const Snapshot &) = delete;
  Snapshot &
  operator = (Snapshot &&) = delete;
  ~Snapshot () = delete;
public:

  static peel::RefPtr<Snapshot>
  create () noexcept
  {
    ::GtkSnapshot *_peel_return = gtk_snapshot_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Snapshot>::adopt_ref (reinterpret_cast<Snapshot *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  append_border (const Gsk::RoundedRect *outline, const float (&border_width)[4], const Gdk::RGBA (&border_color)[4]) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::GskRoundedRect *_peel_outline = reinterpret_cast<const ::GskRoundedRect *> (outline);
    const float *_peel_border_width = reinterpret_cast<const float *> (border_width);
    const ::GdkRGBA *_peel_border_color = reinterpret_cast<const ::GdkRGBA *> (border_color);
    gtk_snapshot_append_border (_peel_this, _peel_outline, _peel_border_width, _peel_border_color);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  ::cairo_t *
  append_cairo (const Graphene::Rect *bounds) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::cairo_t *_peel_return = gtk_snapshot_append_cairo (_peel_this, _peel_bounds);
    peel_assume (_peel_return);
    return _peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_color (const Gdk::RGBA *color, const Graphene::Rect *bounds) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    gtk_snapshot_append_color (_peel_this, _peel_color, _peel_bounds);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_conic_gradient (const Graphene::Rect *bounds, const Graphene::Point *center, float rotation, peel::ArrayRef<const Gsk::ColorStop> stops) noexcept
  {
    gsize _peel_n_stops;
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_point_t *_peel_center = reinterpret_cast<const ::graphene_point_t *> (center);
    const ::GskColorStop *_peel_stops = (_peel_n_stops = stops.size (), reinterpret_cast<const ::GskColorStop *> (stops.data ()));
    gtk_snapshot_append_conic_gradient (_peel_this, _peel_bounds, _peel_center, rotation, _peel_stops, _peel_n_stops);
  }

  peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  append_fill (Gsk::Path *path, Gsk::FillRule fill_rule, const Gdk::RGBA *color) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskFillRule _peel_fill_rule = static_cast<::GskFillRule> (fill_rule);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    gtk_snapshot_append_fill (_peel_this, _peel_path, _peel_fill_rule, _peel_color);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_inset_shadow (const Gsk::RoundedRect *outline, const Gdk::RGBA *color, float dx, float dy, float spread, float blur_radius) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::GskRoundedRect *_peel_outline = reinterpret_cast<const ::GskRoundedRect *> (outline);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    gtk_snapshot_append_inset_shadow (_peel_this, _peel_outline, _peel_color, dx, dy, spread, blur_radius);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_layout (Pango::Layout *layout, const Gdk::RGBA *color) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    gtk_snapshot_append_layout (_peel_this, _peel_layout, _peel_color);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  append_linear_gradient (const Graphene::Rect *bounds, const Graphene::Point *start_point, const Graphene::Point *end_point, peel::ArrayRef<const Gsk::ColorStop> stops) noexcept
  {
    gsize _peel_n_stops;
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_point_t *_peel_start_point = reinterpret_cast<const ::graphene_point_t *> (start_point);
    const ::graphene_point_t *_peel_end_point = reinterpret_cast<const ::graphene_point_t *> (end_point);
    const ::GskColorStop *_peel_stops = (_peel_n_stops = stops.size (), reinterpret_cast<const ::GskColorStop *> (stops.data ()));
    gtk_snapshot_append_linear_gradient (_peel_this, _peel_bounds, _peel_start_point, _peel_end_point, _peel_stops, _peel_n_stops);
  }

  peel_nonnull_args (2)
  void
  append_node (Gsk::RenderNode *node) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskRenderNode *_peel_node = reinterpret_cast<::GskRenderNode *> (node);
    gtk_snapshot_append_node (_peel_this, _peel_node);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_outset_shadow (const Gsk::RoundedRect *outline, const Gdk::RGBA *color, float dx, float dy, float spread, float blur_radius) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::GskRoundedRect *_peel_outline = reinterpret_cast<const ::GskRoundedRect *> (outline);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    gtk_snapshot_append_outset_shadow (_peel_this, _peel_outline, _peel_color, dx, dy, spread, blur_radius);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  append_paste (const Graphene::Rect *bounds, size_t nth) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    gtk_snapshot_append_paste (_peel_this, _peel_bounds, nth);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_radial_gradient (const Graphene::Rect *bounds, const Graphene::Point *center, float hradius, float vradius, float start, float end, peel::ArrayRef<const Gsk::ColorStop> stops) noexcept
  {
    gsize _peel_n_stops;
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_point_t *_peel_center = reinterpret_cast<const ::graphene_point_t *> (center);
    const ::GskColorStop *_peel_stops = (_peel_n_stops = stops.size (), reinterpret_cast<const ::GskColorStop *> (stops.data ()));
    gtk_snapshot_append_radial_gradient (_peel_this, _peel_bounds, _peel_center, hradius, vradius, start, end, _peel_stops, _peel_n_stops);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  append_repeating_linear_gradient (const Graphene::Rect *bounds, const Graphene::Point *start_point, const Graphene::Point *end_point, peel::ArrayRef<const Gsk::ColorStop> stops) noexcept
  {
    gsize _peel_n_stops;
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_point_t *_peel_start_point = reinterpret_cast<const ::graphene_point_t *> (start_point);
    const ::graphene_point_t *_peel_end_point = reinterpret_cast<const ::graphene_point_t *> (end_point);
    const ::GskColorStop *_peel_stops = (_peel_n_stops = stops.size (), reinterpret_cast<const ::GskColorStop *> (stops.data ()));
    gtk_snapshot_append_repeating_linear_gradient (_peel_this, _peel_bounds, _peel_start_point, _peel_end_point, _peel_stops, _peel_n_stops);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_repeating_radial_gradient (const Graphene::Rect *bounds, const Graphene::Point *center, float hradius, float vradius, float start, float end, peel::ArrayRef<const Gsk::ColorStop> stops) noexcept
  {
    gsize _peel_n_stops;
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_point_t *_peel_center = reinterpret_cast<const ::graphene_point_t *> (center);
    const ::GskColorStop *_peel_stops = (_peel_n_stops = stops.size (), reinterpret_cast<const ::GskColorStop *> (stops.data ()));
    gtk_snapshot_append_repeating_radial_gradient (_peel_this, _peel_bounds, _peel_center, hradius, vradius, start, end, _peel_stops, _peel_n_stops);
  }

  peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  append_scaled_texture (Gdk::Texture *texture, Gsk::ScalingFilter filter, const Graphene::Rect *bounds) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    ::GskScalingFilter _peel_filter = static_cast<::GskScalingFilter> (filter);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    gtk_snapshot_append_scaled_texture (_peel_this, _peel_texture, _peel_filter, _peel_bounds);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  append_stroke (Gsk::Path *path, const Gsk::Stroke *stroke, const Gdk::RGBA *color) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    const ::GskStroke *_peel_stroke = reinterpret_cast<const ::GskStroke *> (stroke);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    gtk_snapshot_append_stroke (_peel_this, _peel_path, _peel_stroke, _peel_color);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  append_texture (Gdk::Texture *texture, const Graphene::Rect *bounds) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    gtk_snapshot_append_texture (_peel_this, _peel_texture, _peel_bounds);
  }

  static peel::RefPtr<Gsk::RenderNode>
  free_to_node (peel::RefPtr<Snapshot> snapshot) noexcept
  {
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (std::move (snapshot).release_ref ());
    ::GskRenderNode *_peel_return = gtk_snapshot_free_to_node (_peel_snapshot);
    return peel::RefPtr<Gsk::RenderNode>::adopt_ref (reinterpret_cast<Gsk::RenderNode *> (_peel_return));
  }

  peel_arg_in (2)
  static peel::RefPtr<Gdk::Paintable>
  free_to_paintable (peel::RefPtr<Snapshot> snapshot, const Graphene::Size *size) noexcept
  {
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (std::move (snapshot).release_ref ());
    const ::graphene_size_t *_peel_size = reinterpret_cast<const ::graphene_size_t *> (size);
    ::GdkPaintable *_peel_return = gtk_snapshot_free_to_paintable (_peel_snapshot, _peel_size);
    return peel::RefPtr<Gdk::Paintable>::adopt_ref (reinterpret_cast<Gdk::Paintable *> (_peel_return));
  }

  void
  gl_shader_pop_texture () noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_gl_shader_pop_texture (_peel_this);
  }

  void
  perspective (float depth) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_perspective (_peel_this, depth);
  }

  void
  pop () noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_pop (_peel_this);
  }

  void
  push_blend (Gsk::BlendMode blend_mode) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskBlendMode _peel_blend_mode = static_cast<::GskBlendMode> (blend_mode);
    gtk_snapshot_push_blend (_peel_this, _peel_blend_mode);
  }

  void
  push_blur (double radius) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_push_blur (_peel_this, radius);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  push_clip (const Graphene::Rect *bounds) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    gtk_snapshot_push_clip (_peel_this, _peel_bounds);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  push_color_matrix (const Graphene::Matrix *color_matrix, const Graphene::Vec4 *color_offset) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_matrix_t *_peel_color_matrix = reinterpret_cast<const ::graphene_matrix_t *> (color_matrix);
    const ::graphene_vec4_t *_peel_color_offset = reinterpret_cast<const ::graphene_vec4_t *> (color_offset);
    gtk_snapshot_push_color_matrix (_peel_this, _peel_color_matrix, _peel_color_offset);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  void
  push_component_transfer (const Gsk::ComponentTransfer *red, const Gsk::ComponentTransfer *green, const Gsk::ComponentTransfer *blue, const Gsk::ComponentTransfer *alpha) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::GskComponentTransfer *_peel_red = reinterpret_cast<const ::GskComponentTransfer *> (red);
    const ::GskComponentTransfer *_peel_green = reinterpret_cast<const ::GskComponentTransfer *> (green);
    const ::GskComponentTransfer *_peel_blue = reinterpret_cast<const ::GskComponentTransfer *> (blue);
    const ::GskComponentTransfer *_peel_alpha = reinterpret_cast<const ::GskComponentTransfer *> (alpha);
    gtk_snapshot_push_component_transfer (_peel_this, _peel_red, _peel_green, _peel_blue, _peel_alpha);
  }

  void
  push_composite (Gsk::PorterDuff op) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskPorterDuff _peel_op = static_cast<::GskPorterDuff> (op);
    gtk_snapshot_push_composite (_peel_this, _peel_op);
  }

  void
  push_copy () noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_push_copy (_peel_this);
  }

  void
  push_cross_fade (double progress) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_push_cross_fade (_peel_this, progress);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  push_debug (const char *message, Args ...args) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_push_debug (_peel_this, message, args...);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  push_fill (Gsk::Path *path, Gsk::FillRule fill_rule) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskFillRule _peel_fill_rule = static_cast<::GskFillRule> (fill_rule);
    gtk_snapshot_push_fill (_peel_this, _peel_path, _peel_fill_rule);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  push_gl_shader (Gsk::GLShader *shader, const Graphene::Rect *bounds, peel::RefPtr<GLib::Bytes> take_args) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskGLShader *_peel_shader = reinterpret_cast<::GskGLShader *> (shader);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GBytes *_peel_take_args = reinterpret_cast<::GBytes *> (std::move (take_args).release_ref ());
    gtk_snapshot_push_gl_shader (_peel_this, _peel_shader, _peel_bounds, _peel_take_args);
  }

  void
  push_isolation (Gsk::Isolation features) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskIsolation _peel_features = static_cast<::GskIsolation> (features);
    gtk_snapshot_push_isolation (_peel_this, _peel_features);
  }

  void
  push_mask (Gsk::MaskMode mask_mode) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskMaskMode _peel_mask_mode = static_cast<::GskMaskMode> (mask_mode);
    gtk_snapshot_push_mask (_peel_this, _peel_mask_mode);
  }

  void
  push_opacity (double opacity) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_push_opacity (_peel_this, opacity);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2)
  void
  push_repeat (const Graphene::Rect *bounds, const Graphene::Rect *child_bounds) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_rect_t *_peel_child_bounds = reinterpret_cast<const ::graphene_rect_t *> (child_bounds);
    gtk_snapshot_push_repeat (_peel_this, _peel_bounds, _peel_child_bounds);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  push_rounded_clip (const Gsk::RoundedRect *bounds) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::GskRoundedRect *_peel_bounds = reinterpret_cast<const ::GskRoundedRect *> (bounds);
    gtk_snapshot_push_rounded_clip (_peel_this, _peel_bounds);
  }

  void
  push_shadow (peel::ArrayRef<const Gsk::Shadow> shadow) noexcept
  {
    gsize _peel_n_shadows;
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::GskShadow *_peel_shadow = (_peel_n_shadows = shadow.size (), reinterpret_cast<const ::GskShadow *> (shadow.data ()));
    gtk_snapshot_push_shadow (_peel_this, _peel_shadow, _peel_n_shadows);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  push_stroke (Gsk::Path *path, const Gsk::Stroke *stroke) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    const ::GskStroke *_peel_stroke = reinterpret_cast<const ::GskStroke *> (stroke);
    gtk_snapshot_push_stroke (_peel_this, _peel_path, _peel_stroke);
  }

  peel_nonnull_args (2)
  void
  render_background (StyleContext *context, double x, double y, double width, double height) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
    gtk_snapshot_render_background (_peel_this, _peel_context, x, y, width, height);
  }

  peel_nonnull_args (2)
  void
  render_focus (StyleContext *context, double x, double y, double width, double height) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
    gtk_snapshot_render_focus (_peel_this, _peel_context, x, y, width, height);
  }

  peel_nonnull_args (2)
  void
  render_frame (StyleContext *context, double x, double y, double width, double height) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
    gtk_snapshot_render_frame (_peel_this, _peel_context, x, y, width, height);
  }

  peel_nonnull_args (2, 5)
  void
  render_insertion_cursor (StyleContext *context, double x, double y, Pango::Layout *layout, int index, Pango::Direction direction) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
    ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
    ::PangoDirection _peel_direction = static_cast<::PangoDirection> (direction);
    gtk_snapshot_render_insertion_cursor (_peel_this, _peel_context, x, y, _peel_layout, index, _peel_direction);
  }

  peel_nonnull_args (2, 5)
  void
  render_layout (StyleContext *context, double x, double y, Pango::Layout *layout) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GtkStyleContext *_peel_context = reinterpret_cast<::GtkStyleContext *> (context);
    ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
    gtk_snapshot_render_layout (_peel_this, _peel_context, x, y, _peel_layout);
  }

  void
  restore () noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_restore (_peel_this);
  }

  void
  rotate (float angle) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_rotate (_peel_this, angle);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  rotate_3d (float angle, const Graphene::Vec3 *axis) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_vec3_t *_peel_axis = reinterpret_cast<const ::graphene_vec3_t *> (axis);
    gtk_snapshot_rotate_3d (_peel_this, angle, _peel_axis);
  }

  void
  save () noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_save (_peel_this);
  }

  void
  scale (float factor_x, float factor_y) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_scale (_peel_this, factor_x, factor_y);
  }

  void
  scale_3d (float factor_x, float factor_y, float factor_z) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    gtk_snapshot_scale_3d (_peel_this, factor_x, factor_y, factor_z);
  }

  peel::RefPtr<Gsk::RenderNode>
  to_node () noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskRenderNode *_peel_return = gtk_snapshot_to_node (_peel_this);
    return peel::RefPtr<Gsk::RenderNode>::adopt_ref (reinterpret_cast<Gsk::RenderNode *> (_peel_return));
  }

  peel_arg_in (2)
  peel::RefPtr<Gdk::Paintable>
  to_paintable (const Graphene::Size *size) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_size_t *_peel_size = reinterpret_cast<const ::graphene_size_t *> (size);
    ::GdkPaintable *_peel_return = gtk_snapshot_to_paintable (_peel_this, _peel_size);
    return peel::RefPtr<Gdk::Paintable>::adopt_ref (reinterpret_cast<Gdk::Paintable *> (_peel_return));
  }

  peel_arg_in (2)
  void
  transform (Gsk::Transform *transform) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    ::GskTransform *_peel_transform = reinterpret_cast<::GskTransform *> (transform);
    gtk_snapshot_transform (_peel_this, _peel_transform);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  transform_matrix (const Graphene::Matrix *matrix) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_matrix_t *_peel_matrix = reinterpret_cast<const ::graphene_matrix_t *> (matrix);
    gtk_snapshot_transform_matrix (_peel_this, _peel_matrix);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  translate (const Graphene::Point *point) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    gtk_snapshot_translate (_peel_this, _peel_point);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  translate_3d (const Graphene::Point3D *point) noexcept
  {
    ::GtkSnapshot *_peel_this = reinterpret_cast<::GtkSnapshot *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    gtk_snapshot_translate_3d (_peel_this, _peel_point);
  }

  class Class : public Gdk::Snapshot::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Snapshot */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/Gdk/Paintable.h>
#include <peel/Gsk/RenderNode.h>
