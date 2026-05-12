# Practical 2a: GitHub Account + Push Code using Git

## Step 1: Create GitHub Account

1. Open [GitHub](https://github.com?utm_source=chatgpt.com)
2. Click **Sign Up**
3. Enter email, username, password
4. Verify account and login

---

## Step 2: Install Git

1. Open [Git Downloads](https://git-scm.com/downloads?utm_source=chatgpt.com)
2. Download Git for Windows
3. Install with default settings

---

## Step 3: Configure Git

Open **Git Bash** or **VS Code Terminal** and type:

```bash
git config --global user.name "Your Name"
git config --global user.email "your_email@gmail.com"
```

Check configuration:

```bash
git config --list
```

---

## Step 4: Create Project Folder

1. Create a folder on Desktop
   Example: `MyProject`

2. Open that folder in VS Code

---

## Step 5: Initialize Git Repository

Open terminal in project folder:

```bash
git init
```

This creates a local Git repository.

---

## Step 6: Create Project Files

Create files like:

```text
index.html
style.css
script.js
```

Add some code and save files.

---

## Step 7: Check File Status

```bash
git status
```

Shows modified/new files.

---

## Step 8: Add Files

```bash
git add .
```

Adds all files to staging area.

---

## Step 9: Commit Files

```bash
git commit -m "First commit"
```

Saves project version.

---

## Step 10: Create Repository on GitHub

1. Login to [GitHub](https://github.com?utm_source=chatgpt.com)
2. Click **New Repository**
3. Enter repository name
4. Click **Create Repository**

---

## Step 11: Connect Local Repo to GitHub

Copy repository URL from GitHub and run:

```bash
git remote add origin https://github.com/username/repository-name.git
```

Example:

```bash
git remote add origin https://github.com/rajkumarshinde18/MyProject.git
```

---

## Step 12: Push Code to GitHub

Rename branch:

```bash
git branch -M main
```

Push code:

```bash
git push -u origin main
```

---

## Step 13: Refresh GitHub

Open your repository on [GitHub](https://github.com?utm_source=chatgpt.com)
You will see uploaded files.

---

# Important Git Commands

| Command                     | Use                     |
| --------------------------- | ----------------------- |
| `git init`                  | Initialize repository   |
| `git status`                | Check file status       |
| `git add .`                 | Add files               |
| `git commit -m "msg"`       | Save version            |
| `git remote add origin URL` | Connect GitHub repo     |
| `git push -u origin main`   | Upload code             |
| `git pull`                  | Download latest changes |
| `git clone URL`             | Copy repository         |

---

# Simple Flow

```text
Create Folder
↓
git init
↓
Create Files
↓
git add .
↓
git commit -m "First commit"
↓
Create GitHub Repository
↓
git remote add origin URL
↓
git push -u origin main
```
