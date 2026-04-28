# IG Reels Launcher

A tiny, slightly questionable, but surprisingly effective launcher that lets you open Instagram Reels… through Steam.

Yes, really.

This exists so you can press **“Play” in Steam** and immediately get sucked into short-form content instead of your backlog.

![IG Reels in Steam - Play](/docs/Steam_Screenshot_Play.png)

![IG Reels in Steam](/docs/Steam_Screenshot.png)

---

## What is this?

This is a lightweight launcher that opens Instagram Reels (via Brave), designed specifically so it can be added as a **Non-Steam Game** and launched directly from Steam.

Because if everything else lives in Steam… why not your attention span too?

---

## Why?

- You wanted IG Reels on desktop without opening your phone  
- You wanted to launch it from Steam for… reasons  
- You like bending tools slightly beyond their intended purpose  

Most importantly:  
It lets Steam act as a universal launcher for *everything*, including doomscrolling.

---

## Prerequisites

Before anything works, you’ll need:

- **Brave Browser installed** (this launcher assumes it)
- Steam
- The ability to edit file paths without panicking

---

## Setup

Follow these steps:

### 1. Clone the repository

```bash
git clone https://github.com/omeldar/ig_reels_launcher.git
cd ig_reels_launcher
```

---

### 2. Adjust paths

Open the launcher script and update any hardcoded paths:

- Path to the **Brave executable**
- Any OS-specific differences (Windows/Linux/etc.)

If you skip this step, it will fail. Not mysteriously—just correctly.

---

### 3. Build

Build the launcher before using it:

```bash
# Example (adjust depending on your setup)
make
```

or if it's a script-based setup:

```bash
chmod +x your_launcher_script
```

If neither of these works, inspect the repo and do the obvious thing™ for your environment.

Note: For most of you windows users, it will generate a `.exe`. You will have to add that through Steam later (see step 4).

---

### 4. Add to Steam

1. Open Steam  
2. Go to **Games → Add a Non-Steam Game to My Library**  
3. Click **Browse**  
4. Select your launcher executable  
5. Add it  

---

### 5. (Optional) Rename it, Add Cover images

Recommended names:

- IG Reels
- Add images for steam to display for IG Reels. You can find some in `/media`

---

### 6. Launch from Steam

Press **Play**.

You are now launching Instagram Reels the same way you launch games.  
Take a moment to reflect on your life choices.

---

## Notes

- This was originally built for personal use
- After first login credentials are preserved and you'll be logged in automatically (launcher sets up a new profile which saves your credentials)  
- If it doesn’t work, it’s almost certainly a path issue  
- If you think it’s not a path issue, it still is 

---

## Customization

You can tweak:

- Target URL (if Instagram inevitably changes something)
- Brave flags (fullscreen, app mode, etc.)
- Script behavior

---

## Final Thoughts

This project answers a question nobody asked:

> “What if Steam launched Instagram Reels?”

Now it does.
