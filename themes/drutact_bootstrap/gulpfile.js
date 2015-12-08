var gulp       = require('gulp');
var gutil      = require('gulp-util');
var less       = require('gulp-less');
var watch      = require('gulp-watch');
var livereload = require('gulp-livereload');
var sourcemaps = require('gulp-sourcemaps');

gulp.task('less', function () {
    gulp.src('less/style.less')
        .pipe(sourcemaps.init())
        .pipe(less().on('error', gutil.log))
        .pipe(sourcemaps.write())
        .pipe(gulp.dest('css'))
        .pipe(livereload());
});

gulp.task('watch', function() {
    livereload.listen();
    gulp.watch('less/*.less', ['less']);
});
