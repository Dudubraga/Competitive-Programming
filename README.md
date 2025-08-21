# My Competitive Programming Journey 🚀

<p align="center">
  <img alt="Static Badge" src="https://img.shields.io/badge/Codeforces-fad061">
  <img alt="Static Badge" src="https://img.shields.io/badge/SPOJ-347ab6">
  <img alt="Static Badge" src="https://img.shields.io/badge/UVa-c61e5b">
  <img alt="Static Badge" src="https://img.shields.io/badge/Beecrowd-6b2c87">
  <img alt="Static Badge" src="https://img.shields.io/badge/Neps_Academy-ff2e34">
  <img alt="Static Badge" src="https://img.shields.io/badge/Kattis-dd8417">
  <img alt="Static Badge" src="https://img.shields.io/badge/HackerRank-08eb68">
  <img alt="Static Badge" src="https://img.shields.io/badge/CodeChef-723a17">
  <img alt="Static Badge" src="https://img.shields.io/badge/Timus-1a5dc8">
</p>

## 📌 Overview

This repository is a collection of my solutions to various competitive programming problems from platforms like Codeforces, Beecrowd, SPOJ, and others. It serves as a personal archive of my progress and learning in the world of algorithms and data structures. The highlight of this repository is a custom C++ tool designed to automate and streamline my entire workflow.

## 🛠️ The Automation Tool: `cp-helper`

To optimize my practice sessions, I developed `cp-helper`, a command-line tool written in C++. It handles the repetitive tasks of setting up and organizing problems, letting me focus on what truly matters: solving.


### Features
- 🚀 **Interactive Menu:** A simple and fast CLI to get started on a problem or contest immediately.
- 🗂️ **Automatic Scaffolding:** Instantly creates a directory for a new problem with a pre-configured C++ template and an `in.txt` file for test cases.
- 📅 **Contest Mode:** Generates a structured folder for an entire contest, creating sub-folders for each problem (e.g., A, B, C...).
- ✅ **Smart Archiving:** An interactive command to move completed problems from the `Working/` directory to the appropriate online judge folder, keeping my workspace clean.
- 🎨 **Customizable Template:** The C++ code template is not hardcoded. You can fully customize your boilerplate by editing the `Tools/template.cpp` file, with no need to recompile!

## 📁 Folder Structure

My solutions are organized by the online judge they originate from. Problems I am actively solving reside in a local `Working/` directory, which is ignored by Git.
```
/
├── 📁 Beecrowd/          # Completed solutions from Beecrowd
├── 📁 Codeforces/        # Completed solutions from Codeforces
├── 📁 SPOJ/              # Completed solutions from SPOJ
├── 📁 [...]              # ...and other online judges
├── 📁 Working/           # [Local Folder] Incomplete solutions
└── 🛠️ Tools/             # Source code for the cp-helper
     ├── cp-helper.cpp    # The main source code for the helper
     └── template.cpp     # Your customizable C++ template
```

## ⚙️ How to Use the Tool

The `cp-helper` tool is designed to be run from a local `Working/` directory that you create.

### Initial Setup
1. **Create Your Workspace:** Set up a main folder for your competitive programming practice. Inside it, create a `Working/` directory and place the `Tools/` folder (containing `cptool.cpp` and `template.cpp`) alongside it. Your structure should look like this:
	```
	CP_Practice/
	├── 🛠️ Tools/
	└── 📁 Working/
	```

2. **Customize Your Template (Optional):** Edit the `Tools/template.cpp` file to match your preferred C++ boilerplate, headers, and macros.

3. **Compile the Tool:** Navigate to the `Tools/` directory and compile the script.
    ```bash
    cd Tools/
    g++ cp-helper.cpp -o cp.exe
    ```

4. **Place the Tool:** Move the newly compiled executable into your `Working/` directory.
    ```bash
    # From the Tools directory
    mv cp.exe ../Working/
    ```

### Daily Usage
1.  Navigate to your workspace:
    ```bash
    cd Working/
    ```
2.  Run the tool:
    ```bash
    ./cp.exe
    ```
3.  Follow the on-screen menu to start a new problem, create a contest, or finalize a solution.

---