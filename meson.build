project('meson-gtest-test', 'cpp')

gtest_dep = dependency('gtest')

src_dir = include_directories('src')

src_files = files(
  'src/fibonacci.cpp'
)

test_files = files(
  'tests/test_fib.cpp',
  'tests/tests.cpp'
)

gtest_test = executable(
  'gtest-meson-test', test_files, src_files,
  include_directories: src_dir,
  dependencies : gtest_dep
)

test('Test', gtest_test)

