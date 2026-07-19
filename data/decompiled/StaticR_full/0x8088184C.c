/* Function at 0x8088184C, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_8088184C(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x8088184C
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x80881854
    /* b 0x805c51f8 */ // 0x80881858
}