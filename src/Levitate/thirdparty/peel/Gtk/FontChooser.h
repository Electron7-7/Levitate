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
namespace Gtk
{
class /* interface */ FontChooser;
} /* namespace Gtk */

namespace Pango
{
class /* record */ FontDescription;
class FontFace;
class FontFamily;
class FontMap;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FontChooser> ()
{
  return gtk_font_chooser_get_type ();
}


namespace Gtk
{
class /* interface */ FontChooser : public GObject::Object
/* requires GObject::Object */
{
private:
  FontChooser () = delete;
  FontChooser (const FontChooser &) = delete;
  FontChooser (FontChooser &&) = delete;

  FontChooser &
  operator = (const FontChooser &) = delete;
  FontChooser &
  operator = (FontChooser &&) = delete;

protected:
  ~FontChooser () = default;

public:
  enum class Level : std::underlying_type<::GtkFontChooserLevel>::type;

  peel::String
  get_font () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    char *_peel_return = gtk_font_chooser_get_font (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::UniquePtr<Pango::FontDescription>
  get_font_desc () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontDescription *_peel_return = gtk_font_chooser_get_font_desc (_peel_this);
    return peel::UniquePtr<Pango::FontDescription>::adopt_ref (reinterpret_cast<Pango::FontDescription *> (_peel_return));
  }

  Pango::FontFace *
  get_font_face () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontFace *_peel_return = gtk_font_chooser_get_font_face (_peel_this);
    return reinterpret_cast<Pango::FontFace *> (_peel_return);
  }

  Pango::FontFamily *
  get_font_family () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontFamily *_peel_return = gtk_font_chooser_get_font_family (_peel_this);
    return reinterpret_cast<Pango::FontFamily *> (_peel_return);
  }

  peel::String
  get_font_features () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    char *_peel_return = gtk_font_chooser_get_font_features (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::RefPtr<Pango::FontMap>
  get_font_map () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontMap *_peel_return = gtk_font_chooser_get_font_map (_peel_this);
    return peel::RefPtr<Pango::FontMap>::adopt_ref (reinterpret_cast<Pango::FontMap *> (_peel_return));
  }

  int
  get_font_size () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    return gtk_font_chooser_get_font_size (_peel_this);
  }

  peel::String
  get_language () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    char *_peel_return = gtk_font_chooser_get_language (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  FontChooser::Level
  get_level () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::GtkFontChooserLevel _peel_return = gtk_font_chooser_get_level (_peel_this);
    return static_cast<FontChooser::Level> (_peel_return);
  }

  peel::String
  get_preview_text () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    char *_peel_return = gtk_font_chooser_get_preview_text (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  bool
  get_show_preview_entry () noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    gboolean _peel_return = gtk_font_chooser_get_show_preview_entry (_peel_this);
    return !!_peel_return;
  }

  template<typename FontFilterFunc>
  void
  set_filter_func (FontFilterFunc &&filter) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::GtkFontFilterFunc _peel_filter = peel::internals::CallbackHelper<gboolean, const ::PangoFontFamily *, const ::PangoFontFace *>::wrap_notified_callback (
      static_cast<FontFilterFunc &&> (filter),
      [] (const ::PangoFontFamily *family, const ::PangoFontFace *face, gpointer data) -> gboolean
      {
        FontFilterFunc &_peel_captured_filter = *reinterpret_cast<typename std::remove_reference<FontFilterFunc>::type *> (data);
        const Pango::FontFamily *_peel_family = reinterpret_cast<const Pango::FontFamily *> (family);
        const Pango::FontFace *_peel_face = reinterpret_cast<const Pango::FontFace *> (face);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_filter) (_peel_family, _peel_face);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<FontFilterFunc, void, const Pango::FontFamily *, const Pango::FontFace *>::value);
    gtk_font_chooser_set_filter_func (_peel_this, _peel_filter, _peel_user_data, _peel_destroy);
  }

  peel_nonnull_args (2)
  void
  set_font (const char *fontname) noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    gtk_font_chooser_set_font (_peel_this, fontname);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_font_desc (const Pango::FontDescription *font_desc) noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    const ::PangoFontDescription *_peel_font_desc = reinterpret_cast<const ::PangoFontDescription *> (font_desc);
    gtk_font_chooser_set_font_desc (_peel_this, _peel_font_desc);
  }

  void
  set_font_map (Pango::FontMap *fontmap) noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontMap *_peel_fontmap = reinterpret_cast<::PangoFontMap *> (fontmap);
    gtk_font_chooser_set_font_map (_peel_this, _peel_fontmap);
  }

  peel_nonnull_args (2)
  void
  set_language (const char *language) noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    gtk_font_chooser_set_language (_peel_this, language);
  }

  void
  set_level (FontChooser::Level level) noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::GtkFontChooserLevel _peel_level = static_cast<::GtkFontChooserLevel> (level);
    gtk_font_chooser_set_level (_peel_this, _peel_level);
  }

  peel_nonnull_args (2)
  void
  set_preview_text (const char *text) noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    gtk_font_chooser_set_preview_text (_peel_this, text);
  }

  void
  set_show_preview_entry (bool show_preview_entry) noexcept
  {
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    gboolean _peel_show_preview_entry = static_cast<gboolean> (show_preview_entry);
    gtk_font_chooser_set_show_preview_entry (_peel_this, _peel_show_preview_entry);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_font_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FontChooser, void (const char *)>::_peel_connect_by_name (this, "font-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_font_activated (HandlerObject *object, void (HandlerObject::*handler_method) (FontChooser *, const char *), bool after = false) noexcept
  {
    return Signal<FontChooser, void (const char *)>::_peel_connect_by_name (this, "font-activated", object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_font ()
  {
    return peel::Property<const char *> { "font" };
  }

  static peel::Property<Pango::FontDescription>
  prop_font_desc ()
  {
    return peel::Property<Pango::FontDescription> { "font-desc" };
  }

  static peel::Property<const char *>
  prop_font_features ()
  {
    return peel::Property<const char *> { "font-features" };
  }

  static peel::Property<const char *>
  prop_language ()
  {
    return peel::Property<const char *> { "language" };
  }

  static peel::Property<FontChooser::Level>
  prop_level ()
  {
    return peel::Property<FontChooser::Level> { "level" };
  }

  static peel::Property<const char *>
  prop_preview_text ()
  {
    return peel::Property<const char *> { "preview-text" };
  }

  static peel::Property<bool>
  prop_show_preview_entry ()
  {
    return peel::Property<bool> { "show-preview-entry" };
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_font_activated (const char *fontname) noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<FontChooser> ())->peek_parent ());
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    _peel_iface->font_activated (_peel_this, fontname);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_font_activated (const char *fontname) noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<FontChooser> ()));
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    _peel_iface->font_activated (_peel_this, fontname);
  }

  template<typename DerivedClass>
  Pango::FontFace *
  parent_vfunc_get_font_face () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<FontChooser> ())->peek_parent ());
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontFace *_peel_return = _peel_iface->get_font_face (_peel_this);
    return reinterpret_cast<Pango::FontFace *> (_peel_return);
  }

  Pango::FontFace *
  default_vfunc_get_font_face () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<FontChooser> ()));
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontFace *_peel_return = _peel_iface->get_font_face (_peel_this);
    return reinterpret_cast<Pango::FontFace *> (_peel_return);
  }

  template<typename DerivedClass>
  Pango::FontFamily *
  parent_vfunc_get_font_family () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<FontChooser> ())->peek_parent ());
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontFamily *_peel_return = _peel_iface->get_font_family (_peel_this);
    return reinterpret_cast<Pango::FontFamily *> (_peel_return);
  }

  Pango::FontFamily *
  default_vfunc_get_font_family () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<FontChooser> ()));
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontFamily *_peel_return = _peel_iface->get_font_family (_peel_this);
    return reinterpret_cast<Pango::FontFamily *> (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<Pango::FontMap>
  parent_vfunc_get_font_map () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<FontChooser> ())->peek_parent ());
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontMap *_peel_return = _peel_iface->get_font_map (_peel_this);
    return peel::RefPtr<Pango::FontMap>::adopt_ref (reinterpret_cast<Pango::FontMap *> (_peel_return));
  }

  peel::RefPtr<Pango::FontMap>
  default_vfunc_get_font_map () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<FontChooser> ()));
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontMap *_peel_return = _peel_iface->get_font_map (_peel_this);
    return peel::RefPtr<Pango::FontMap>::adopt_ref (reinterpret_cast<Pango::FontMap *> (_peel_return));
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_font_size () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<FontChooser> ())->peek_parent ());
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    return _peel_iface->get_font_size (_peel_this);
  }

  int
  default_vfunc_get_font_size () noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<FontChooser> ()));
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    return _peel_iface->get_font_size (_peel_this);
  }

  template<typename DerivedClass, typename FontFilterFunc>
  void
  parent_vfunc_set_filter_func (FontFilterFunc &&filter) noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<FontChooser> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::GtkFontFilterFunc _peel_filter = peel::internals::CallbackHelper<gboolean, const ::PangoFontFamily *, const ::PangoFontFace *>::wrap_notified_callback (
      static_cast<FontFilterFunc &&> (filter),
      [] (const ::PangoFontFamily *family, const ::PangoFontFace *face, gpointer data) -> gboolean
      {
        FontFilterFunc &_peel_captured_filter = *reinterpret_cast<typename std::remove_reference<FontFilterFunc>::type *> (data);
        const Pango::FontFamily *_peel_family = reinterpret_cast<const Pango::FontFamily *> (family);
        const Pango::FontFace *_peel_face = reinterpret_cast<const Pango::FontFace *> (face);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_filter) (_peel_family, _peel_face);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<FontFilterFunc, void, const Pango::FontFamily *, const Pango::FontFace *>::value);
    _peel_iface->set_filter_func (_peel_this, _peel_filter, _peel_user_data, _peel_destroy);
  }

  template<typename FontFilterFunc>
  void
  default_vfunc_set_filter_func (FontFilterFunc &&filter) noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<FontChooser> ()));
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::GtkFontFilterFunc _peel_filter = peel::internals::CallbackHelper<gboolean, const ::PangoFontFamily *, const ::PangoFontFace *>::wrap_notified_callback (
      static_cast<FontFilterFunc &&> (filter),
      [] (const ::PangoFontFamily *family, const ::PangoFontFace *face, gpointer data) -> gboolean
      {
        FontFilterFunc &_peel_captured_filter = *reinterpret_cast<typename std::remove_reference<FontFilterFunc>::type *> (data);
        const Pango::FontFamily *_peel_family = reinterpret_cast<const Pango::FontFamily *> (family);
        const Pango::FontFace *_peel_face = reinterpret_cast<const Pango::FontFace *> (face);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_filter) (_peel_family, _peel_face);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<FontFilterFunc, void, const Pango::FontFamily *, const Pango::FontFace *>::value);
    _peel_iface->set_filter_func (_peel_this, _peel_filter, _peel_user_data, _peel_destroy);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_font_map (Pango::FontMap *fontmap) noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<FontChooser> ())->peek_parent ());
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontMap *_peel_fontmap = reinterpret_cast<::PangoFontMap *> (fontmap);
    _peel_iface->set_font_map (_peel_this, _peel_fontmap);
  }

  void
  default_vfunc_set_font_map (Pango::FontMap *fontmap) noexcept
  {
    ::GtkFontChooserIface *_peel_iface = reinterpret_cast<::GtkFontChooserIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<FontChooser> ()));
    ::GtkFontChooser *_peel_this = reinterpret_cast<::GtkFontChooser *> (this);
    ::PangoFontMap *_peel_fontmap = reinterpret_cast<::PangoFontMap *> (fontmap);
    _peel_iface->set_font_map (_peel_this, _peel_fontmap);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkFontChooserIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_font_activated ()
    {
      ::GtkFontChooserIface *klass = reinterpret_cast<::GtkFontChooserIface *> (this);
      klass->font_activated = +[] (::GtkFontChooser *chooser, const char *fontname) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (chooser);
        _peel_this->DerivedClass::vfunc_font_activated (fontname);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_font_face ()
    {
      ::GtkFontChooserIface *klass = reinterpret_cast<::GtkFontChooserIface *> (this);
      klass->get_font_face = +[] (::GtkFontChooser *fontchooser) -> ::PangoFontFace *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontchooser);
        Pango::FontFace *_peel_return = _peel_this->DerivedClass::vfunc_get_font_face ();
        return reinterpret_cast<::PangoFontFace *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_font_family ()
    {
      ::GtkFontChooserIface *klass = reinterpret_cast<::GtkFontChooserIface *> (this);
      klass->get_font_family = +[] (::GtkFontChooser *fontchooser) -> ::PangoFontFamily *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontchooser);
        Pango::FontFamily *_peel_return = _peel_this->DerivedClass::vfunc_get_font_family ();
        return reinterpret_cast<::PangoFontFamily *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_font_map ()
    {
      ::GtkFontChooserIface *klass = reinterpret_cast<::GtkFontChooserIface *> (this);
      klass->get_font_map = +[] (::GtkFontChooser *fontchooser) -> ::PangoFontMap *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontchooser);
        peel::RefPtr<Pango::FontMap> _peel_return = _peel_this->DerivedClass::vfunc_get_font_map ();
        return reinterpret_cast<::PangoFontMap *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_font_size ()
    {
      ::GtkFontChooserIface *klass = reinterpret_cast<::GtkFontChooserIface *> (this);
      klass->get_font_size = +[] (::GtkFontChooser *fontchooser) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontchooser);
        return _peel_this->DerivedClass::vfunc_get_font_size ();
      };
    }

    /* Unsupported for now: set_filter_func: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_set_font_map ()
    {
      ::GtkFontChooserIface *klass = reinterpret_cast<::GtkFontChooserIface *> (this);
      klass->set_font_map = +[] (::GtkFontChooser *fontchooser, ::PangoFontMap *fontmap) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontchooser);
        Pango::FontMap *_peel_fontmap = reinterpret_cast<Pango::FontMap *> (fontmap);
        _peel_this->DerivedClass::vfunc_set_font_map (_peel_fontmap);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkFontChooserIface),
                 "FontChooser::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkFontChooserIface),
                 "FontChooser::Iface align mismatch");
}; /* interface FontChooser */
static_assert (sizeof (FontChooser) == sizeof (GObject::Object),
               "FontChooser size mismatch");
static_assert (alignof (FontChooser) == alignof (GObject::Object),
               "FontChooser align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Pango/FontDescription.h>
#include <peel/Pango/FontMap.h>
