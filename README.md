# Void

A game engine built with **C++**, supporting both **CMake** and **Premake**, with logging powered by **spdlog**.

---

##  Getting Started

### Build Instructions

You can build the project using either **CMake** or **Premake**.

---

### Option 1: CMake

1. Create a build directory from the root:

```bash
mkdir build
cd build
```

2. Configure the project:

```bash
cmake ..
```

3. Build the project:

```bash
cmake --build .
```

---

### Option 2: Premake (macOS / Make)

1. Generate build files:

```bash
premake5 gmake
```

2. Build the project:

```bash
make
```

---

##  Running the Application

From the root directory:

```bash
./bin/Debug/Sandbox
```

---

## Output Structure

After building, you should see:

```
bin/Debug/
├── Sandbox
└── libVoidEngine.dylib
```

---

## Dependencies

* C++17
* CMake (for CMake build system)
* Premake5 (for Premake build system)
* spdlog (logging library)

---

## Notes

* The engine (`VoidEngine`) is built as a **shared library (.dylib)**.
* The `Sandbox` project acts as the **client application**.
* Both CMake and Premake are supported for learning and comparison.
