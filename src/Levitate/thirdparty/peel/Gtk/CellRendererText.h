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
#include <peel/Gtk/CellRenderer.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
struct RGBA;
} /* namespace Gdk */

namespace Gtk
{
class CellRendererText;
} /* namespace Gtk */

namespace Pango
{
enum class Alignment : std::underlying_type<::PangoAlignment>::type;
class /* record */ AttrList;
enum class EllipsizeMode : std::underlying_type<::PangoEllipsizeMode>::type;
class /* record */ FontDescription;
enum class Stretch : std::underlying_type<::PangoStretch>::type;
enum class Style : std::underlying_type<::PangoStyle>::type;
enum class Underline : std::underlying_type<::PangoUnderline>::type;
enum class Variant : std::underlying_type<::PangoVariant>::type;
enum class WrapMode : std::underlying_type<::PangoWrapMode>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererText> ()
{
  return gtk_cell_renderer_text_get_type ();
}


namespace Gtk
{
class CellRendererText : public CellRenderer
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererText () = delete;
  CellRendererText (const CellRendererText &) = delete;
  CellRendererText (CellRendererText &&) = delete;
  CellRendererText &
  operator = (const CellRendererText &) = delete;
  CellRendererText &
  operator = (CellRendererText &&) = delete;
protected:
  ~CellRendererText () = default;
public:

  static peel::FloatPtr<CellRendererText>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_text_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererText> (reinterpret_cast<CellRendererText *> (_peel_return));
  }

  void
  set_fixed_height_from_font (int number_of_rows) noexcept
  {
    ::GtkCellRendererText *_peel_this = reinterpret_cast<::GtkCellRendererText *> (this);
    gtk_cell_renderer_text_set_fixed_height_from_font (_peel_this, number_of_rows);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_edited (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellRendererText, void (const char *, const char *)>::_peel_connect_by_name (this, "edited", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_edited (HandlerObject *object, void (HandlerObject::*handler_method) (CellRendererText *, const char *, const char *), bool after = false) noexcept
  {
    return Signal<CellRendererText, void (const char *, const char *)>::_peel_connect_by_name (this, "edited", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_align_set ()
  {
    return peel::Property<bool> { "align-set" };
  }

  static peel::Property<Pango::Alignment>
  prop_alignment ()
  {
    return peel::Property<Pango::Alignment> { "alignment" };
  }

  static peel::Property<Pango::AttrList>
  prop_attributes ()
  {
    return peel::Property<Pango::AttrList> { "attributes" };
  }

  static peel::Property<const char *>
  prop_background ()
  {
    return peel::Property<const char *> { "background" };
  }

  static peel::Property<Gdk::RGBA>
  prop_background_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "background-rgba" };
  }

  static peel::Property<bool>
  prop_background_set ()
  {
    return peel::Property<bool> { "background-set" };
  }

  static peel::Property<bool>
  prop_editable ()
  {
    return peel::Property<bool> { "editable" };
  }

  static peel::Property<bool>
  prop_editable_set ()
  {
    return peel::Property<bool> { "editable-set" };
  }

  static peel::Property<Pango::EllipsizeMode>
  prop_ellipsize ()
  {
    return peel::Property<Pango::EllipsizeMode> { "ellipsize" };
  }

  static peel::Property<bool>
  prop_ellipsize_set ()
  {
    return peel::Property<bool> { "ellipsize-set" };
  }

  static peel::Property<const char *>
  prop_family ()
  {
    return peel::Property<const char *> { "family" };
  }

  static peel::Property<bool>
  prop_family_set ()
  {
    return peel::Property<bool> { "family-set" };
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
  prop_foreground ()
  {
    return peel::Property<const char *> { "foreground" };
  }

  static peel::Property<Gdk::RGBA>
  prop_foreground_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "foreground-rgba" };
  }

  static peel::Property<bool>
  prop_foreground_set ()
  {
    return peel::Property<bool> { "foreground-set" };
  }

  static peel::Property<const char *>
  prop_language ()
  {
    return peel::Property<const char *> { "language" };
  }

  static peel::Property<bool>
  prop_language_set ()
  {
    return peel::Property<bool> { "language-set" };
  }

  static peel::Property<const char *>
  prop_markup ()
  {
    return peel::Property<const char *> { "markup" };
  }

  static peel::Property<int>
  prop_max_width_chars ()
  {
    return peel::Property<int> { "max-width-chars" };
  }

  static peel::Property<const char *>
  prop_placeholder_text ()
  {
    return peel::Property<const char *> { "placeholder-text" };
  }

  static peel::Property<int>
  prop_rise ()
  {
    return peel::Property<int> { "rise" };
  }

  static peel::Property<bool>
  prop_rise_set ()
  {
    return peel::Property<bool> { "rise-set" };
  }

  static peel::Property<double>
  prop_scale ()
  {
    return peel::Property<double> { "scale" };
  }

  static peel::Property<bool>
  prop_scale_set ()
  {
    return peel::Property<bool> { "scale-set" };
  }

  static peel::Property<bool>
  prop_single_paragraph_mode ()
  {
    return peel::Property<bool> { "single-paragraph-mode" };
  }

  static peel::Property<int>
  prop_size ()
  {
    return peel::Property<int> { "size" };
  }

  static peel::Property<double>
  prop_size_points ()
  {
    return peel::Property<double> { "size-points" };
  }

  static peel::Property<bool>
  prop_size_set ()
  {
    return peel::Property<bool> { "size-set" };
  }

  static peel::Property<Pango::Stretch>
  prop_stretch ()
  {
    return peel::Property<Pango::Stretch> { "stretch" };
  }

  static peel::Property<bool>
  prop_stretch_set ()
  {
    return peel::Property<bool> { "stretch-set" };
  }

  static peel::Property<bool>
  prop_strikethrough ()
  {
    return peel::Property<bool> { "strikethrough" };
  }

  static peel::Property<bool>
  prop_strikethrough_set ()
  {
    return peel::Property<bool> { "strikethrough-set" };
  }

  static peel::Property<Pango::Style>
  prop_style ()
  {
    return peel::Property<Pango::Style> { "style" };
  }

  static peel::Property<bool>
  prop_style_set ()
  {
    return peel::Property<bool> { "style-set" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }

  static peel::Property<Pango::Underline>
  prop_underline ()
  {
    return peel::Property<Pango::Underline> { "underline" };
  }

  static peel::Property<bool>
  prop_underline_set ()
  {
    return peel::Property<bool> { "underline-set" };
  }

  static peel::Property<Pango::Variant>
  prop_variant ()
  {
    return peel::Property<Pango::Variant> { "variant" };
  }

  static peel::Property<bool>
  prop_variant_set ()
  {
    return peel::Property<bool> { "variant-set" };
  }

  static peel::Property<int>
  prop_weight ()
  {
    return peel::Property<int> { "weight" };
  }

  static peel::Property<bool>
  prop_weight_set ()
  {
    return peel::Property<bool> { "weight-set" };
  }

  static peel::Property<int>
  prop_width_chars ()
  {
    return peel::Property<int> { "width-chars" };
  }

  static peel::Property<Pango::WrapMode>
  prop_wrap_mode ()
  {
    return peel::Property<Pango::WrapMode> { "wrap-mode" };
  }

  static peel::Property<int>
  prop_wrap_width ()
  {
    return peel::Property<int> { "wrap-width" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<CellRendererText> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_edited (const char *path, const char *new_text) noexcept
  {
    ::GtkCellRendererTextClass *_peel_class = reinterpret_cast<::GtkCellRendererTextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRendererText *_peel_this = reinterpret_cast<::GtkCellRendererText *> (this);
    _peel_class->edited (_peel_this, path, new_text);
  }

public:
  class Class : public CellRenderer::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkCellRendererTextClass) - sizeof (CellRenderer::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_edited ()
    {
      ::GtkCellRendererTextClass *klass = reinterpret_cast<::GtkCellRendererTextClass *> (this);
      klass->edited = +[] (::GtkCellRendererText *cell_renderer_text, const char *path, const char *new_text) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_renderer_text);
        _peel_this->DerivedClass::vfunc_edited (path, new_text);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkCellRendererTextClass),
                 "CellRendererText::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCellRendererTextClass),
                 "CellRendererText::Class align mismatch");
}; /* class CellRendererText */

static_assert (sizeof (CellRendererText) == sizeof (::GtkCellRendererText),
               "CellRendererText size mismatch");
static_assert (alignof (CellRendererText) == alignof (::GtkCellRendererText),
               "CellRendererText align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
