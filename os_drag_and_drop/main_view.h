#pragma once


namespace simple_os_drag_and_drop
{


   class CLASS_DECL_APP_SIMPLE_OS_DRAG_AND_DROP main_view:
      virtual public ::user::split_view
   {
   public:


      // ::userex::top_view* m_ptopview;
      view *                  m_pview;


      main_view();
      virtual ~main_view();


      virtual void assert_valid() const override;

      virtual void dump(dump_context & dumpcontext) const override;

      void on_create_split_impact() override;

      virtual void update(::update * pupdate) override;

      virtual bool BaseOnControlEvent(::user::control_event * pevent);


      virtual void _001OnNcDraw(::draw2d::graphics_pointer & pgraphics) override;
      virtual void _001OnDraw(::draw2d::graphics_pointer & pgraphics) override;



   };


} // namespace simple_os_drag_and_drop





