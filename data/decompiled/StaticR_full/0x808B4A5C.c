/* Function at 0x808B4A5C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808B4A5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808B4A64
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r4, r3, 0x18 */ // 0x808B4A6C
    /* li r3, 2 */ // 0x808B4A70
    r0 = r4 + -2; // 0x808B4A74
    /* orc r3, r4, r3 */ // 0x808B4A78
    /* srwi r0, r0, 1 */ // 0x808B4A7C
    /* subf r0, r0, r3 */ // 0x808B4A80
    /* srwi r3, r0, 0x1f */ // 0x808B4A84
    r0 = *(0x14 + r1); // lwz @ 0x808B4A88
    return;
}