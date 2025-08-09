# [Mystic-Game-Engine](https://project.mystic-dev.eu.org/Mystic-Game-Engine)

A **Vulkan** Based Game Engine written in **C++**.

![ScreenShot](https://raw.githubusercontent.com/mystic-devloper/Mystic-Game-Engine/refs/heads/main/screenshot.jpeg)

## 🌟 About Mystic Game Engine
The **Mystic Game Engine** (MGE for short) is a modern, high-performance
engine designed for building games. Built from the ground up using **C++**
and the latest **Vulkan** graphics API, it leverages low-level access to 
hardware for maximum performance and efficiency. 

## 💡 Features
* **Vulkan Graphics API**: Utilizes Vulkan for explicit control over rendering, 
multi-threaded command buffer generation, and cross-platform compatibility.

* **GLFW**: Utilizes GLFW for cross-compatible window management and user input
gathering.

* **Modern C++**: Written with C++20 standard for clean, efficient and maintainable
codebase.

* **Custom IO**: Utilizes a custom IO built for fast data input and output.

* **Custom Memory Management**: Utilizes custom memory management for fast memory and low
fragmentation.

* **Quality Audio**: Utilizes miniaudio for audio playback, supporting vast number of formats,
(including, mp3, flac, wav and, midi).

* **Image and Texture**: Utilizes custom Image backend built upon STB project for high quality
images and textures, with features like gamma correction, color correction and image compression.
With support for a vast number of formats (including, .png, .jpeg, .gif and, .svg).

* **Fast and Reliable Math**: Utilized GLM the de facto math library for any graphics program.

* **Model Support**: Supports a many major model formats (including, .obj, .fbx and, .gltf).

* **Modular Architecture**: The engine is designed with a modular approach,
allowing developers to easily swap out or integrate different systems
(e.g., physics, audio) without major refactoring.

* **Cross Platform**: Engineered to run on multiple platforms, (i.e., Windows, Linux and MacOS).

## ✨ The Why Behind The Project
This project is created by me, as a solo developer to push my knowledge of Graphics Software
to its limit. So, it can have some minor to major bugs.

## 🚀 Getting Started
To build and run the Mystic Game Engine, you will need the following prerequisites:
* **C++ Compiler**: A C++ Compiler that supports C++17/20 or later (e.g., GCC, MSVC, Clang).
* **CMake**: CMake Version 3.21 or higher.
* **GLFW Library**: Necessary for window management and user input.
* **Vulkan SDK**: Necessary for render pipeline and rendering logic.

## ⚙️ Building from Source
1. Clone the Repository
```bash
git clone https://github.com/mystic-devloper/Mystic-Game-Engine.git
cd Mystic-Game-Engine
```
2. Generate Project File with CMake
```bash
cmake -S . -B build -G "[Your Build System]"
```

3. Build the Project
```bash
cmake --build build
```
After a successful build, you would see:
1. Some Games in build/bin
2. Game Engine's Library (libMGE.a for static and libMGE.so for dynamic)

## 🤝 Contributing
MGE is not a full fledged Game Engine, but still I welcome every contribution
from everyone, because it is the backbone of our open-source community.
If you are interested in helping, look at `CONTRIBUTING.md` for guidelines.

## 📜 License
MGE is dual licensed under the MIT and GNU Public License v2 or later. See `LICENSE` for more details.

MGE uses open-source third which are under:
1.  {fmt}  - Under MIT License
2.  scnlib - Under Apache, version 2.0 License
3.  GLFW   - Under zlib/libpng License
4.  GLM    - Under MIT License
5.  STB Libs  - Under dual public domain and MIT Licenses
6.  miniaudio - Under dual public domain and MIT No Attribute Licenses
7.  ASSIMP    - Under BSD 3-clause License
8.  ImGUI     - Under MIT License
9.  Vulkan-Headers - Under MIT or Apache, version 2.0 License
10. Vulkan-Loader  - Under Apache, version 2.0 License
12. Vulkan-Tools   - Under Apache, version 2.0 License
13. Vulkan-ValidationLayers - Under Apache, version 2.0 License
14. SPIR-V Tools - Under Apache, version 2 License
15. glslang      - Under Many Licenses, primary MIT and Apache, version 2.0 Licenses
16. Vulkan-Hpp   - Under Apache License, version 2.0
17. Vk-Bootstrap - Under MIT License
18. VMA          - Under MIT License

For detailed licenses, see `Licenses` folder.
