# 📝 Vim Cheat Sheet for C Programming

## 📌 Vim Modes
Vim has **three main modes**:

1. **Normal Mode** → Default. Navigate, copy, paste, delete, search.
2. **Insert Mode** → Write code like a normal editor.
3. **Command Mode** → Run commands like save, quit, search, replace.

---

## 🚀 Open and Exit Files
- `vim file.c` → Open C source file.
- `:w` → Save changes.
- `:q` → Quit.
- `:wq` or `ZZ` → Save and quit.
- `:q!` → Quit without saving.

---

## ✍️ Enter Insert Mode
In **Normal Mode**, press:
- `i` → Insert before cursor.
- `a` → Insert after cursor.
- `o` → New line below.
- `O` → New line above.

Press `Esc` to return to Normal Mode.

---

## 📂 Move in Normal Mode
- `h` → Left.
- `l` → Right.
- `0` → Beginning of line.
- `$` → End of line.
- `w` → Next word.
- `b` → Previous word.
- `gg` → Start of file.
- `G` → End of file.
- `:n` → Go to line *n*.

---

## ✂️ Copy, Paste, Delete
- `yy` → Copy (yank) line.
- `p` → Paste after cursor.
- `P` → Paste before cursor.
- `dd` → Delete line.
- `x` → Delete character.
- `u` → Undo.
- `Ctrl + r` → Redo.

---

## 🔍 Search
- `/text` → Search forward for `text`.
- `?text` → Search backward for `text`.
- `n` → Next match.
- `N` → Previous match.

---

## 🔄 Search and Replace
Replace all `;` with `ñ` in C code:
```vim
:%s/;/ñ/g
```
- `%` → Whole file.
- `s` → Substitute.
- `/;/ñ/` → From ; to ñ.
- `g` → All matches in line.

---

## ⚡ Tips for C
- Indent blocks manually or with >> / << in Normal Mode.
- Use `[{ or ]}` to jump to matching `{ or }`.
- Compile quickly without leaving Vim: `:!cc % -o %<`
	- `%` → current file, `%<` → file name without extension.
	- Example: `:!cc ft_print_alphabet.c -o ft_print_alphabet && ./ft_print_alphabet`
- Check for compilation errors: `:copen` after `:make`.
