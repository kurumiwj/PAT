# Copilot instructions for this repository

## Rules

- Do not edit any source file unless the user has explicitly granted permission to modify files.

## Build, test, and lint commands

- The only formal build/test automation in this repo is the Maven module in `Basic\Java`.
- Build that module: `cd Basic\Java && mvn package`
- Run its tests: `cd Basic\Java && mvn test`
- Run a single Maven test class when tests are added: `cd Basic\Java && mvn -Dtest=PAT_B1001Test test`
- No dedicated repo-level lint command or lint configuration is checked in for the JavaScript, Python, C, or C++ solution folders.

## High-level architecture

- This repository is a collection of PAT problem solutions, not a single application. The top-level split is by exam tier: `Basic\` and `Advanced\`.
- Each tier is then split by implementation language. `Basic\` contains `C\`, `JS\`, `Java\`, and `Python\`; `Advanced\` contains `C++\` and `Python\`.
- Almost every source file is a standalone solution for one PAT problem. Files read from standard input, write to standard output, and do not depend on shared project code from other problems.
- `Basic\Java` is the only folder with project structure and tooling. Its solutions live in `src\main\java\com\kurumi\pat\`, and `src\test\` exists but is currently empty.
- The rest of the repository is organized as flat per-problem source files rather than reusable packages or libraries. When changing a solution, work within that single file unless the task explicitly spans multiple language implementations of the same problem.

## Key conventions

- Keep the filename-to-problem mapping direct. Java uses `PAT_B####.java` class files for basic-level problems; the scripting and native-language folders use numeric filenames such as `1001.py`, `1001.js`, `1001.c`, or `1152.cpp`.
- Treat files with suffixes like `_2` or other extra descriptors as alternate solutions to the same PAT problem. Preserve them as separate variants instead of folding them into one canonical file.
- In `Basic\Java`, every solution is a single public class in `package com.kurumi.pat` with its own `main` entry point.
- In `Basic\Python`, the common pattern is helper functions plus `main()` guarded by `if __name__ == "__main__":`.
- In `Basic\JS`, the common pattern is a Node.js `readline` async wrapper around a single-file solution.
- In the C and C++ folders, procedural single-file solutions with global arrays, contest-style constants, and direct `scanf`/`printf` or mixed stdio/iosteam usage are normal for performance-focused implementations.
- Many C and C++ solutions include `system("pause")` for local Windows console runs. Preserve existing behavior in touched files unless the task explicitly asks to change runtime behavior.
