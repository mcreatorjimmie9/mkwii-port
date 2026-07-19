/* Function at 0x8081BF00, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_8081BF00(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x8081BF00
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x8081BF08
    /* b 0x805a3d74 */ // 0x8081BF0C
}