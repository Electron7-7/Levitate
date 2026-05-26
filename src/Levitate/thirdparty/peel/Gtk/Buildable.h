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
namespace GObject
{
class Object;
struct Value;
} /* namespace GObject */

namespace Gtk
{
class /* interface */ Buildable;
class Builder;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Buildable> ()
{
  return gtk_buildable_get_type ();
}


namespace Gtk
{
class /* interface */ Buildable : public GObject::Object
/* requires GObject::Object */
{
private:
  Buildable () = delete;
  Buildable (const Buildable &) = delete;
  Buildable (Buildable &&) = delete;

  Buildable &
  operator = (const Buildable &) = delete;
  Buildable &
  operator = (Buildable &&) = delete;

protected:
  ~Buildable () = default;

public:
  class /* record */ ParseContext;
  struct Parser;

  const char *
  get_buildable_id () noexcept
  {
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    return gtk_buildable_get_buildable_id (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_add_child (Builder *builder, GObject::Object *child, const char *type) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    _peel_iface->add_child (_peel_this, _peel_builder, _peel_child, type);
  }

  peel_nonnull_args (2, 3)
  void
  default_vfunc_add_child (Builder *builder, GObject::Object *child, const char *type) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    _peel_iface->add_child (_peel_this, _peel_builder, _peel_child, type);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3) peel_returns_nonnull
  GObject::Object *
  parent_vfunc_construct_child (Builder *builder, const char *name) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_return = _peel_iface->construct_child (_peel_this, _peel_builder, name);
    peel_assume (_peel_return);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  peel_nonnull_args (2, 3) peel_returns_nonnull
  GObject::Object *
  default_vfunc_construct_child (Builder *builder, const char *name) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_return = _peel_iface->construct_child (_peel_this, _peel_builder, name);
    peel_assume (_peel_return);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 4)
  void
  parent_vfunc_custom_finished (Builder *builder, GObject::Object *child, const char *tagname, void *data) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    _peel_iface->custom_finished (_peel_this, _peel_builder, _peel_child, tagname, data);
  }

  peel_nonnull_args (2, 4)
  void
  default_vfunc_custom_finished (Builder *builder, GObject::Object *child, const char *tagname, void *data) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    _peel_iface->custom_finished (_peel_this, _peel_builder, _peel_child, tagname, data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 4)
  void
  parent_vfunc_custom_tag_end (Builder *builder, GObject::Object *child, const char *tagname, void *data) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    _peel_iface->custom_tag_end (_peel_this, _peel_builder, _peel_child, tagname, data);
  }

  peel_nonnull_args (2, 4)
  void
  default_vfunc_custom_tag_end (Builder *builder, GObject::Object *child, const char *tagname, void *data) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    _peel_iface->custom_tag_end (_peel_this, _peel_builder, _peel_child, tagname, data);
  }

  template<typename DerivedClass>
  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 4, 5, 6)
  bool
  parent_vfunc_custom_tag_start (Builder *builder, GObject::Object *child, const char *tagname, Buildable::Parser *parser, void **data) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    ::GtkBuildableParser *_peel_parser = reinterpret_cast<::GtkBuildableParser *> (parser);
    gpointer *_peel_data = reinterpret_cast<gpointer *> (data);
    gboolean _peel_return = _peel_iface->custom_tag_start (_peel_this, _peel_builder, _peel_child, tagname, _peel_parser, _peel_data);
    return !!_peel_return;
  }

  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 4, 5, 6)
  bool
  default_vfunc_custom_tag_start (Builder *builder, GObject::Object *child, const char *tagname, Buildable::Parser *parser, void **data) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_child = reinterpret_cast<::GObject *> (child);
    ::GtkBuildableParser *_peel_parser = reinterpret_cast<::GtkBuildableParser *> (parser);
    gpointer *_peel_data = reinterpret_cast<gpointer *> (data);
    gboolean _peel_return = _peel_iface->custom_tag_start (_peel_this, _peel_builder, _peel_child, tagname, _peel_parser, _peel_data);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_id () noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    return _peel_iface->get_id (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_id () noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    return _peel_iface->get_id (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3) peel_returns_nonnull
  GObject::Object *
  parent_vfunc_get_internal_child (Builder *builder, const char *childname) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_return = _peel_iface->get_internal_child (_peel_this, _peel_builder, childname);
    peel_assume (_peel_return);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  peel_nonnull_args (2, 3) peel_returns_nonnull
  GObject::Object *
  default_vfunc_get_internal_child (Builder *builder, const char *childname) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GObject *_peel_return = _peel_iface->get_internal_child (_peel_this, _peel_builder, childname);
    peel_assume (_peel_return);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_parser_finished (Builder *builder) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    _peel_iface->parser_finished (_peel_this, _peel_builder);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_parser_finished (Builder *builder) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    _peel_iface->parser_finished (_peel_this, _peel_builder);
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_set_buildable_property (Builder *builder, const char *name, const GObject::Value *value) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    _peel_iface->set_buildable_property (_peel_this, _peel_builder, name, _peel_value);
  }

  peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  default_vfunc_set_buildable_property (Builder *builder, const char *name, const GObject::Value *value) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    _peel_iface->set_buildable_property (_peel_this, _peel_builder, name, _peel_value);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_set_id (const char *id) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Buildable> ())->peek_parent ());
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    _peel_iface->set_id (_peel_this, id);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_set_id (const char *id) noexcept
  {
    ::GtkBuildableIface *_peel_iface = reinterpret_cast<::GtkBuildableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Buildable> ()));
    ::GtkBuildable *_peel_this = reinterpret_cast<::GtkBuildable *> (this);
    _peel_iface->set_id (_peel_this, id);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkBuildableIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_add_child ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->add_child = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder, ::GObject *child, const char *type) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        GObject::Object *_peel_child = reinterpret_cast<GObject::Object *> (child);
        _peel_this->DerivedClass::vfunc_add_child (_peel_builder, _peel_child, type);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_construct_child ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->construct_child = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder, const char *name) -> ::GObject *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        GObject::Object *_peel_return = _peel_this->DerivedClass::vfunc_construct_child (_peel_builder, name);
        return reinterpret_cast<::GObject *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_custom_finished ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->custom_finished = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder, ::GObject *child, const char *tagname, gpointer data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        GObject::Object *_peel_child = reinterpret_cast<GObject::Object *> (child);
        _peel_this->DerivedClass::vfunc_custom_finished (_peel_builder, _peel_child, tagname, data);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_custom_tag_end ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->custom_tag_end = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder, ::GObject *child, const char *tagname, gpointer data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        GObject::Object *_peel_child = reinterpret_cast<GObject::Object *> (child);
        _peel_this->DerivedClass::vfunc_custom_tag_end (_peel_builder, _peel_child, tagname, data);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_custom_tag_start ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->custom_tag_start = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder, ::GObject *child, const char *tagname, ::GtkBuildableParser *parser, gpointer *data) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        GObject::Object *_peel_child = reinterpret_cast<GObject::Object *> (child);
        Buildable::Parser *_peel_parser = reinterpret_cast<Buildable::Parser *> (parser);
        bool _peel_return = _peel_this->DerivedClass::vfunc_custom_tag_start (_peel_builder, _peel_child, tagname, _peel_parser, data);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_id ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->get_id = +[] (::GtkBuildable *buildable) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        return _peel_this->DerivedClass::vfunc_get_id ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_internal_child ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->get_internal_child = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder, const char *childname) -> ::GObject *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        GObject::Object *_peel_return = _peel_this->DerivedClass::vfunc_get_internal_child (_peel_builder, childname);
        return reinterpret_cast<::GObject *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_parser_finished ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->parser_finished = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        _peel_this->DerivedClass::vfunc_parser_finished (_peel_builder);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_buildable_property ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->set_buildable_property = +[] (::GtkBuildable *buildable, ::GtkBuilder *builder, const char *name, const ::GValue *value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        const GObject::Value *_peel_value = reinterpret_cast<const GObject::Value *> (value);
        _peel_this->DerivedClass::vfunc_set_buildable_property (_peel_builder, name, _peel_value);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_id ()
    {
      ::GtkBuildableIface *klass = reinterpret_cast<::GtkBuildableIface *> (this);
      klass->set_id = +[] (::GtkBuildable *buildable, const char *id) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buildable);
        _peel_this->DerivedClass::vfunc_set_id (id);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkBuildableIface),
                 "Buildable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkBuildableIface),
                 "Buildable::Iface align mismatch");
}; /* interface Buildable */
static_assert (sizeof (Buildable) == sizeof (GObject::Object),
               "Buildable size mismatch");
static_assert (alignof (Buildable) == alignof (GObject::Object),
               "Buildable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
