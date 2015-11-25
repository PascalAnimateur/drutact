<?php
/**
 * @file
 * drutact_en.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function drutact_en_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array(
  'anonymous' => 'Anonymous',
  'date_views_day_format_without_year' => 'l, F j',
  'date_views_day_format_with_year' => 'l, F j, Y',
  'date_views_week_format_without_year' => 'F j',
  'date_views_week_format_with_year' => 'F j, Y',
  'user_mail_cancel_confirm_body' => 'Hello [user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account by clicking the following link:
<a href="[user:cancel-url]" class="btn">Cancel your account</a>

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name-raw] at [site:name]',
  'user_mail_password_reset_body' => 'Hello [user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in to the site by clicking the following link:
<a href="[user:one-time-login-url]/brief" class="btn">Reset your password</a>

This link can only be used once to log in to the site and will lead you to a page where you can reset your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Reset password for [user:name-raw] at [site:name]',
  'user_mail_register_admin_created_body' => 'Hello [user:name],

A site administrator at [site:name] has created an account for you. You may now activate your account by clicking the following link:
<a href="[user:one-time-login-url]/brief" class="btn">Activate your account</a>

This link can only be used once to log in and will lead you to a page where you can set your password.

In the future, you will be able to log in to the site using the following information:
Username: [user:name-raw] or [user:mail]
Password: (your password)

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => 'Hello [user:name],

Thank you for registering at [site:name]. You may now activate your account by clicking the following link:
<a href="[user:one-time-login-url]/brief" class="btn">Activate your account</a>

This link can only be used once to log in and will lead you to a page where you can set your password.

In the future, you will be able to log in to the site using the following information:
Username: [user:name-raw] or [user:mail]
Password: (your password)

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name-raw] at [site:name]',
  'user_mail_register_pending_approval_body' => 'Hello [user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.

--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name-raw] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => 'Hello [user:name],

Your account at [site:name] has been approved. You may now activate it by clicking the following link:
<a href="[user:one-time-login-url]/brief" class="btn">Activate your account</a>

This link can only be used once to log in and will lead you to a page where you can set your password.

In the future, you will be able to log in to the site using the following information:
Username: [user:name-raw] or [user:mail]
Password: (your password)

--  [site:name] team',
  'user_mail_status_activated_subject' => 'Account details for [user:name-raw] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
  'user_picture_guidelines' => '',
);

return $realm_variables;
}
