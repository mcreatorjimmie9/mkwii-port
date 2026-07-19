/* Function at 0x808B21DC, size=24 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808B21DC(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808B21E4
    *(0x14 + r1) = r0; // stw @ 0x808B21E8
    /* lfd f1, 0(r3) */ // 0x808B21EC
    FUN_805E3430(r3); // bl 0x805E3430
}