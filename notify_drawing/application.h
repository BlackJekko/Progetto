﻿#pragma once



namespace notify_drawing
{


   class CLASS_DECL_APP_SIMPLE_NOTIFY_DRAWING application :
      virtual public ::simple_drawing::application
   {
   public:


      ::user::document *                     m_pdocMenu;
      ::user::plain_edit_view *              m_prollfps;
      ::user::single_document_template *     m_ptemplateNotifyDrawingMain;


      application();
      virtual ~application();

      virtual string preferred_experience() override;
      virtual ::estatus init_instance() override;
      virtual void term_application() override;

      virtual void on_request(::create * pcreate) override;

#ifdef DEBUG
      virtual int64_t add_ref(OBJ_REF_DBG_PARAMS) override;
      virtual int64_t dec_ref(OBJ_REF_DBG_PARAMS) override;
#endif

      virtual __pointer(simple_drawing::view) create_simple_drawing_view(::user::impact* pimpactParent, ::user::impact_data* pimpactdata) override;

   };


} // namespace notify_drawing



