# Five Nights at Freddy's: The Minigame Investigator
A Five Nights at Freddy's fan game on the Game Boy Advance.
This project does not exist yet.

# Building from source
1. If you're not on linux, fix that (aka download WSL - see also point 3)
2. Clone this repository and the [butano](https://github.com/GValiente/butano) engine.
```
git clone https://github.com/JK0JK/minigame-investigator
cd minigame-investigator
git clone https://github.com/GValiente/butano
```
3. Follow butano's [installation instructions](https://gvaliente.github.io/butano/getting_started.html) to get devKitArm.
4. Find out how many cores your CPU has.
```
nproc
```
5. Build the project with `make`. Use the `-j` flag for faster results. Default language is `EN`, `PT` also supported.
```
make [-j<output-of-nproc>] [LANG=<your-language>]
```

# Contact
You can find me on discord @jk0jk.
You can also email me at [thejkgameplays@gmail.com](mailto:thejkgameplays@gmail.com). I don't really check e-mail anymore, but it's still a possibility.
Lastly, you can send me a message on [gamejolt](https://gamejolt.com/@JK0JK/).

# Legal Disclaimer (Important)
This is an unofficial, fan-made project.
Five Nights at Freddy's, its story, its music and its characters are property of Scott Cawthon.
This project is not affiliated with or endorsed by Scott Cawthon.

This project uses the butano engine!

All other rights reserved. Copyright Elite Games 2021-2026.

**TO AVOID CONFUSION:** this is NOT a modification of Pokémon Emerald by Game Freak. While the project had its roots on a rom hack, this codebase is a complete rewrite that does not rely on any of Nintendo/The Pokémon Company/Game Freak's code and assets.
