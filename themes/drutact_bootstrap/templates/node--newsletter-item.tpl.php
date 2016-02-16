<?php
/**
 * Node template for the Newsletter item view mode.
 */
?>
<div class="media">
  <div class="media-left">
    <?php if (isset($content['field_image'])): ?>
      <?php print render($content['field_image']) ?>
    <?php endif; ?>
  </div>
  <div class="media-body">
    <h4 class="media-heading"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h4>
    <?php print render($content['body']) ?>
    <?php print render($content['links']) ?>
  </div>
</div>
