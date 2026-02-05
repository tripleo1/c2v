This project is a C-to-V translator.

Always run commands from the top-level repository folder.

# Instruction Priority
If instructions conflict, follow them in this order:
1. System/developer/user instructions from the active session.
2. This `AGENTS.md` file.

# Quick Start
1. Build: `v .`
2. Run one C test file: `v run tests/run_tests.vsh tests/ptr_deref.c`
3. Run all tests: `v run tests/run_tests.vsh`
4. Format source: `v fmt -w src/`

# Expected Success Signals
- Build: `v .` completes without compiler errors.
- Single test: the selected test file reports pass/success and no runtime errors.
- Full test run: all tests complete with no failing test cases.
- Formatting: `v fmt -w src/` completes without format errors.

# Do Not
- Do not run project commands from subdirectories; use the repo root only.
- Do not run single-file tests with non-`tests/*.c` paths.
- Do not format outside `src/` unless explicitly requested.

# Troubleshooting
- Wrong folder: if commands fail unexpectedly, run `pwd` and ensure you are in the repo root (`.../.vmodules/c2v`).
- Build command not found: verify V is installed and available with `v version`.
- Single-test path issues: pass a `.c` file under `tests/`, for example `tests/ptr_deref.c`.
- Formatting scope: format only translator sources with `v fmt -w src/`.

# Pre-PR Checklist
1. `v .`
2. `v run tests/run_tests.vsh tests/ptr_deref.c`
3. `v run tests/run_tests.vsh`
4. `v fmt -w src/`
