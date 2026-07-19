/* Function at 0x807C0A6C, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_807C0A6C(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x807C0A6C
    r3 = r3 + r0; // 0x807C0A70
    r3 = *(4 + r3); // lwz @ 0x807C0A74
    return;
}