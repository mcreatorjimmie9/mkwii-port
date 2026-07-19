/* Function at 0x805B9C50, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805B9C50(int r3, int r4, int r5, int r6)
{
    r5 = r3;
    /* lis r4, 0 */ // 0x805B9C54
    r3 = *(0xb0 + r3); // lwz @ 0x805B9C58
    r4 = r4 + 0; // 0x805B9C5C
    /* li r6, 0 */ // 0x805B9C60
    /* b 0x805e3430 */ // 0x805B9C64
}