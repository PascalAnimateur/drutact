<?php
/**
 * @file
 * drutact_fr.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function drutact_fr_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['fr'] = array(
  'anonymous' => 'Anonyme',
  'date_views_day_format_without_year' => 'l, j F',
  'date_views_day_format_with_year' => 'l, j F, Y',
  'date_views_week_format_without_year' => 'j F',
  'date_views_week_format_with_year' => 'j F, Y',
  'maintenance_mode_message' => 'Le site est en cours de maintenance. Nous serons de retour très bientôt. Merci de votre patience.',
  'simplenews_confirm_combined_body' => 'Nous avons reçu une demande pour les changements d\'abonnement suivants pour le courriel [simplenews-subscriber:mail] sur le site [site:url]:

[changes-list]

Afin de confirmer ces changements, veuillez utiliser le lien ci-dessous.

[simplenews-subscriber:combined-url]',
  'simplenews_confirm_combined_body_unchanged' => 'Nous avons reçu une demande pour les changements d\'abonnement suivants pour le courriel [simplenews-subscriber:mail] sur le site [site:url]:

[changes-list]

Aucune confirmation n\'est requise puisque les changements demandés correspondent à l\'état actuel d\'abonnement.',
  'simplenews_confirm_combined_line_subscribe_subscribed' => 'Déjà abonné(e) à [simplenews-newsletter:name]',
  'simplenews_confirm_combined_line_subscribe_unsubscribed' => 'Abonnement à [simplenews-newsletter:name]',
  'simplenews_confirm_combined_line_unsubscribe_subscribed' => 'Désabonnement de [simplenews-newsletter:name]',
  'simplenews_confirm_combined_line_unsubscribe_unsubscribed' => 'Déjà désabonné(e) de [simplenews-newsletter:name]',
  'simplenews_confirm_combined_subject' => 'Confirmation de [site:name]',
  'simplenews_confirm_subscribe_subject' => 'Confirmation pour [simplenews-newsletter:name] depuis [site:name]',
  'simplenews_confirm_subscribe_subscribed' => 'Nous avons reçu une demande d\'abonnement à l\'infolettre [simplenews-newsletter:name] sur le site [site:name] à l\'adresse [site:url] pour le courriel [simplenews-subscriber:mail]. Toutefois, ce courriel est déjà abonnée à l\'infolettre. Si vous désirez vous désabonner, veuillez visiter le site: [site:url]',
  'simplenews_confirm_subscribe_unsubscribed' => 'Nous avons reçu une demande d\'abonnement à l\'infolettre [simplenews-newsletter:name] sur le site [site:name] à l\'adresse [site:url] pour le courriel [simplenews-subscriber:mail]. Afin de confirmer l\'abonnement, veuillez utiliser le lien ci-dessous:

[simplenews-subscriber:subscribe-url]',
  'simplenews_confirm_unsubscribe_subscribed' => 'Nous avons reçu une demande de désabonnement à l\'infolettre [simplenews-newsletter:name] sur le site [site:name] à l\'adresse [site:url] pour le courriel [simplenews-subscriber:mail]. Afin de confirmer le désabonnement, veuillez utiliser le lien ci-dessous:

[simplenews-subscriber:unsubscribe-url]',
  'simplenews_confirm_unsubscribe_unsubscribed' => 'Nous avons reçu une demande de désabonnement à l\'infolettre [simplenews-newsletter:name] sur le site [site:name] à l\'adresse [site:url] pour le courriel [simplenews-subscriber:mail]. Toutefois, ce courriel n\'est pas abonné à l\'infolettre. Si vous désirez vous abonner, veuillez visiter le site: [site:url]',
  'user_mail_cancel_confirm_body' => 'Bonjour [user:name],

Une demande d\'annulation de votre compte a été faite sur le site [site:name].

Vous pouvez confirmer l\'annulation de votre compte sur [site:url-brief] en suivant ce lien :
<a href="[user:cancel-url]" class="btn">Annuler votre compte</a>


REMARQUE : L\'annulation de votre compte n\'est pas réversible.

Ce lien expirera après un jour et rien ne se passera s\'il n\'est pas utilisé.

--  L\'équipe [site:name]',
  'user_mail_cancel_confirm_subject' => 'Demande d\'annulation du compte [user:name-raw] sur le site [site:name]',
  'user_mail_password_reset_body' => 'Bonjour [user:name],

Une demande de réinitialisation du mot de passe a été faite pour votre compte sur le site [site:name].

Vous pouvez désormais vous connecter au site en suivant ce lien :
<a href="[user:one-time-login-url]/brief" class="btn">Réinitialiser votre mot de passe</a>

Ce lien de connexion au site ne peut être utilisé qu\'une seule fois et vous conduira à une page où vous pourrez réinitialiser votre mot de passe.

--  L\'équipe [site:name]',
  'user_mail_password_reset_subject' => 'Réinitialisation du mot de passe pour [user:name-raw] sur le site [site:name]',
  'user_mail_register_admin_created_body' => 'Bonjour [user:name],

Un administrateur du site [site:name] vous a créé un compte. Vous pouvez désormais vous connecter au site en suivant ce lien :
<a href="[user:one-time-login-url]/brief" class="btn">Initialiser votre mot de passe</a>

Ce lien de connexion au site ne peut être utilisé qu\'une seule fois et vous conduira à une page où vous pourrez initialiser votre mot de passe.

Après avoir initialisé votre mot de passe, vous pourrez vous connecter à l\'adresse [site:login-url] à l\'aide des informations suivantes:
Nom d\'utilisateur: [user:name-raw] ou [user:mail]
Mot de passe: (votre mot de passe)

--  L\'équipe [site:name]',
  'user_mail_register_admin_created_subject' => 'Un administrateur vous a créé un compte sur [site:name]',
  'user_mail_register_no_approval_required_body' => 'Bonjour [user:name],

Merci de vous être inscrit sur le site [site:name]. Vous pouvez désormais vous connecter au site en suivant ce lien :
<a href="[user:one-time-login-url]/brief" class="btn">Initialiser votre mot de passe</a>

Ce lien de connexion au site ne peut être utilisé qu\'une seule fois et vous conduira à une page où vous pourrez initialiser votre mot de passe.

Après avoir initialisé votre mot de passe, vous pourrez vous connecter à l\'adresse [site:login-url] à l\'aide des informations suivantes:
Nom d\'utilisateur: [user:name-raw] ou [user:mail]
Mot de passe: (votre mot de passe)

--  L\'équipe [site:name]',
  'user_mail_register_no_approval_required_subject' => 'Détails du compte [user:name-raw] sur le site [site:name]',
  'user_mail_register_pending_approval_body' => 'Bonjour [user:name],

Merci pour votre inscription sur le site [site:name]. Votre demande de compte est actuellement en attente d\'approbation. Quand elle aura été acceptée, vous recevrez un autre courriel contenant les instructions pour vous connecter une première fois au site afin de paramétrer votre mot de passe.

--  L\'équipe [site:name]',
  'user_mail_register_pending_approval_subject' => 'Détails du compte [user:name-raw] sur [site:name] (en attente d\'approbation)',
  'user_mail_status_activated_body' => 'Bonjour [user:name],

Votre compte sur le site [site:name] a été activé. Vous pouvez désormais vous connecter au site en suivant ce lien :
<a href="[user:one-time-login-url]/brief" class="btn">Initialiser votre mot de passe</a>

Ce lien de connexion au site ne peut être utilisé qu\'une seule fois et vous conduira à une page où vous pourrez initialiser votre mot de passe.

Après avoir initialisé votre mot de passe, vous pourrez vous connecter à l\'adresse [site:login-url] à l\'aide des informations suivantes:
Nom d\'utilisateur: [user:name-raw] ou [user:mail]
Mot de passe: (votre mot de passe)

--  L\'équipe [site:name]',
  'user_mail_status_activated_subject' => 'Détails du compte [user:name-raw] sur le site [site:name] (approuvé)',
  'user_mail_status_blocked_body' => 'Hello [user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_subject' => 'Account details for [user:name-raw] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => 'Hello [user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_subject' => 'Account details for [user:name-raw] at [site:name] (canceled)',
  'user_picture_guidelines' => '',
);

return $realm_variables;
}
