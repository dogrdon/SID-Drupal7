<?php
/**
 * @file
 * organizations_form.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function organizations_form_node_info() {
  $items = array(
    'organizations_form' => array(
      'name' => t('Organizations Form'),
      'base' => 'node_content',
      'description' => t('This is the webform for organizations to fill out in application of Semester in Detroit Student Interns'),
      'has_title' => '1',
      'title_label' => t('Name of Organization'),
      'help' => t('•	Provide complete answers to each question, but please do not provide excessive detail or explanation.  The length of your proposal should be 5 pages or less (single-spaced, 12pt. font.)  

•	Remember that student interns will work a total of 208 hours for your organization (16 hours per week over 13 weeks.)  This is the equivalent of 5 weeks of full-time work.  Design projects that are realistic within these time constraints.  

•	Most undergraduate college students today are not qualified to develop a professional website.  They may, however, be familiar with Facebook, Twitter, and other social networking tools.  

•	While many U-M undergraduates are good writers, most do not know how to write grants.  In a few cases, students may be able to provide assistance with this work; but they are not able to lead the design and submission of grant proposals.  

•	In our experience, the most successful projects have these main characteristics:

         Interns can take some ownership – while still being actively supported – of a substantive component of a larger project;
         Interns are intellectually challenged while also sharing appropriately in related menial tasks;
         Interns gain some closure and finality as the semester ends.       
'),
    ),
  );
  return $items;
}