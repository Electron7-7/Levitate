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
#include <peel/Gtk/StyleProvider.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

namespace Gtk
{
class CssProvider;
class /* record */ CssSection;
enum class InterfaceColorScheme : std::underlying_type<::GtkInterfaceColorScheme>::type;
enum class InterfaceContrast : std::underlying_type<::GtkInterfaceContrast>::type;
enum class ReducedMotion : std::underlying_type<::GtkReducedMotion>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CssProvider> ()
{
  return gtk_css_provider_get_type ();
}


namespace Gtk
{
class CssProvider : public StyleProvider
/* extends GObject::Object */
/* implements StyleProvider */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CssProvider () = delete;
  CssProvider (const CssProvider &) = delete;
  CssProvider (CssProvider &&) = delete;
  CssProvider &
  operator = (const CssProvider &) = delete;
  CssProvider &
  operator = (CssProvider &&) = delete;
protected:
  ~CssProvider () = default;
public:

  static peel::RefPtr<CssProvider>
  create () noexcept
  {
    ::GtkCssProvider *_peel_return = gtk_css_provider_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<CssProvider>::adopt_ref (reinterpret_cast<CssProvider *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  load_from_bytes (GLib::Bytes *data) noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    ::GBytes *_peel_data = reinterpret_cast<::GBytes *> (data);
    gtk_css_provider_load_from_bytes (_peel_this, _peel_data);
  }

  peel_nonnull_args (2)
  void
  load_from_data (const char *data, gssize length) noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    gtk_css_provider_load_from_data (_peel_this, data, length);
  }

  peel_nonnull_args (2)
  void
  load_from_file (Gio::File *file) noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gtk_css_provider_load_from_file (_peel_this, _peel_file);
  }

  peel_nonnull_args (2)
  void
  load_from_path (const char *path) noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    gtk_css_provider_load_from_path (_peel_this, path);
  }

  peel_nonnull_args (2)
  void
  load_from_resource (const char *resource_path) noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    gtk_css_provider_load_from_resource (_peel_this, resource_path);
  }

  peel_nonnull_args (2)
  void
  load_from_string (const char *string) noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    gtk_css_provider_load_from_string (_peel_this, string);
  }

  peel_nonnull_args (2)
  void
  load_named (const char *name, const char *variant) noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    gtk_css_provider_load_named (_peel_this, name, variant);
  }

  peel::String
  to_string () noexcept
  {
    ::GtkCssProvider *_peel_this = reinterpret_cast<::GtkCssProvider *> (this);
    char *_peel_return = gtk_css_provider_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_parsing_error (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CssProvider, void (CssSection *, const GLib::Error *)>::_peel_connect_by_name (this, "parsing-error", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_parsing_error (HandlerObject *object, void (HandlerObject::*handler_method) (CssProvider *, CssSection *, const GLib::Error *), bool after = false) noexcept
  {
    return Signal<CssProvider, void (CssSection *, const GLib::Error *)>::_peel_connect_by_name (this, "parsing-error", object, handler_method, after);
  }

  static peel::Property<InterfaceColorScheme>
  prop_prefers_color_scheme ()
  {
    return peel::Property<InterfaceColorScheme> { "prefers-color-scheme" };
  }

  static peel::Property<InterfaceContrast>
  prop_prefers_contrast ()
  {
    return peel::Property<InterfaceContrast> { "prefers-contrast" };
  }

  static peel::Property<ReducedMotion>
  prop_prefers_reduced_motion ()
  {
    return peel::Property<ReducedMotion> { "prefers-reduced-motion" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<CssProvider> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class CssProvider */

static_assert (sizeof (CssProvider) == sizeof (::GtkCssProvider),
               "CssProvider size mismatch");
static_assert (alignof (CssProvider) == alignof (::GtkCssProvider),
               "CssProvider align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
