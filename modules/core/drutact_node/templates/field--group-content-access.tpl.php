<?php if ($item = reset($items)): ?>
  <?php if ($item['#markup'] && $item['#markup'] == 2): ?>
    <div class="<?php print $classes; ?>" <?php print $attributes; ?>>
      <div class="field-label" <?php print $title_attributes; ?>><i class="fa fa-eye-slash" title="<?php print t('Private group content'); ?>"></i>&nbsp;</div>
    </div>
  <?php endif; ?>
<?php endif; ?>
