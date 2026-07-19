/* Function at 0x806A1D2C, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_806A1D2C(int r3, int r5, int r6)
{
    r5 = r3;
    r3 = *(0x254 + r3); // lwz @ 0x806A1D30
    r5 = r5 + 0x218; // 0x806A1D34
    /* li r6, -1 */ // 0x806A1D38
    /* b 0x8066b6b8 */ // 0x806A1D3C
}