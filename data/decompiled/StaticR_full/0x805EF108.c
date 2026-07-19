/* Function at 0x805EF108, size=36 bytes */
/* Stack frame: 1040 bytes */
/* Calls: 1 function(s) */

void FUN_805EF108(int r3, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -1040(r1) */
    /* li r6, 0 */ // 0x805EF110
    /* li r8, 0xff */ // 0x805EF114
    *(0x414 + r1) = r0; // stw @ 0x805EF118
    /* li r9, 0 */ // 0x805EF120
    r3 = *(0x10 + r3); // lwz @ 0x805EF124
    FUN_805E3430(r8, r7, r9); // bl 0x805E3430
}