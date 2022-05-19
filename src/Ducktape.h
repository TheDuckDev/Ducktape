﻿/*
MIT License

Copyright (c) 2022 Ducktape

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

// Ducktape includes

const int DUCKTAPE_VERSION_MAJOR = 1;
const int DUCKTAPE_VERSION_MINOR = 0;
const int DUCKTAPE_VERSION_PATCH = 0;

#include <Components/Component.h>
#include <Components/Tag.h>
#include <Components/Transform.h>
#include <Components/Camera.h>
#include <Components/SpriteRenderer.h>
#include <Core/Macro.h>
#include <Core/Configuration.h>
#include <Core/Engine.h>
#include <Core/Entity.h>
#include <Core/Scene.h>
#include <Core/Window.h>
#include <Input/Input.h>
#include <Input/JoystickHat.h>
#include <Input/Key.h>
#include <Input/MouseMode.h>
#include <Renderer/Shader.h>
#include <Renderer/Texture.h>
#include <Renderer/Renderer.h>