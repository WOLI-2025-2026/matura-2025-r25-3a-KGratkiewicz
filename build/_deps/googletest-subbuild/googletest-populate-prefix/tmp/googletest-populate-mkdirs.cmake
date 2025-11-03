# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-src"
  "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-build"
  "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-subbuild/googletest-populate-prefix"
  "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/workspaces/matura-2025-r25-3a-KGratkiewicz/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
