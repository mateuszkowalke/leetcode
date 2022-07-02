# Leetcode local setup

Simple setup for leetcode challenges. Makes it faster to run and test code, plus enables to use proper code editor :)

### Testing and debugging

This setup uses cmake as its build tool. Quick commands to build and run your solution:

- setup the toolchain:

```bash
cmake -S . -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -B build
```

- build:

```bash
cmake --build build
```

- run:

```bash
./build/task_test
```

This setup adds debug symbols by default. To build in release mode change appropriate option in CMakeLists.txt and recreate toolchain. 
