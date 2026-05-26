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
#include <peel/GLib/SList.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
struct Closure;
class Object;
class ParamSpec;
struct Value;
} /* namespace GObject */

namespace Gtk
{
class Builder;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Builder> ()
{
  return gtk_builder_get_type ();
}


namespace Gtk
{
class Builder : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Builder () = delete;
  Builder (const Builder &) = delete;
  Builder (Builder &&) = delete;
  Builder &
  operator = (const Builder &) = delete;
  Builder &
  operator = (Builder &&) = delete;
  ~Builder () = delete;
public:
  class CScope;
  class /* interface */ Scope;
  enum class ClosureFlags : std::underlying_type<::GtkBuilderClosureFlags>::type;
  enum class Error : std::underlying_type<::GtkBuilderError>::type;

  static peel::RefPtr<Builder>
  create () noexcept
  {
    ::GtkBuilder *_peel_return = gtk_builder_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Builder>::adopt_ref (reinterpret_cast<Builder *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Builder>
  create_from_file (const char *filename) noexcept
  {
    ::GtkBuilder *_peel_return = gtk_builder_new_from_file (filename);
    peel_assume (_peel_return);
    return peel::RefPtr<Builder>::adopt_ref (reinterpret_cast<Builder *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Builder>
  create_from_resource (const char *resource_path) noexcept
  {
    ::GtkBuilder *_peel_return = gtk_builder_new_from_resource (resource_path);
    peel_assume (_peel_return);
    return peel::RefPtr<Builder>::adopt_ref (reinterpret_cast<Builder *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Builder>
  create_from_string (const char *string, gssize length) noexcept
  {
    ::GtkBuilder *_peel_return = gtk_builder_new_from_string (string, length);
    peel_assume (_peel_return);
    return peel::RefPtr<Builder>::adopt_ref (reinterpret_cast<Builder *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  add_from_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_add_from_file (_peel_this, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  add_from_resource (const char *resource_path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_add_from_resource (_peel_this, resource_path, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  add_from_string (const char *buffer, gssize length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_add_from_string (_peel_this, buffer, length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  add_objects_from_file (const char *filename, peel::StrvRef object_ids, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    const char **_peel_object_ids = const_cast<const char **> (object_ids.data ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_add_objects_from_file (_peel_this, filename, _peel_object_ids, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  add_objects_from_resource (const char *resource_path, peel::StrvRef object_ids, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    const char **_peel_object_ids = const_cast<const char **> (object_ids.data ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_add_objects_from_resource (_peel_this, resource_path, _peel_object_ids, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  add_objects_from_string (const char *buffer, gssize length, peel::StrvRef object_ids, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    const char **_peel_object_ids = const_cast<const char **> (object_ids.data ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_add_objects_from_string (_peel_this, buffer, length, _peel_object_ids, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  GObject::Closure *
  create_closure (const char *function_name, Builder::ClosureFlags flags, GObject::Object *object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GtkBuilderClosureFlags _peel_flags = static_cast<::GtkBuilderClosureFlags> (flags);
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GError *_peel_error = nullptr;
    ::GClosure *_peel_return = gtk_builder_create_closure (_peel_this, function_name, _peel_flags, _peel_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<GObject::Closure *> (_peel_return);
  }

  peel_nonnull_args (2, 3)
  void
  expose_object (const char *name, GObject::Object *object) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    gtk_builder_expose_object (_peel_this, name, _peel_object);
  }

  peel_nonnull_args (2, 4)
  bool
  extend_with_template (GObject::Object *object, GObject::Type template_type, const char *buffer, gssize length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_extend_with_template (_peel_this, _peel_object, template_type, buffer, length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  GObject::Object *
  get_current_object () noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GObject *_peel_return = gtk_builder_get_current_object (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  peel_nonnull_args (2)
  GObject::Object *
  get_object (const char *name) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GObject *_peel_return = gtk_builder_get_object (_peel_this, name);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  GLib::SList<GObject::Object *>
  get_objects () noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    GSList *_peel_return = gtk_builder_get_objects (_peel_this);
    return GLib::SList<GObject::Object *>::adopt_list (_peel_return);
  }

  peel_returns_nonnull
  Builder::Scope *
  get_scope () noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GtkBuilderScope *_peel_return = gtk_builder_get_scope (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Builder::Scope *> (_peel_return);
  }

  const char *
  get_translation_domain () noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    return gtk_builder_get_translation_domain (_peel_this);
  }

  peel_nonnull_args (2)
  GObject::Type
  get_type_from_name (const char *type_name) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    return gtk_builder_get_type_from_name (_peel_this, type_name);
  }

  void
  set_current_object (GObject::Object *current_object) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GObject *_peel_current_object = reinterpret_cast<::GObject *> (current_object);
    gtk_builder_set_current_object (_peel_this, _peel_current_object);
  }

  void
  set_scope (Builder::Scope *scope) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GtkBuilderScope *_peel_scope = reinterpret_cast<::GtkBuilderScope *> (scope);
    gtk_builder_set_scope (_peel_this, _peel_scope);
  }

  void
  set_translation_domain (const char *domain) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    gtk_builder_set_translation_domain (_peel_this, domain);
  }

  peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  bool
  value_from_string (GObject::ParamSpec *pspec, const char *string, GObject::Value *value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_value_from_string (_peel_this, _peel_pspec, string, _peel_value, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_out (4) peel_nonnull_args (3, 4)
  bool
  value_from_string_type (GObject::Type type, const char *string, GObject::Value *value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilder *_peel_this = reinterpret_cast<::GtkBuilder *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_builder_value_from_string_type (_peel_this, type, string, _peel_value, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  static peel::Property<GObject::Object>
  prop_current_object ()
  {
    return peel::Property<GObject::Object> { "current-object" };
  }

  static peel::Property<Builder::Scope>
  prop_scope ()
  {
    return peel::Property<Builder::Scope> { "scope" };
  }

  static peel::Property<const char *>
  prop_translation_domain ()
  {
    return peel::Property<const char *> { "translation-domain" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Builder */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
