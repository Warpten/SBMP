add_rules("plugin.vsxmake.autoupdate")
set_allowedplats("windows")
set_allowedmodes("debug", "releasedbg", "release", "coverage")
set_defaultmode("debug")
add_requires("libllvm", {configs = {clang = true}})

target("SBMP", function()
  set_kind("shared")
  set_languages("c++20")
  set_exceptions("cxx")
  set_encodings("utf-8")

  add_files("src/*.cpp")
  add_headerfiles("src/*.hpp")
  add_includedirs("src/**")

  add_packages("libllvm")
end)