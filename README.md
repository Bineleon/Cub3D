# 🧠 Cub3D – *The Office Edition*  
*A 42 School project inspired by Wolfenstein 3D, recreated in C with a custom raycasting engine.*

---

## 🧩 Project Description

**Cub3D – The Office Edition** is a 3D game engine written in **C**, built from scratch using **raycasting**, like the *Wolfenstein 3D* game.  

A funny reinterpretation, with walls covered in the faces of **Michael Scott** and  **Dwight Schrute**.  
Each texture has been reworked to fit the humor and absurdity of the show, turning the classic 42 Cub3D project into a lighthearted tribute to Scranton’s finest paper company.  

A mix of nostalgia, pop culture, and pure C programming fun.

> 🎮 Developed as part of the 42 curriculum.  
> The goal is to learn **graphics programming**, **memory management**, and **event handling** through a low-level implementation of a raycasting engine.

---

## 🎯 Objective

- Implement a **raycasting algorithm** to simulate 3D rendering from a 2D map.  
- Parse and validate a `.cub` configuration file (textures, colors, map layout).  
- Manage **keyboard inputs**, **player movement**, and **collision detection**.  
- Render the scene using **MiniLibX**, handling textures, walls, floor, and ceiling.  
- Practice clean code architecture and proper memory management.

---

## ⚙️ Installation & Compilation

### 🧱 Requirements
- CC compiler  
- Make  
- MiniLibX (provided in the repository)  
- libbsd 

### 🧩 On Linux (Debian / Ubuntu)
```bash
sudo apt update
sudo apt install libbsd-dev xorg libxext-dev zlib1g-dev
make
```

---

## 🕹️ Usage

### 💥 Bonus version (recommended)

For the full experience:

```bash
./cub3d_bonus maps/map_good_door_bonus.cub 
```

### 🎮 Controls

| Key | Action |
|-----|--------|
| **W** | Move forward |
| **S** | Move backward |
| **A** | Move left |
| **D** | Move right |
| **← / →** | Rotate camera left / right |
| **ESC** | Exit the game |
| **SPC** *(bonus)* | Open or close a door |
| **M** *(bonus)* | Toggle mouse and look around (camera rotation) |

### Example Map Structure
```
NO textures/prison_mike_400_25.xpm
SO textures/mike_nooo_400_25.xpm
WE textures/dwight_wig_400_30.xpm
EA textures/date_mike_400_30.xpm
F 50,168,154
C 50,109,168

11111                                         
10001
10N01
10001
11111

```

- `NO`, `SO`, `EA`, `WE` → Wall textures  
- `F` / `C` → Floor and ceiling colors  
- `N`, `S`, `E`, `W` → Player spawn direction  
- `C`, `O` → Closed or open doors

---

## 🚀 Project Structure

```
Cub3D/
├── includes/        # Header files (.h)
├── srcs/            # Source files
│   ├── parsing/     # .cub file parsing
│   ├── rendering/   # Raycasting & drawing
│   ├── utils/       # Helpers & cleanup
│   └── main.c
├── libft/           # Custom standard library
├── mlx/             # MiniLibX graphics library
├── maps/            # Example maps
├── textures/        # .xpm textures
├── Makefile
└── README.md
```

---

## 🧪 Tests & Expected Behavior

✅ The program must:  
- Display a 3D rendered map using raycasting  
- Handle keyboard input smoothly (`W`, `A`, `S`, `D`, `←`, `→`)  
- Manage collisions with walls and map boundaries  
- Close cleanly using `ESC` or the window’s close button  
- Free all allocated memory (checked with Valgrind)

---

## 📝 Bonus Notes

✨ *Bonus features implemented :*
- Mini-map overlay  
- Door opening animation  
- Sprite rendering  
- Mouse movement for camera rotation  

---

## 🧑‍💻 Author

**Nelbi Leon**  
42 Paris | [GitHub](https://github.com/Bineleon)

---

### 🧭 "The worst thing about prison was the Dementors. They were flying all over the place and they were scary and they'd come down and they'd suck the soul out of your body and it hurt!"  
> — *Michael Scott, The Office*
