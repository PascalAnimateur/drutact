<?php
/**
 * Node template for the Newsletter item view mode.
 */
?>

<div class="clearfix">
  <?php if (isset($content['field_image'])): ?>
    <div class="newsletter-item-image" style="float: left; margin: 10px;">
      <?php print render($content['field_image']) ?>
    </div>
  <?php endif; ?>
  <h2 class="newsletter-item-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php print render($content['body']) ?>
  <?php print render($content['links']) ?>
</div>
