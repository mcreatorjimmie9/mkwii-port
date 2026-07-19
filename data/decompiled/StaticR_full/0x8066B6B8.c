/* Function at 0x8066B6B8, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_8066B6B8(int r3, int r4)
{
    /* mulli r0, r4, 0x5c */ // 0x8066B6B8
    r3 = r3 + r0; // 0x8066B6BC
    *(0xa8 + r3) = r5; // stw @ 0x8066B6C0
    *(0xac + r3) = r6; // stw @ 0x8066B6C4
    return;
}