<?php
/**
 * @file
 * DruTACT theme implementation to format an HTML mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 * - $base_url: The base URL of the site
 * - $logo_url: The base URL of the site logo
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
    <style type="text/css">
      #main, #logo {
        margin: 10px auto 20px;
        width: 960px;
      }
      p {
        margin: 0px 0px 1.2em;
      }
    </style>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center">
      <div id="logo">
        <a href="<?php print $base_url ?>"><img src="<?php print $logo_url ?>" /></a>
      </div>
      <div id="main">
        <?php print $body ?>
      </div>
    </div>
  </body>
</html>
