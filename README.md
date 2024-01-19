# GDSC Algorithms lecture & practice materials

Here will be lecture & practice materials for **GDSC Algorithms** course (Fall 2023- Spring 2024) at Constructor University Bremen.

## Want to contribute?

Then fulfill `% todo: ...` comment in **latex code**, and/or found a mistake? Follow the instructions below to local setup.

## Setup locally
- [Install MiKTeX](https://miktex.org/download) (latex compiling toolchain).
- On Windows you need to install **perl** (on Mac & Unix it should already be present), you can install [strawberry perl](https://strawberryperl.com/).
- Install [VS Code](https://code.visualstudio.com/download) (I prefer it due to vast number of plugins) and plugin [Latex Workshop](https://marketplace.visualstudio.com/items?itemName=James-Yu.latex-workshop).
- Follow the [link (YouTube video)](https://youtu.be/4lyHIQl4VM8) to set up MiKTeX with the installed plugin.
- To compile the project run `build.py` file via `python build.py` command executed in a CLI.
- Also you need to have [python](https://www.python.org/downloads/) installed.

## How to contribute
- Clone the project: `git clone https://github.com/Vladislav0Art/GDSC-algorithms.git`
- Edit some latex code, keep the same folder structure, everything related to editing latex is self explanatory (see `/src` folder).
- Create PR with the amendmends, set its target to `master` branch.
- Before pushing, don't forget to run `python3 ./build.py` so the pdf files are generated and saved to `/pdf` folder.
- `.config` and `.tgconfig` files are used by the `build.py` script for proper build scenario, check the script internals to learn more.