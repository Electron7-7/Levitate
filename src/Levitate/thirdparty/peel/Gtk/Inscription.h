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
namespace Gtk
{
class Inscription;
} /* namespace Gtk */

namespace Pango
{
class /* record */ AttrList;
enum class WrapMode : std::underlying_type<::PangoWrapMode>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Inscription> ()
{
  return gtk_inscription_get_type ();
}


namespace Gtk
{
class Inscription : public Widget
/* non-derivable */
/* implements Accessible, AccessibleText, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Inscription () = delete;
  Inscription (const Inscription &) = delete;
  Inscription (Inscription &&) = delete;
  Inscription &
  operator = (const Inscription &) = delete;
  Inscription &
  operator = (Inscription &&) = delete;
  ~Inscription () = delete;
public:
  enum class Overflow : std::underlying_type<::GtkInscriptionOverflow>::type;

  static peel::FloatPtr<Inscription>
  create (const char *text) noexcept
  {
    ::GtkWidget *_peel_return = gtk_inscription_new (text);
    peel_assume (_peel_return);
    return peel::FloatPtr<Inscription> (reinterpret_cast<Inscription *> (_peel_return));
  }

  Pango::AttrList *
  get_attributes () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    ::PangoAttrList *_peel_return = gtk_inscription_get_attributes (_peel_this);
    return reinterpret_cast<Pango::AttrList *> (_peel_return);
  }

  unsigned
  get_min_chars () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    return gtk_inscription_get_min_chars (_peel_this);
  }

  unsigned
  get_min_lines () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    return gtk_inscription_get_min_lines (_peel_this);
  }

  unsigned
  get_nat_chars () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    return gtk_inscription_get_nat_chars (_peel_this);
  }

  unsigned
  get_nat_lines () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    return gtk_inscription_get_nat_lines (_peel_this);
  }

  const char *
  get_text () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    return gtk_inscription_get_text (_peel_this);
  }

  Inscription::Overflow
  get_text_overflow () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    ::GtkInscriptionOverflow _peel_return = gtk_inscription_get_text_overflow (_peel_this);
    return static_cast<Inscription::Overflow> (_peel_return);
  }

  Pango::WrapMode
  get_wrap_mode () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    ::PangoWrapMode _peel_return = gtk_inscription_get_wrap_mode (_peel_this);
    return static_cast<Pango::WrapMode> (_peel_return);
  }

  float
  get_xalign () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    return gtk_inscription_get_xalign (_peel_this);
  }

  float
  get_yalign () noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    return gtk_inscription_get_yalign (_peel_this);
  }

  peel_arg_in (2)
  void
  set_attributes (Pango::AttrList *attrs) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    ::PangoAttrList *_peel_attrs = reinterpret_cast<::PangoAttrList *> (attrs);
    gtk_inscription_set_attributes (_peel_this, _peel_attrs);
  }

  void
  set_markup (const char *markup) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_markup (_peel_this, markup);
  }

  void
  set_min_chars (unsigned min_chars) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_min_chars (_peel_this, min_chars);
  }

  void
  set_min_lines (unsigned min_lines) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_min_lines (_peel_this, min_lines);
  }

  void
  set_nat_chars (unsigned nat_chars) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_nat_chars (_peel_this, nat_chars);
  }

  void
  set_nat_lines (unsigned nat_lines) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_nat_lines (_peel_this, nat_lines);
  }

  void
  set_text (const char *text) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_text (_peel_this, text);
  }

  void
  set_text_overflow (Inscription::Overflow overflow) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    ::GtkInscriptionOverflow _peel_overflow = static_cast<::GtkInscriptionOverflow> (overflow);
    gtk_inscription_set_text_overflow (_peel_this, _peel_overflow);
  }

  void
  set_wrap_mode (Pango::WrapMode wrap_mode) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    ::PangoWrapMode _peel_wrap_mode = static_cast<::PangoWrapMode> (wrap_mode);
    gtk_inscription_set_wrap_mode (_peel_this, _peel_wrap_mode);
  }

  void
  set_xalign (float xalign) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_xalign (_peel_this, xalign);
  }

  void
  set_yalign (float yalign) noexcept
  {
    ::GtkInscription *_peel_this = reinterpret_cast<::GtkInscription *> (this);
    gtk_inscription_set_yalign (_peel_this, yalign);
  }

  static peel::Property<Pango::AttrList>
  prop_attributes ()
  {
    return peel::Property<Pango::AttrList> { "attributes" };
  }

  static peel::Property<const char *>
  prop_markup ()
  {
    return peel::Property<const char *> { "markup" };
  }

  static peel::Property<unsigned>
  prop_min_chars ()
  {
    return peel::Property<unsigned> { "min-chars" };
  }

  static peel::Property<unsigned>
  prop_min_lines ()
  {
    return peel::Property<unsigned> { "min-lines" };
  }

  static peel::Property<unsigned>
  prop_nat_chars ()
  {
    return peel::Property<unsigned> { "nat-chars" };
  }

  static peel::Property<unsigned>
  prop_nat_lines ()
  {
    return peel::Property<unsigned> { "nat-lines" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }

  static peel::Property<Inscription::Overflow>
  prop_text_overflow ()
  {
    return peel::Property<Inscription::Overflow> { "text-overflow" };
  }

  static peel::Property<Pango::WrapMode>
  prop_wrap_mode ()
  {
    return peel::Property<Pango::WrapMode> { "wrap-mode" };
  }

  static peel::Property<float>
  prop_xalign ()
  {
    return peel::Property<float> { "xalign" };
  }

  static peel::Property<float>
  prop_yalign ()
  {
    return peel::Property<float> { "yalign" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkInscriptionClass),
                 "Inscription::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkInscriptionClass),
                 "Inscription::Class align mismatch");
}; /* class Inscription */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
