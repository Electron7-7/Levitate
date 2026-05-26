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
#include <peel/Gtk/Window.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* interface */ Paintable;
} /* namespace Gdk */

namespace Gtk
{
class AboutDialog;
enum class License : std::underlying_type<::GtkLicense>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AboutDialog> ()
{
  return gtk_about_dialog_get_type ();
}


namespace Gtk
{
class AboutDialog : public Window
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Window::get_default_icon_name;
  using Window::get_toplevels;
  using Window::list_toplevels;
  using Window::set_auto_startup_notification;
  using Window::set_default_icon_name;
  using Window::set_interactive_debugging;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AboutDialog () = delete;
  AboutDialog (const AboutDialog &) = delete;
  AboutDialog (AboutDialog &&) = delete;
  AboutDialog &
  operator = (const AboutDialog &) = delete;
  AboutDialog &
  operator = (AboutDialog &&) = delete;
  ~AboutDialog () = delete;
public:

  peel_returns_nonnull
  static AboutDialog *
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_about_dialog_new ();
    peel_assume (_peel_return);
    return reinterpret_cast<AboutDialog *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  add_credit_section (const char *section_name, peel::StrvRef people) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    const char **_peel_people = const_cast<const char **> (people.data ());
    gtk_about_dialog_add_credit_section (_peel_this, section_name, _peel_people);
  }

  peel::StrvRef
  get_artists () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    const char* const *_peel_return = gtk_about_dialog_get_artists (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  peel::StrvRef
  get_authors () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    const char* const *_peel_return = gtk_about_dialog_get_authors (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  const char *
  get_comments () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_comments (_peel_this);
  }

  const char *
  get_copyright () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_copyright (_peel_this);
  }

  peel::StrvRef
  get_documenters () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    const char* const *_peel_return = gtk_about_dialog_get_documenters (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  const char *
  get_license () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_license (_peel_this);
  }

  License
  get_license_type () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    ::GtkLicense _peel_return = gtk_about_dialog_get_license_type (_peel_this);
    return static_cast<License> (_peel_return);
  }

  Gdk::Paintable *
  get_logo () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    ::GdkPaintable *_peel_return = gtk_about_dialog_get_logo (_peel_this);
    return reinterpret_cast<Gdk::Paintable *> (_peel_return);
  }

  const char *
  get_logo_icon_name () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_logo_icon_name (_peel_this);
  }

  const char *
  get_program_name () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_program_name (_peel_this);
  }

  const char *
  get_system_information () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_system_information (_peel_this);
  }

  const char *
  get_translator_credits () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_translator_credits (_peel_this);
  }

  const char *
  get_version () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_version (_peel_this);
  }

  const char *
  get_website () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_website (_peel_this);
  }

  const char *
  get_website_label () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    return gtk_about_dialog_get_website_label (_peel_this);
  }

  bool
  get_wrap_license () noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gboolean _peel_return = gtk_about_dialog_get_wrap_license (_peel_this);
    return !!_peel_return;
  }

  void
  set_artists (peel::StrvRef artists) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    const char **_peel_artists = const_cast<const char **> (artists.data ());
    gtk_about_dialog_set_artists (_peel_this, _peel_artists);
  }

  void
  set_authors (peel::StrvRef authors) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    const char **_peel_authors = const_cast<const char **> (authors.data ());
    gtk_about_dialog_set_authors (_peel_this, _peel_authors);
  }

  void
  set_comments (const char *comments) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_comments (_peel_this, comments);
  }

  void
  set_copyright (const char *copyright) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_copyright (_peel_this, copyright);
  }

  void
  set_documenters (peel::StrvRef documenters) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    const char **_peel_documenters = const_cast<const char **> (documenters.data ());
    gtk_about_dialog_set_documenters (_peel_this, _peel_documenters);
  }

  void
  set_license (const char *license) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_license (_peel_this, license);
  }

  void
  set_license_type (License license_type) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    ::GtkLicense _peel_license_type = static_cast<::GtkLicense> (license_type);
    gtk_about_dialog_set_license_type (_peel_this, _peel_license_type);
  }

  void
  set_logo (Gdk::Paintable *logo) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    ::GdkPaintable *_peel_logo = reinterpret_cast<::GdkPaintable *> (logo);
    gtk_about_dialog_set_logo (_peel_this, _peel_logo);
  }

  void
  set_logo_icon_name (const char *icon_name) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_logo_icon_name (_peel_this, icon_name);
  }

  void
  set_program_name (const char *name) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_program_name (_peel_this, name);
  }

  void
  set_system_information (const char *system_information) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_system_information (_peel_this, system_information);
  }

  void
  set_translator_credits (const char *translator_credits) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_translator_credits (_peel_this, translator_credits);
  }

  void
  set_version (const char *version) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_version (_peel_this, version);
  }

  void
  set_website (const char *website) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_website (_peel_this, website);
  }

  peel_nonnull_args (2)
  void
  set_website_label (const char *website_label) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gtk_about_dialog_set_website_label (_peel_this, website_label);
  }

  void
  set_wrap_license (bool wrap_license) noexcept
  {
    ::GtkAboutDialog *_peel_this = reinterpret_cast<::GtkAboutDialog *> (this);
    gboolean _peel_wrap_license = static_cast<gboolean> (wrap_license);
    gtk_about_dialog_set_wrap_license (_peel_this, _peel_wrap_license);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_link (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AboutDialog, bool (const char *)>::_peel_connect_by_name (this, "activate-link", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_link (HandlerObject *object, bool (HandlerObject::*handler_method) (AboutDialog *, const char *), bool after = false) noexcept
  {
    return Signal<AboutDialog, bool (const char *)>::_peel_connect_by_name (this, "activate-link", object, handler_method, after);
  }

  static peel::Property<peel::Strv>
  prop_artists ()
  {
    return peel::Property<peel::Strv> { "artists" };
  }

  static peel::Property<peel::Strv>
  prop_authors ()
  {
    return peel::Property<peel::Strv> { "authors" };
  }

  static peel::Property<const char *>
  prop_comments ()
  {
    return peel::Property<const char *> { "comments" };
  }

  static peel::Property<const char *>
  prop_copyright ()
  {
    return peel::Property<const char *> { "copyright" };
  }

  static peel::Property<peel::Strv>
  prop_documenters ()
  {
    return peel::Property<peel::Strv> { "documenters" };
  }

  static peel::Property<const char *>
  prop_license ()
  {
    return peel::Property<const char *> { "license" };
  }

  static peel::Property<License>
  prop_license_type ()
  {
    return peel::Property<License> { "license-type" };
  }

  static peel::Property<Gdk::Paintable>
  prop_logo ()
  {
    return peel::Property<Gdk::Paintable> { "logo" };
  }

  static peel::Property<const char *>
  prop_logo_icon_name ()
  {
    return peel::Property<const char *> { "logo-icon-name" };
  }

  static peel::Property<const char *>
  prop_program_name ()
  {
    return peel::Property<const char *> { "program-name" };
  }

  static peel::Property<const char *>
  prop_system_information ()
  {
    return peel::Property<const char *> { "system-information" };
  }

  static peel::Property<const char *>
  prop_translator_credits ()
  {
    return peel::Property<const char *> { "translator-credits" };
  }

  static peel::Property<const char *>
  prop_version ()
  {
    return peel::Property<const char *> { "version" };
  }

  static peel::Property<const char *>
  prop_website ()
  {
    return peel::Property<const char *> { "website" };
  }

  static peel::Property<const char *>
  prop_website_label ()
  {
    return peel::Property<const char *> { "website-label" };
  }

  static peel::Property<bool>
  prop_wrap_license ()
  {
    return peel::Property<bool> { "wrap-license" };
  }
}; /* class AboutDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
