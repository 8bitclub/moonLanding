// FONT FUNCTIONS

#define LOCHAR 0x20 // lowest character value in font
#define HICHAR 0x7f // highest character value in font

const unsigned char font8x8[HICHAR - LOCHAR + 1][8] = {
    /*{w:8,h:8,bpp:1,count:96}*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00},
    {0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x66, 0x66, 0xFF, 0x66, 0xFF, 0x66, 0x66, 0x00},
    {0x18, 0x7C, 0x06, 0x3C, 0x60, 0x3E, 0x18, 0x00},
    {0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, 0x00},
    {0x3C, 0x66, 0x3C, 0x1C, 0xE6, 0x66, 0xFC, 0x00},
    {0x60, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00},
    {0x0C, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00},
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00},
    {0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x0C},
    {0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00},
    {0x00, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x00},
    {0x3C, 0x66, 0x76, 0x6E, 0x66, 0x66, 0x3C, 0x00},
    {0x18, 0x18, 0x1C, 0x18, 0x18, 0x18, 0x7E, 0x00},
    {0x3C, 0x66, 0x60, 0x30, 0x0C, 0x06, 0x7E, 0x00},
    {0x3C, 0x66, 0x60, 0x38, 0x60, 0x66, 0x3C, 0x00},
    {0x60, 0x70, 0x78, 0x66, 0xFE, 0x60, 0x60, 0x00},
    {0x7E, 0x06, 0x3E, 0x60, 0x60, 0x66, 0x3C, 0x00},
    {0x3C, 0x66, 0x06, 0x3E, 0x66, 0x66, 0x3C, 0x00},
    {0x7E, 0x66, 0x30, 0x18, 0x18, 0x18, 0x18, 0x00},
    {0x3C, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x3C, 0x00},
    {0x3C, 0x66, 0x66, 0x7C, 0x60, 0x66, 0x3C, 0x00},
    {0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00},
    {0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x0C},
    {0x70, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x70, 0x00},
    {0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00},
    {0x0E, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0E, 0x00},
    {0x3C, 0x66, 0x60, 0x30, 0x18, 0x00, 0x18, 0x00},
    {0x3C, 0x66, 0x76, 0x76, 0x06, 0x46, 0x3C, 0x00},
    {0x18, 0x3C, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00},
    {0x3E, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3E, 0x00},
    {0x3C, 0x66, 0x06, 0x06, 0x06, 0x66, 0x3C, 0x00},
    {0x1E, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1E, 0x00},
    {0x7E, 0x06, 0x06, 0x1E, 0x06, 0x06, 0x7E, 0x00},
    {0x7E, 0x06, 0x06, 0x1E, 0x06, 0x06, 0x06, 0x00},
    {0x3C, 0x66, 0x06, 0x76, 0x66, 0x66, 0x3C, 0x00},
    {0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00},
    {0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00},
    {0x78, 0x30, 0x30, 0x30, 0x30, 0x36, 0x1C, 0x00},
    {0x66, 0x36, 0x1E, 0x0E, 0x1E, 0x36, 0x66, 0x00},
    {0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7E, 0x00},
    {0xC6, 0xEE, 0xFE, 0xD6, 0xC6, 0xC6, 0xC6, 0x00},
    {0x66, 0x6E, 0x7E, 0x7E, 0x76, 0x66, 0x66, 0x00},
    {0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00},
    {0x3E, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x06, 0x00},
    {0x3C, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x70, 0x00},
    {0x3E, 0x66, 0x66, 0x3E, 0x1E, 0x36, 0x66, 0x00},
    {0x3C, 0x66, 0x06, 0x3C, 0x60, 0x66, 0x3C, 0x00},
    {0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00},
    {0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00},
    {0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00},
    {0xC6, 0xC6, 0xC6, 0xD6, 0xFE, 0xEE, 0xC6, 0x00},
    {0x66, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x66, 0x00},
    {0x66, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x00},
    {0x7E, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x7E, 0x00},
    {0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00},
    {0x00, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x00},
    {0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00},
    {0x00, 0x18, 0x3C, 0x7E, 0x18, 0x18, 0x18, 0x18},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF},
    {0x06, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x3C, 0x60, 0x7C, 0x66, 0x7C, 0x00},
    {0x00, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3E, 0x00},
    {0x00, 0x00, 0x3C, 0x06, 0x06, 0x06, 0x3C, 0x00},
    {0x00, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x7C, 0x00},
    {0x00, 0x00, 0x3C, 0x66, 0x7E, 0x06, 0x3C, 0x00},
    {0x00, 0x70, 0x18, 0x7C, 0x18, 0x18, 0x18, 0x00},
    {0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x3E},
    {0x00, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x66, 0x00},
    {0x00, 0x18, 0x00, 0x1C, 0x18, 0x18, 0x3C, 0x00},
    {0x00, 0x60, 0x00, 0x60, 0x60, 0x60, 0x60, 0x3C},
    {0x00, 0x06, 0x06, 0x36, 0x1E, 0x36, 0x66, 0x00},
    {0x00, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00},
    {0x00, 0x00, 0x66, 0xFE, 0xFE, 0xD6, 0xC6, 0x00},
    {0x00, 0x00, 0x3E, 0x66, 0x66, 0x66, 0x66, 0x00},
    {0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00},
    {0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x06},
    {0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60},
    {0x00, 0x00, 0x3E, 0x66, 0x06, 0x06, 0x06, 0x00},
    {0x00, 0x00, 0x7C, 0x06, 0x3C, 0x60, 0x3E, 0x00},
    {0x00, 0x18, 0x7E, 0x18, 0x18, 0x18, 0x70, 0x00},
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x00},
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00},
    {0x00, 0x00, 0xC6, 0xD6, 0xFE, 0x7C, 0x6C, 0x00},
    {0x00, 0x00, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x00},
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x7C, 0x30, 0x1E},
    {0x00, 0x00, 0x7E, 0x30, 0x18, 0x0C, 0x7E, 0x00},
    {0x38, 0x0C, 0x0C, 0x06, 0x0C, 0x0C, 0x38, 0x00},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18},
    {0x1C, 0x30, 0x30, 0x60, 0x30, 0x30, 0x1C, 0x00},
    {0x00, 0x4C, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
};

// draw character from column 0..39, row 0..23
void draw_char(char ch, unsigned char col, unsigned char row, unsigned char dbl)
{
    unsigned char i;
    const unsigned char *src = &font8x8[(ch - LOCHAR)][0];
    unsigned char y = row * 8;
    for (i = 0; i < 8; i++)
    {
        unsigned char *dest = &vidmem[y++][col];
        *dest = *src;
        if (dbl)
        {
            dest = &vidmem[y++][col];
            *dest = *src;
        }
        src += 1;
    }
}

// draw string starting at row/col (vert 1 = draw vertical)
void draw_string(const char *str, unsigned char col, unsigned char row, unsigned char vert, unsigned char dbl)
{
    do
    {
        unsigned char ch = *str++;
        if (!ch)
            break;
        draw_char(ch, col, row, dbl);
        if (vert)
            row++;
        else
            col++;
    } while (1);
}

