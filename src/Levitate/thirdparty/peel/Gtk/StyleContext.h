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

peel_begin_header

namespace peel
{
namespace Gdk
{
class Display;
struct RGBA;
} /* namespace Gdk */

namespace Gtk
{
struct Border;
enum class StateFlags : std::underlying_type<::GtkStateFlags>::type;
class StyleContext;
class /* interface */ StyleProvider;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StyleContext> ()
{
  return gtk_style_context_get_type ();
}


namespace Gtk
{
class StyleContext : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StyleContext () = delete;
  StyleContext (const StyleContext &) = delete;
  StyleContext (StyleContext &&) = delete;
  StyleContext &
  operator = (const StyleContext &) = delete;
  StyleContext &
  operator = (StyleContext &&) = delete;
protected:
  ~StyleContext () = default;
public:
  enum class PrintFlags : std::underlying_type<::GtkStyleContextPrintFlags>::type;

  peel_nonnull_args (1, 2)
  static void
  add_provider_for_display (Gdk::Display *display, StyleProvider *provider, unsigned priority) noexcept
  {
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GtkStyleProvider *_peel_provider = reinterpret_cast<::GtkStyleProvider *> (provider);
    gtk_style_context_add_provider_for_display (_peel_display, _peel_provider, priority);
  }

  peel_nonnull_args (1, 2)
  static void
  remove_provider_for_display (Gdk::Display *display, StyleProvider *provider) noexcept
  {
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GtkStyleProvider *_peel_provider = reinterpret_cast<::GtkStyleProvider *> (provider);
    gtk_style_context_remove_provider_for_display (_peel_display, _peel_provider);
  }

  peel_nonnull_args (2)
  void
  add_class (const char *class_name) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    gtk_style_context_add_class (_peel_this, class_name);
  }

  peel_nonnull_args (2)
  void
  add_provider (StyleProvider *provider, unsigned priority) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkStyleProvider *_peel_provider = reinterpret_cast<::GtkStyleProvider *> (provider);
    gtk_style_context_add_provider (_peel_this, _peel_provider, priority);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_border (Border *border) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkBorder *_peel_border = reinterpret_cast<::GtkBorder *> (border);
    gtk_style_context_get_border (_peel_this, _peel_border);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_color (Gdk::RGBA *color) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GdkRGBA *_peel_color = reinterpret_cast<::GdkRGBA *> (color);
    gtk_style_context_get_color (_peel_this, _peel_color);
  }

  peel_returns_nonnull
  Gdk::Display *
  get_display () noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GdkDisplay *_peel_return = gtk_style_context_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::Display *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_margin (Border *margin) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkBorder *_peel_margin = reinterpret_cast<::GtkBorder *> (margin);
    gtk_style_context_get_margin (_peel_this, _peel_margin);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_padding (Border *padding) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkBorder *_peel_padding = reinterpret_cast<::GtkBorder *> (padding);
    gtk_style_context_get_padding (_peel_this, _peel_padding);
  }

  int
  get_scale () noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    return gtk_style_context_get_scale (_peel_this);
  }

  StateFlags
  get_state () noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkStateFlags _peel_return = gtk_style_context_get_state (_peel_this);
    return static_cast<StateFlags> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_class (const char *class_name) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    gboolean _peel_return = gtk_style_context_has_class (_peel_this, class_name);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  lookup_color (const char *color_name, Gdk::RGBA *color) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GdkRGBA *_peel_color = reinterpret_cast<::GdkRGBA *> (color);
    gboolean _peel_return = gtk_style_context_lookup_color (_peel_this, color_name, _peel_color);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  remove_class (const char *class_name) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    gtk_style_context_remove_class (_peel_this, class_name);
  }

  peel_nonnull_args (2)
  void
  remove_provider (StyleProvider *provider) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkStyleProvider *_peel_provider = reinterpret_cast<::GtkStyleProvider *> (provider);
    gtk_style_context_remove_provider (_peel_this, _peel_provider);
  }

  void
  restore () noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    gtk_style_context_restore (_peel_this);
  }

  void
  save () noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    gtk_style_context_save (_peel_this);
  }

  peel_nonnull_args (2)
  void
  set_display (Gdk::Display *display) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    gtk_style_context_set_display (_peel_this, _peel_display);
  }

  void
  set_scale (int scale) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    gtk_style_context_set_scale (_peel_this, scale);
  }

  void
  set_state (StateFlags flags) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkStateFlags _peel_flags = static_cast<::GtkStateFlags> (flags);
    gtk_style_context_set_state (_peel_this, _peel_flags);
  }

  peel::String
  to_string (StyleContext::PrintFlags flags) noexcept
  {
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    ::GtkStyleContextPrintFlags _peel_flags = static_cast<::GtkStyleContextPrintFlags> (flags);
    char *_peel_return = gtk_style_context_to_string (_peel_this, _peel_flags);
    return peel::String::adopt_string (_peel_return);
  }

  static peel::Property<Gdk::Display>
  prop_display ()
  {
    return peel::Property<Gdk::Display> { "display" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<StyleContext> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GtkStyleContextClass *_peel_class = reinterpret_cast<::GtkStyleContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkStyleContext *_peel_this = reinterpret_cast<::GtkStyleContext *> (this);
    _peel_class->changed (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkStyleContextClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GtkStyleContextClass *klass = reinterpret_cast<::GtkStyleContextClass *> (this);
      klass->changed = +[] (::GtkStyleContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkStyleContextClass),
                 "StyleContext::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkStyleContextClass),
                 "StyleContext::Class align mismatch");
}; /* class StyleContext */

static_assert (sizeof (StyleContext) == sizeof (::GtkStyleContext),
               "StyleContext size mismatch");
static_assert (alignof (StyleContext) == alignof (::GtkStyleContext),
               "StyleContext align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
