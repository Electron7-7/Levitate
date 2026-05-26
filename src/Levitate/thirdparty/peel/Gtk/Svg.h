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
#include <peel/Gtk/SymbolicPaintable.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Gdk
{
class FrameClock;
} /* namespace Gdk */

namespace Gtk
{
class Svg;
enum class SvgFeatures : std::underlying_type<::GtkSvgFeatures>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Svg> ()
{
  return gtk_svg_get_type ();
}


namespace Gtk
{
class Svg : public SymbolicPaintable
/* non-derivable */
/* extends GObject::Object */
/* implements Gdk::Paintable, SymbolicPaintable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Svg () = delete;
  Svg (const Svg &) = delete;
  Svg (Svg &&) = delete;
  Svg &
  operator = (const Svg &) = delete;
  Svg &
  operator = (Svg &&) = delete;
  ~Svg () = delete;
public:

  static peel::RefPtr<Svg>
  create () noexcept
  {
    ::GtkSvg *_peel_return = gtk_svg_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Svg>::adopt_ref (reinterpret_cast<Svg *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Svg>
  create_from_bytes (GLib::Bytes *bytes) noexcept
  {
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GtkSvg *_peel_return = gtk_svg_new_from_bytes (_peel_bytes);
    peel_assume (_peel_return);
    return peel::RefPtr<Svg>::adopt_ref (reinterpret_cast<Svg *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Svg>
  create_from_resource (const char *path) noexcept
  {
    ::GtkSvg *_peel_return = gtk_svg_new_from_resource (path);
    peel_assume (_peel_return);
    return peel::RefPtr<Svg>::adopt_ref (reinterpret_cast<Svg *> (_peel_return));
  }

  SvgFeatures
  get_features () noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    ::GtkSvgFeatures _peel_return = gtk_svg_get_features (_peel_this);
    return static_cast<SvgFeatures> (_peel_return);
  }

  unsigned
  get_state () noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    return gtk_svg_get_state (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  peel::StrvRef
  get_state_names (unsigned *length) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    unsigned int *_peel_length = reinterpret_cast<unsigned int *> (length);
    const char **_peel_return = gtk_svg_get_state_names (_peel_this, _peel_length);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  double
  get_weight () noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    return gtk_svg_get_weight (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  load_from_bytes (GLib::Bytes *bytes) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    gtk_svg_load_from_bytes (_peel_this, _peel_bytes);
  }

  peel_nonnull_args (2)
  void
  load_from_resource (const char *path) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    gtk_svg_load_from_resource (_peel_this, path);
  }

  void
  pause () noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    gtk_svg_pause (_peel_this);
  }

  void
  play () noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    gtk_svg_play (_peel_this);
  }

  peel::RefPtr<GLib::Bytes>
  serialize () noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    ::GBytes *_peel_return = gtk_svg_serialize (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  void
  set_features (SvgFeatures features) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    ::GtkSvgFeatures _peel_features = static_cast<::GtkSvgFeatures> (features);
    gtk_svg_set_features (_peel_this, _peel_features);
  }

  peel_nonnull_args (2)
  void
  set_frame_clock (Gdk::FrameClock *clock) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    ::GdkFrameClock *_peel_clock = reinterpret_cast<::GdkFrameClock *> (clock);
    gtk_svg_set_frame_clock (_peel_this, _peel_clock);
  }

  void
  set_state (unsigned state) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    gtk_svg_set_state (_peel_this, state);
  }

  void
  set_weight (double weight) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    gtk_svg_set_weight (_peel_this, weight);
  }

  peel_nonnull_args (2)
  bool
  write_to_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkSvg *_peel_this = reinterpret_cast<::GtkSvg *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_svg_write_to_file (_peel_this, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_error (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Svg, void (const GLib::Error *)>::_peel_connect_by_name (this, "error", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_error (HandlerObject *object, void (HandlerObject::*handler_method) (Svg *, const GLib::Error *), bool after = false) noexcept
  {
    return Signal<Svg, void (const GLib::Error *)>::_peel_connect_by_name (this, "error", object, handler_method, after);
  }

  static peel::Property<SvgFeatures>
  prop_features ()
  {
    return peel::Property<SvgFeatures> { "features" };
  }

  static peel::Property<bool>
  prop_playing ()
  {
    return peel::Property<bool> { "playing" };
  }

  static peel::Property<const char *>
  prop_resource ()
  {
    return peel::Property<const char *> { "resource" };
  }

  static peel::Property<unsigned>
  prop_state ()
  {
    return peel::Property<unsigned> { "state" };
  }

  static peel::Property<double>
  prop_weight ()
  {
    return peel::Property<double> { "weight" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkSvgClass),
                 "Svg::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkSvgClass),
                 "Svg::Class align mismatch");
}; /* class Svg */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
