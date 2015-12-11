api = 2
core = 7.x

; Disqus
projects[disqus][type] = module
projects[disqus][patch][2505743] = https://www.drupal.org/files/issues/disqus-fires_on_every_page-2505743-31.patch

; Disqus library
libraries[disqusapi][download][type] = file
libraries[disqusapi][download][url] = https://github.com/disqus/disqus-php/archive/master.zip
libraries[disqusapi][download][subtree] = disqus-php-master/disqusapi
