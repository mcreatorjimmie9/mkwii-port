/* Function at 0x8066A3FC, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8066A3FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    *(0x14 + r1) = r0; // stw @ 0x8066A408
    r4 = r4 + 0x10; // 0x8066A410
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}