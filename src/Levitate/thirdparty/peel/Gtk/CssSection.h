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

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct String;
} /* namespace GLib */

namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

namespace Gtk
{
struct CssLocation;
class /* record */ CssSection;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CssSection> ()
{
  return gtk_css_section_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::CssSection>
{
  typedef RefPtr<Gtk::CssSection> OwnedType;
  typedef Gtk::CssSection * UnownedType;

  static Gtk::CssSection *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gtk::CssSection *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gtk::CssSection * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gtk::CssSection>
  dup (const ::GValue *value)
  {
    return RefPtr<Gtk::CssSection>::adopt_ref (reinterpret_cast<Gtk::CssSection *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gtk::CssSection> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gtk::CssSection *
  cast_for_create (Gtk::CssSection * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::CssSection>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::CssSection> (), basics.flags);
  }
};

template<>
struct RefTraits<Gtk::CssSection, void>
{
  static void
  ref (Gtk::CssSection *ptr)
  {
    gtk_css_section_ref (reinterpret_cast<::GtkCssSection *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gtk::CssSection *ptr)
  {
    gtk_css_section_unref (reinterpret_cast<::GtkCssSection *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gtk
{
class /* record */ CssSection
{
private:
  CssSection () = delete;
  CssSection (const CssSection &) = delete;
  CssSection (CssSection &&) = delete;
  ~CssSection ();

public:
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  static peel::RefPtr<CssSection>
  create (Gio::File *file, const CssLocation *start, const CssLocation *end) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    const ::GtkCssLocation *_peel_start = reinterpret_cast<const ::GtkCssLocation *> (start);
    const ::GtkCssLocation *_peel_end = reinterpret_cast<const ::GtkCssLocation *> (end);
    ::GtkCssSection *_peel_return = gtk_css_section_new (_peel_file, _peel_start, _peel_end);
    peel_assume (_peel_return);
    return peel::RefPtr<CssSection>::adopt_ref (reinterpret_cast<CssSection *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (3, 4)
  static peel::RefPtr<CssSection>
  create_with_bytes (Gio::File *file, GLib::Bytes *bytes, const CssLocation *start, const CssLocation *end) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    const ::GtkCssLocation *_peel_start = reinterpret_cast<const ::GtkCssLocation *> (start);
    const ::GtkCssLocation *_peel_end = reinterpret_cast<const ::GtkCssLocation *> (end);
    ::GtkCssSection *_peel_return = gtk_css_section_new_with_bytes (_peel_file, _peel_bytes, _peel_start, _peel_end);
    peel_assume (_peel_return);
    return peel::RefPtr<CssSection>::adopt_ref (reinterpret_cast<CssSection *> (_peel_return));
  }

  GLib::Bytes *
  get_bytes () const noexcept
  {
    const ::GtkCssSection *_peel_this = reinterpret_cast<const ::GtkCssSection *> (this);
    ::GBytes *_peel_return = gtk_css_section_get_bytes (_peel_this);
    return reinterpret_cast<GLib::Bytes *> (_peel_return);
  }

  peel_returns_nonnull
  const CssLocation *
  get_end_location () const noexcept
  {
    const ::GtkCssSection *_peel_this = reinterpret_cast<const ::GtkCssSection *> (this);
    const ::GtkCssLocation *_peel_return = gtk_css_section_get_end_location (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const CssLocation *> (_peel_return);
  }

  Gio::File *
  get_file () const noexcept
  {
    const ::GtkCssSection *_peel_this = reinterpret_cast<const ::GtkCssSection *> (this);
    ::GFile *_peel_return = gtk_css_section_get_file (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  CssSection *
  get_parent () const noexcept
  {
    const ::GtkCssSection *_peel_this = reinterpret_cast<const ::GtkCssSection *> (this);
    ::GtkCssSection *_peel_return = gtk_css_section_get_parent (_peel_this);
    return reinterpret_cast<CssSection *> (_peel_return);
  }

  peel_returns_nonnull
  const CssLocation *
  get_start_location () const noexcept
  {
    const ::GtkCssSection *_peel_this = reinterpret_cast<const ::GtkCssSection *> (this);
    const ::GtkCssLocation *_peel_return = gtk_css_section_get_start_location (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const CssLocation *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  print (GLib::String *string) const noexcept
  {
    const ::GtkCssSection *_peel_this = reinterpret_cast<const ::GtkCssSection *> (this);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    gtk_css_section_print (_peel_this, _peel_string);
  }

  /* ref bound as RefTraits */

  peel::String
  to_string () const noexcept
  {
    const ::GtkCssSection *_peel_this = reinterpret_cast<const ::GtkCssSection *> (this);
    char *_peel_return = gtk_css_section_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  /* unref bound as RefTraits */
}; /* record CssSection */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
