# C Programming Lab

Solutions for Experiments 1–11 listed in the C Programming Lab manual.

## Experiments

1. **Experiment 1** — Personal details formatted with escape sequences; PCM marks, average and eligibility.
2. **Experiment 2** — Even or odd; sum of odd numbers in a range.
3. **Experiment 3** — Menu-driven student grade and result system using `switch` and `goto`.
4. **Experiment 4** — Prime numbers in a range using a function.
5. **Experiment 5** — Fibonacci series for N terms using iterative and recursive methods.
6. **Experiment 6** — Function call counter using the `static` storage class.
7. **Experiment 7** — Largest array element; addition of two matrices.
8. **Experiment 8** — String length without a library function; string palindrome check.
9. **Experiment 9** — `student_record` structure for five students and display of the topper.
10. **Experiment 10** — Add two numbers using pointers; print an array in reverse using pointers.
11. **Experiment 11** — Simple employee database using file handling.

Each task is in its own C source file. Compile and run a program from its folder with:

```sh
gcc filename.c -o program && ./program
```

For example:

```sh
cd Experiment-4
gcc prime_numbers_in_range.c -o program && ./program
```

The employee database creates or reads `employees.txt` in the current working directory. The personal details program has clearly marked placeholders to replace with your details.

## Upload to GitHub

Install Git and GitHub CLI, then sign in once with `gh auth login`. From this folder, run:

```sh
./upload.sh C-Programming-Lab
```

The script checks that GitHub CLI is authenticated, the repository name is valid and available, and this folder is not already a Git repository. It stops if a local `.git` directory or a repository with that name exists. Review the files before running it; the script creates a public GitHub repository and pushes this folder.
