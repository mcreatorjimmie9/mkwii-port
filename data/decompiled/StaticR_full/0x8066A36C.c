/* Function at 0x8066A36C, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_8066A36C(int r3, int r4)
{
    /* mulli r0, r4, 0x5c */ // 0x8066A36C
    r3 = r3 + r0; // 0x8066A370
    *(0x54 + r3) = r5; // stw @ 0x8066A374
    *(0x58 + r3) = r6; // stw @ 0x8066A378
    return;
}