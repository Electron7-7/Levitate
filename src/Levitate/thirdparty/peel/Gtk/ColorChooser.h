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
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
struct RGBA;
} /* namespace Gdk */

namespace Gtk
{
class /* interface */ ColorChooser;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColorChooser> ()
{
  return gtk_color_chooser_get_type ();
}


namespace Gtk
{
class /* interface */ ColorChooser : public GObject::Object
/* requires GObject::Object */
{
private:
  ColorChooser () = delete;
  ColorChooser (const ColorChooser &) = delete;
  ColorChooser (ColorChooser &&) = delete;

  ColorChooser &
  operator = (const ColorChooser &) = delete;
  ColorChooser &
  operator = (ColorChooser &&) = delete;

protected:
  ~ColorChooser () = default;

public:

  void
  add_palette (Orientation orientation, int colors_per_line, peel::ArrayRef<Gdk::RGBA> colors) noexcept
  {
    int _peel_n_colors;
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<::GdkRGBA *> (colors.data ()));
    gtk_color_chooser_add_palette (_peel_this, _peel_orientation, colors_per_line, _peel_n_colors, _peel_colors);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_rgba (Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    ::GdkRGBA *_peel_color = reinterpret_cast<::GdkRGBA *> (color);
    gtk_color_chooser_get_rgba (_peel_this, _peel_color);
  }

  bool
  get_use_alpha () noexcept
  {
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    gboolean _peel_return = gtk_color_chooser_get_use_alpha (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_rgba (const Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    gtk_color_chooser_set_rgba (_peel_this, _peel_color);
  }

  void
  set_use_alpha (bool use_alpha) noexcept
  {
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    gboolean _peel_use_alpha = static_cast<gboolean> (use_alpha);
    gtk_color_chooser_set_use_alpha (_peel_this, _peel_use_alpha);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_color_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ColorChooser, void (const Gdk::RGBA *)>::_peel_connect_by_name (this, "color-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_color_activated (HandlerObject *object, void (HandlerObject::*handler_method) (ColorChooser *, const Gdk::RGBA *), bool after = false) noexcept
  {
    return Signal<ColorChooser, void (const Gdk::RGBA *)>::_peel_connect_by_name (this, "color-activated", object, handler_method, after);
  }

  static peel::Property<Gdk::RGBA>
  prop_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "rgba" };
  }

  static peel::Property<bool>
  prop_use_alpha ()
  {
    return peel::Property<bool> { "use-alpha" };
  }

  template<typename DerivedClass>
  void
  parent_vfunc_add_palette (Orientation orientation, int colors_per_line, peel::ArrayRef<Gdk::RGBA> colors) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ColorChooser> ())->peek_parent ());
    int _peel_n_colors;
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<::GdkRGBA *> (colors.data ()));
    _peel_iface->add_palette (_peel_this, _peel_orientation, colors_per_line, _peel_n_colors, _peel_colors);
  }

  void
  default_vfunc_add_palette (Orientation orientation, int colors_per_line, peel::ArrayRef<Gdk::RGBA> colors) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ColorChooser> ()));
    int _peel_n_colors;
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<::GdkRGBA *> (colors.data ()));
    _peel_iface->add_palette (_peel_this, _peel_orientation, colors_per_line, _peel_n_colors, _peel_colors);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_color_activated (const Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ColorChooser> ())->peek_parent ());
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    _peel_iface->color_activated (_peel_this, _peel_color);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  default_vfunc_color_activated (const Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ColorChooser> ()));
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    _peel_iface->color_activated (_peel_this, _peel_color);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_nonnull_args (2)
  void
  parent_vfunc_get_rgba (Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ColorChooser> ())->peek_parent ());
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    ::GdkRGBA *_peel_color = reinterpret_cast<::GdkRGBA *> (color);
    _peel_iface->get_rgba (_peel_this, _peel_color);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  default_vfunc_get_rgba (Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ColorChooser> ()));
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    ::GdkRGBA *_peel_color = reinterpret_cast<::GdkRGBA *> (color);
    _peel_iface->get_rgba (_peel_this, _peel_color);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_set_rgba (const Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ColorChooser> ())->peek_parent ());
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    _peel_iface->set_rgba (_peel_this, _peel_color);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  default_vfunc_set_rgba (const Gdk::RGBA *color) noexcept
  {
    ::GtkColorChooserInterface *_peel_iface = reinterpret_cast<::GtkColorChooserInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ColorChooser> ()));
    ::GtkColorChooser *_peel_this = reinterpret_cast<::GtkColorChooser *> (this);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    _peel_iface->set_rgba (_peel_this, _peel_color);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkColorChooserInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_add_palette ()
    {
      ::GtkColorChooserInterface *klass = reinterpret_cast<::GtkColorChooserInterface *> (this);
      klass->add_palette = +[] (::GtkColorChooser *chooser, ::GtkOrientation orientation, int colors_per_line, int n_colors, ::GdkRGBA *colors) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (chooser);
        Orientation _peel_orientation = static_cast<Orientation> (orientation);
        peel::ArrayRef<Gdk::RGBA> _peel_colors = peel::ArrayRef<Gdk::RGBA> (reinterpret_cast<Gdk::RGBA *> (colors), n_colors);
        _peel_this->DerivedClass::vfunc_add_palette (_peel_orientation, colors_per_line, _peel_colors);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_color_activated ()
    {
      ::GtkColorChooserInterface *klass = reinterpret_cast<::GtkColorChooserInterface *> (this);
      klass->color_activated = +[] (::GtkColorChooser *chooser, const ::GdkRGBA *color) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (chooser);
        const Gdk::RGBA *_peel_color = reinterpret_cast<const Gdk::RGBA *> (color);
        _peel_this->DerivedClass::vfunc_color_activated (_peel_color);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_rgba ()
    {
      ::GtkColorChooserInterface *klass = reinterpret_cast<::GtkColorChooserInterface *> (this);
      klass->get_rgba = +[] (::GtkColorChooser *chooser, ::GdkRGBA *color) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (chooser);
        Gdk::RGBA *_peel_color = reinterpret_cast<Gdk::RGBA *> (color);
        _peel_this->DerivedClass::vfunc_get_rgba (_peel_color);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_rgba ()
    {
      ::GtkColorChooserInterface *klass = reinterpret_cast<::GtkColorChooserInterface *> (this);
      klass->set_rgba = +[] (::GtkColorChooser *chooser, const ::GdkRGBA *color) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (chooser);
        const Gdk::RGBA *_peel_color = reinterpret_cast<const Gdk::RGBA *> (color);
        _peel_this->DerivedClass::vfunc_set_rgba (_peel_color);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkColorChooserInterface),
                 "ColorChooser::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkColorChooserInterface),
                 "ColorChooser::Iface align mismatch");
}; /* interface ColorChooser */
static_assert (sizeof (ColorChooser) == sizeof (GObject::Object),
               "ColorChooser size mismatch");
static_assert (alignof (ColorChooser) == alignof (GObject::Object),
               "ColorChooser align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
