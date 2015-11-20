/**
 * Extra CKEditor config for DruTACT WYSIWYG.
 */

CKEDITOR.editorConfig = function( config ) {
    // Disallow content with extra ACF rules.
    config.disallowedContent = 'p{margin-*}';
};
