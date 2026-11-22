#!/bin/sh
set -eu

repo_name=${1:-C-Programming-Lab}

case "$repo_name" in
    ""|*[!A-Za-z0-9._-]*)
        echo "Use a repository name containing only letters, numbers, dots, underscores or hyphens." >&2
        exit 1
        ;;
esac

if [ -e .git ]; then
    echo "This folder already contains a Git repository; stopping without changing it." >&2
    exit 1
fi

if ! command -v gh >/dev/null 2>&1 || ! command -v git >/dev/null 2>&1; then
    echo "Install Git and GitHub CLI first." >&2
    exit 1
fi

if ! gh auth status >/dev/null 2>&1; then
    echo "Sign in first by running: gh auth login" >&2
    exit 1
fi

owner=$(gh api user --jq .login)
if gh repo view "$owner/$repo_name" >/dev/null 2>&1; then
    echo "GitHub repository $owner/$repo_name already exists; stopping." >&2
    exit 1
fi

git init
git add -- README.md upload.sh Experiment-1 Experiment-2 Experiment-3 Experiment-4 Experiment-5 Experiment-6 Experiment-7 Experiment-8 Experiment-9 Experiment-10 Experiment-11
git commit -m "Add C programming lab experiments"
gh repo create "$owner/$repo_name" --public --source=. --remote=origin --push
