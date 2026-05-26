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
namespace Gdk
{
class Display;
} /* namespace Gdk */

namespace Gtk
{
enum class FontRendering : std::underlying_type<::GtkFontRendering>::type;
enum class InterfaceColorScheme : std::underlying_type<::GtkInterfaceColorScheme>::type;
enum class InterfaceContrast : std::underlying_type<::GtkInterfaceContrast>::type;
enum class ReducedMotion : std::underlying_type<::GtkReducedMotion>::type;
class Settings;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Settings> ()
{
  return gtk_settings_get_type ();
}


namespace Gtk
{
class Settings : public StyleProvider
/* non-derivable */
/* extends GObject::Object */
/* implements StyleProvider */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Settings () = delete;
  Settings (const Settings &) = delete;
  Settings (Settings &&) = delete;
  Settings &
  operator = (const Settings &) = delete;
  Settings &
  operator = (Settings &&) = delete;
  ~Settings () = delete;
public:

  static Settings *
  get_default () noexcept
  {
    ::GtkSettings *_peel_return = gtk_settings_get_default ();
    return reinterpret_cast<Settings *> (_peel_return);
  }

  peel_nonnull_args (1) peel_returns_nonnull
  static Settings *
  get_for_display (Gdk::Display *display) noexcept
  {
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GtkSettings *_peel_return = gtk_settings_get_for_display (_peel_display);
    peel_assume (_peel_return);
    return reinterpret_cast<Settings *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  reset_property (const char *name) noexcept
  {
    ::GtkSettings *_peel_this = reinterpret_cast<::GtkSettings *> (this);
    gtk_settings_reset_property (_peel_this, name);
  }

  static peel::Property<bool>
  prop_gtk_alternative_button_order ()
  {
    return peel::Property<bool> { "gtk-alternative-button-order" };
  }

  static peel::Property<bool>
  prop_gtk_alternative_sort_arrows ()
  {
    return peel::Property<bool> { "gtk-alternative-sort-arrows" };
  }

  static peel::Property<bool>
  prop_gtk_application_prefer_dark_theme ()
  {
    return peel::Property<bool> { "gtk-application-prefer-dark-theme" };
  }

  static peel::Property<double>
  prop_gtk_cursor_aspect_ratio ()
  {
    return peel::Property<double> { "gtk-cursor-aspect-ratio" };
  }

  static peel::Property<bool>
  prop_gtk_cursor_blink ()
  {
    return peel::Property<bool> { "gtk-cursor-blink" };
  }

  static peel::Property<int>
  prop_gtk_cursor_blink_time ()
  {
    return peel::Property<int> { "gtk-cursor-blink-time" };
  }

  static peel::Property<int>
  prop_gtk_cursor_blink_timeout ()
  {
    return peel::Property<int> { "gtk-cursor-blink-timeout" };
  }

  static peel::Property<const char *>
  prop_gtk_cursor_theme_name ()
  {
    return peel::Property<const char *> { "gtk-cursor-theme-name" };
  }

  static peel::Property<int>
  prop_gtk_cursor_theme_size ()
  {
    return peel::Property<int> { "gtk-cursor-theme-size" };
  }

  static peel::Property<const char *>
  prop_gtk_decoration_layout ()
  {
    return peel::Property<const char *> { "gtk-decoration-layout" };
  }

  static peel::Property<bool>
  prop_gtk_dialogs_use_header ()
  {
    return peel::Property<bool> { "gtk-dialogs-use-header" };
  }

  static peel::Property<int>
  prop_gtk_dnd_drag_threshold ()
  {
    return peel::Property<int> { "gtk-dnd-drag-threshold" };
  }

  static peel::Property<int>
  prop_gtk_double_click_distance ()
  {
    return peel::Property<int> { "gtk-double-click-distance" };
  }

  static peel::Property<int>
  prop_gtk_double_click_time ()
  {
    return peel::Property<int> { "gtk-double-click-time" };
  }

  static peel::Property<bool>
  prop_gtk_enable_accels ()
  {
    return peel::Property<bool> { "gtk-enable-accels" };
  }

  static peel::Property<bool>
  prop_gtk_enable_animations ()
  {
    return peel::Property<bool> { "gtk-enable-animations" };
  }

  static peel::Property<bool>
  prop_gtk_enable_event_sounds ()
  {
    return peel::Property<bool> { "gtk-enable-event-sounds" };
  }

  static peel::Property<bool>
  prop_gtk_enable_input_feedback_sounds ()
  {
    return peel::Property<bool> { "gtk-enable-input-feedback-sounds" };
  }

  static peel::Property<bool>
  prop_gtk_enable_primary_paste ()
  {
    return peel::Property<bool> { "gtk-enable-primary-paste" };
  }

  static peel::Property<unsigned>
  prop_gtk_entry_password_hint_timeout ()
  {
    return peel::Property<unsigned> { "gtk-entry-password-hint-timeout" };
  }

  static peel::Property<bool>
  prop_gtk_entry_select_on_focus ()
  {
    return peel::Property<bool> { "gtk-entry-select-on-focus" };
  }

  static peel::Property<bool>
  prop_gtk_error_bell ()
  {
    return peel::Property<bool> { "gtk-error-bell" };
  }

  static peel::Property<const char *>
  prop_gtk_font_name ()
  {
    return peel::Property<const char *> { "gtk-font-name" };
  }

  static peel::Property<FontRendering>
  prop_gtk_font_rendering ()
  {
    return peel::Property<FontRendering> { "gtk-font-rendering" };
  }

  static peel::Property<unsigned>
  prop_gtk_fontconfig_timestamp ()
  {
    return peel::Property<unsigned> { "gtk-fontconfig-timestamp" };
  }

  static peel::Property<bool>
  prop_gtk_hint_font_metrics ()
  {
    return peel::Property<bool> { "gtk-hint-font-metrics" };
  }

  static peel::Property<const char *>
  prop_gtk_icon_theme_name ()
  {
    return peel::Property<const char *> { "gtk-icon-theme-name" };
  }

  static peel::Property<const char *>
  prop_gtk_im_module ()
  {
    return peel::Property<const char *> { "gtk-im-module" };
  }

  static peel::Property<InterfaceColorScheme>
  prop_gtk_interface_color_scheme ()
  {
    return peel::Property<InterfaceColorScheme> { "gtk-interface-color-scheme" };
  }

  static peel::Property<InterfaceContrast>
  prop_gtk_interface_contrast ()
  {
    return peel::Property<InterfaceContrast> { "gtk-interface-contrast" };
  }

  static peel::Property<ReducedMotion>
  prop_gtk_interface_reduced_motion ()
  {
    return peel::Property<ReducedMotion> { "gtk-interface-reduced-motion" };
  }

  static peel::Property<bool>
  prop_gtk_keynav_use_caret ()
  {
    return peel::Property<bool> { "gtk-keynav-use-caret" };
  }

  static peel::Property<bool>
  prop_gtk_label_select_on_focus ()
  {
    return peel::Property<bool> { "gtk-label-select-on-focus" };
  }

  static peel::Property<unsigned>
  prop_gtk_long_press_time ()
  {
    return peel::Property<unsigned> { "gtk-long-press-time" };
  }

  static peel::Property<bool>
  prop_gtk_overlay_scrolling ()
  {
    return peel::Property<bool> { "gtk-overlay-scrolling" };
  }

  static peel::Property<bool>
  prop_gtk_primary_button_warps_slider ()
  {
    return peel::Property<bool> { "gtk-primary-button-warps-slider" };
  }

  static peel::Property<const char *>
  prop_gtk_print_backends ()
  {
    return peel::Property<const char *> { "gtk-print-backends" };
  }

  static peel::Property<const char *>
  prop_gtk_print_preview_command ()
  {
    return peel::Property<const char *> { "gtk-print-preview-command" };
  }

  static peel::Property<bool>
  prop_gtk_recent_files_enabled ()
  {
    return peel::Property<bool> { "gtk-recent-files-enabled" };
  }

  static peel::Property<int>
  prop_gtk_recent_files_max_age ()
  {
    return peel::Property<int> { "gtk-recent-files-max-age" };
  }

  static peel::Property<bool>
  prop_gtk_shell_shows_app_menu ()
  {
    return peel::Property<bool> { "gtk-shell-shows-app-menu" };
  }

  static peel::Property<bool>
  prop_gtk_shell_shows_desktop ()
  {
    return peel::Property<bool> { "gtk-shell-shows-desktop" };
  }

  static peel::Property<bool>
  prop_gtk_shell_shows_menubar ()
  {
    return peel::Property<bool> { "gtk-shell-shows-menubar" };
  }

  static peel::Property<bool>
  prop_gtk_show_status_shapes ()
  {
    return peel::Property<bool> { "gtk-show-status-shapes" };
  }

  static peel::Property<const char *>
  prop_gtk_sound_theme_name ()
  {
    return peel::Property<const char *> { "gtk-sound-theme-name" };
  }

  static peel::Property<bool>
  prop_gtk_split_cursor ()
  {
    return peel::Property<bool> { "gtk-split-cursor" };
  }

  static peel::Property<const char *>
  prop_gtk_theme_name ()
  {
    return peel::Property<const char *> { "gtk-theme-name" };
  }

  static peel::Property<const char *>
  prop_gtk_titlebar_double_click ()
  {
    return peel::Property<const char *> { "gtk-titlebar-double-click" };
  }

  static peel::Property<const char *>
  prop_gtk_titlebar_middle_click ()
  {
    return peel::Property<const char *> { "gtk-titlebar-middle-click" };
  }

  static peel::Property<const char *>
  prop_gtk_titlebar_right_click ()
  {
    return peel::Property<const char *> { "gtk-titlebar-right-click" };
  }

  static peel::Property<int>
  prop_gtk_xft_antialias ()
  {
    return peel::Property<int> { "gtk-xft-antialias" };
  }

  static peel::Property<int>
  prop_gtk_xft_dpi ()
  {
    return peel::Property<int> { "gtk-xft-dpi" };
  }

  static peel::Property<int>
  prop_gtk_xft_hinting ()
  {
    return peel::Property<int> { "gtk-xft-hinting" };
  }

  static peel::Property<const char *>
  prop_gtk_xft_hintstyle ()
  {
    return peel::Property<const char *> { "gtk-xft-hintstyle" };
  }

  static peel::Property<const char *>
  prop_gtk_xft_rgba ()
  {
    return peel::Property<const char *> { "gtk-xft-rgba" };
  }
}; /* class Settings */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
