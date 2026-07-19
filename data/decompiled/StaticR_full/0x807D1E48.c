/* Function at 0x807D1E48, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_807D1E48(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x807D1E48
    r3 = r3 + r0; // 0x807D1E4C
    r3 = *(0xc0 + r3); // lwz @ 0x807D1E50
    return;
}