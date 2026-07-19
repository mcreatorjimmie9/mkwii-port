/* Function at 0x805EB720, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805EB720(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x805EB728
    /* li r6, 0 */ // 0x805EB72C
    *(0x14 + r1) = r0; // stw @ 0x805EB730
    r0 = r3;
    r3 = *(0 + r5); // lwz @ 0x805EB738
    r5 = r4;
    r4 = r0;
    FUN_805CFD60(r5, r4); // bl 0x805CFD60
    /* neg r0, r3 */ // 0x805EB748
    r0 = r0 | r3; // 0x805EB74C
    /* srwi r3, r0, 0x1f */ // 0x805EB750
    r0 = *(0x14 + r1); // lwz @ 0x805EB754
    return;
}