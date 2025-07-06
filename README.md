# ascii-name-banner

This C program prints your name in large, stylized ASCII-art letters using a custom grid, while filling the background with your name repeatedly.

## 💡 Example:
If you enter `Akhilesh`, the output will be the word "AKHIL" drawn using letters, and the background will also be filled with the characters of "Akhil".

## ✨ Features:
- Renders each letter (A-Z) using a pixel-like grid.
- Background is filled with your name for a stylish touch.
- Scalable height via code configuration (`height = 1`, `2`, etc.)

## 🚀 How to Run
```bash
gcc ascii-name.c -o ascii-name
./ascii-name

## output
![Banner Output](banner_output.png)
