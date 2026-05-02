# cGrapher 📈

cGrapher is a lightweight, interactive console-based graphing and geometry utility written in C. It allows users to plot coordinate points on an ASCII-rendered 2D Cartesian plane, perform essential geometric calculations, and export the results to a formatted HTML report.

## 🚀 Features

* **Interactive Terminal GUI:** Navigate through options seamlessly using the UP and DOWN arrow keys.
* **Plot Coordinates:** Add points dynamically. The program visualizes the points on a 2D ASCII grid ranging from -26 to 26 on both the x and y axes.
* **Distance Calculation:** Calculate the Euclidean distance between any two saved points, or measure the distance of a point from the Origin (`O`).
* **Angle Calculation:** Find the angle (in degrees) of any plotted point relative to the origin using trigonometric computation.
* **Slope Calculation:** Calculate the mathematical slope (`m`) of a line intersecting any two user-defined points.
* **Export to HTML:** Automatically generate a `report.html` file that documents all saved points, distances, angles, and slopes in an easy-to-read, styled web page format.

## 🛠️ Prerequisites

* **Operating System:** Windows (The program utilizes `<conio.h>` for `_getch()` and Windows-specific system calls like `system("cls")`).
* **Compiler:** GCC (MinGW) or any standard C compiler compatible with Windows environments.

## ⚙️ Compilation and Execution

1. Save the source code in a file named `main.c`.
2. Open your command prompt or terminal in the directory where the file is saved.
3. Compile the code using GCC (ensure you link the math library):
   ```bash
   gcc main.c -o cgrapher
