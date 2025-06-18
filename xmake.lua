add_rules("plugin.vsxmake.autoupdate")
-- set_allowedplats("windows")
set_allowedmodes("debug", "releasedbg", "release", "coverage")
set_defaultmode("debug")
add_requires("libllvm", { configs = { clang = true } })

-- Global rules
set_languages("c++20")
set_exceptions("cxx")
set_encodings("utf-8")

target("SBMP", function()
  set_kind("shared")

  add_files("src/sbmp/**.cpp")
  add_headerfiles("src/sbmp/**.hpp")
  add_includedirs("src/sbmp")
end)

target("Generator", function()
  set_kind("binary")
  add_files("src/generator/*.cpp")
  add_headerfiles("src/generator/**.hpp")
  add_includedirs("src/generator")

  add_packages("libllvm")
end)