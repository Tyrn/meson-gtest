## A library built with meson and tested with gtest

### Build and run

- Do it once:
```
$ meson setup build
```
- On a change (compile not strictly necessary):
```
$ meson compile -C build
$ meson test -vC build
```
