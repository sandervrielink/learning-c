# Questions

## What's `stdint.h`?

- The header stdint.h declares sets of integer types having specified widths.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

- These are exact-width integer types that designate either a signed or unsigned (notice the u) integer type with a width designated by size N bits.

example: uintN_t -> an unsigned integer type with width size N bits.
         intN_t -> a signed integer type with width size N bits.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

- BYTE: 1 byte
- DWORD: 4 bytes
- LONG: 4 bytes
- WORD: 2 bytes


## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

- The first 2 bytes of any BMP file must be the character "B" then the character "M" in ASCII.

## What's the difference between `bfSize` and `biSize`?

- <bfSize> is the size, in bytes, of a bitmap file. <biSize> specifies the number of bytes required by the structure.

## What does it mean if `biHeight` is negative?

If biHeight is positive, the bitmap is a bottom-up DIB and its origin is the lower-left corner. If biHeight is negative, the bitmap is a top-down DIB and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

- The <biBitCount> specifies the number of bits per pixel. It defines the max number of colors in the bitmap.


## Why might `fopen` return `NULL` in `copy.c`?

- There may be a few reasons why <fopen> would return NULL in line 37 of copy.c. Since the program reaches line 37, there seems to be 2 command-line arguments, and since you are writing to a file in line 37, if the file doesn't already exist the program will create the file and store it in the current working directory. If the computer cannot allocate enough memory to create the desired file, NULL would be returned. Also, there may be a permissions error when trying to write to an open file, or you may not have access to that file.

## Why is the third argument to `fread` always `1` in our code?

- The third argument in fread is the count argument, which holds the maximum number of items to be read. In the comments above copy.c, it states that the program will read a BMP 'piece by piece', hence the 1.

## What value does `copy.c` assign to `padding` if `bi.biWidth` is `3`?

- <copy.c:70> would assign <padding> a value of 3 if <bi.biWidth> is 3.
This is because the size of RGBTRIPLE = 3, and 3 * 3 = 9 --> 9 % 4 = 1 --> 4 - 1 = 3 --> 3 % 4 = 3.
// int padding = (4 - (3 * 3 % 4) % 4;
// int padding = 3;

## What does `fseek` do?

- <fseek> moves a file pointer to specified location. In copy.c's case, it skips over the padding int and looks for next RGBTRIPLE to read.


## What is `SEEK_CUR`?

- A constant that specifies the current position of the file pointer.
