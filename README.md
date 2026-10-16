![Tests passed](../../blob/badges/.github/badges/tests.svg)

# Inf2C-CS 2026/27 | Coursework 1

**Deadline:** November 6, 2026 at 16:00 BST

**Instructors:** Boris Grot (Course Organiser), Jianyi Cheng

**TAs:** Jiaxun Yang, Lakshmanan Lakshmanan 

The objective of this coursework is to get you familiar with programming in MIPS. There are tasks which require you to write solutions in the provided skeleton files. For each task, we have provided some associated tests, which you can use to check your solutions.

The test badge at the top of this README tracks your progress, for example **3/16 passed**. Each task counts once for C and once for MIPS; all tests in that directory must pass. The badge appears after the first GitHub Actions run and updates automatically when you push to the default branch.

Each task has one public test for C and one for MIPS. If tests do not run in your fork, enable workflows in the **Actions** tab.

The number of tests passed is **NOT** your final grade. After the deadline, your code will be subject to further hidden testing, so it is important that you also write your own tests, to ensure that your code is thoroughly tested.

## 1. Downloading the coursework

To get started, you will need to **clone** this repository. If you have used GitHub before, you will already have a HTTPS access token or an SSH key. If you do not have either, you will need to create one of them following the guides below:
  - To create an SSH key, use [this guide](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent).
  - To create a HTTPS token, use [this guide](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/creating-a-personal-access-token). Feel free to tick all the boxes when asked what permissions you would like to grant this token.

At this point, open your repository's **Code** menu and copy its HTTPS or SSH clone URL. Replace `REPOSITORY_URL` below with that URL:

```sh
git clone REPOSITORY_URL
```
Once the clone has finished, you can enter the repository directory:
```
cd REPOSITORY_NAME
```
If this is your first time using Git, you will need to do a bit of configuration:
  ```
  git config --global user.name "your_github_username"
  git config --global user.email "your_github_email"
  ```
This will set your username and email globally, so all future GitHub repositories will inherit this configuration (unless they overwrite it). If you do not wish to do that, just omit the `--global`. You can verify the setup using `git config -l`, which will tell you what you just set.

## 2. Writing your solutions

Each task has its own folder inside `src` folder containing the template files. Please write your solution for each task in the skeleton file specified in the task description. Since the tasks build on one another, you are encouraged to reuse functions from previous tasks.

**For detailed task descriptions, please refer to Handout.pdf.**

## 3. Pushing your changes to GitHub

You are encouraged to commit your work regularly. This allows you to track the history of your changes and revert to an earlier version of your code, if you need to. It also protects you from losing any of your work in the case of a computer failure. Furthermore, every time you commit and push your changes, your test results are updated, giving you continuous feedback on your implementation.
As mentioned above, the number of tests passed is **NOT** your final grade.

To find out which tests fail you can access the test log using the following steps:
Once, you have pushed your changes the test will automatically start running. Once completed you will see a green tick or a red cross next to your commit hash. Click on the tick or cross then _details_ on the opening callout.

You will find the test log by opening the relevant C or MIPS test job and expanding the *Run public test* section.
Correct test are marked with a green tick and incorrect tests with a red cross.
Each task's `C/tests/` and `MIPS/tests/` directory contains its public tests.


## 4. Testing your solutions locally

Throughout this coursework, you will be asked to write C programs and MIPS programs. In addition to the GitHub tests, you should run your own tests. To test your programs locally, you can use the provided `Makefile` in each task directory.

The supplied tests use LLVM lit, a runner that executes the commands in `.test` files. Lit and its dependencies can be installed with pip. We use a Python virtual environment here to keep the test tools separate from the system Python environment. Run these commands from the repository root:

```sh
python3 -m venv .venv
. .venv/bin/activate
python3 -m pip install -r requirements.txt
```

In each new terminal, activate the environment again with `. .venv/bin/activate` from the repository root. Then run a task's tests, for example:

```sh
make -C src/task1/C test
make -C src/task1/MIPS test
```

Both `make test` and GitHub Actions run **all valid lit tests (`.test` files) in each task's `C/tests/` or `MIPS/tests/` directory**, including any you add. Locally, run `make test` from the corresponding `C/` or `MIPS/` directory.

You do not need to use lit to test your solutions. You can use `make run` and check the results yourself, or use your own testing approach.

We encourage you to write the solution in C first, then translate it into MIPS. This will help you to better understand the algorithm on a higher level before you implement it in MIPS.

To avoid cross-system compatibility issues, you must make sure that your code runs on DICE. We strongly suggest you develop it on DICE as well to avoid last-minute surprises. You can also use Virtual DICE, a version of DICE Linux that runs in VirtualBox, for your work if you want to. You can find more information on Virtual DICE here – https://blog.inf.ed.ac.uk/systems/2024/09/25/new-virtual-dice-for-2024-25/ and https://computing.help.inf.ed.ac.uk/vdice. Please note that we will be using DICE machines for grading purposes. CODE THAT DOES NOT RUN ON DICE WILL RECEIVE A MARK OF 0 REGARDLESS OF HOW WELL IT RUNS ON YOUR SYSTEM.

## 5. Submitting your code

Once you have pushed all of your changes to GitHub and you are happy with your code and your test results, you are finished! At the deadline, we will revoke your write access to this repository and grade your work. The last version committed before the deadline is the one that will be marked. 

## 6. Good scholarly practice

Please remember the good scholarly practice requirements of the University regarding work for credit. You can find guidance on the School page:

https://informatics.ed.ac.uk/taught-students/all-students/your-studies/academic-misconduct

This also has links to the relevant University pages.

As mentioned, your code will be subject to further automatic and manual review after the deadline. Submitted code will be checked using the detection software for similarity and AI-generated code. Courseworks are **individual**, and we expect everyone to submit their sole, independent work.

While you must work on this coursework on your own, you can discuss general ideas with other students without sharing actual code or solutions. You are not allowed to use ChatGPT or other Generative AI tools for this coursework (even if this might be tempting and chances are that ChatGPT would be able to create a solution). Instead, if you need help with the coursework, please make use of the support provided to you. It is important for your learning that you develop  the knowledge, skills and understanding associated with the learning outcomes of this coursework.

Extensions or Extra Time Adjustments (ETA) are not permitted. If assessed coursework is submitted late, a mark of zero will be given.

## 7. Asking questions

If you have questions about MIPS, you should consult the lecture slides, lab materials and the appendix of the Patterson and Hennessy course textbook. If you have questions about the coursework, please start by **checking existing discussions** on Piazza. You should only start a new discussion if you cannot find the answer in the existing posts. It is quite possible that other students will already have encountered and solved the same problem and will be able to help you. The TA will also monitor Piazza and clarify things as necessary, after allowing time for student discussion to take place. Please be reminded that academic misconduct regulations also apply to Piazza, so you should **not** post coursework solutions or code snippets publicly. If in doubt, make your question private, and an instructor will check if the post is acceptable.
