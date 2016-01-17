<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label" <?php print $title_attributes; ?>><i class="fa fa-globe" title="<?php print t('Web link(s)'); ?>"></i>&nbsp;</div>
  <?php endif; ?>
  <div class="field-items" <?php print $content_attributes; ?>>
    <?php if ($element['#view_mode'] == 'teaser'): ?>
      <div class="field-item"><?php print count($items); ?></div>
    <?php else: ?>
      <?php foreach ($items as $delta => $item): ?>
        <div class="field-item" <?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
      <?php endforeach; ?>
    <?php endif ?>
  </div>
</div>
