/* Function at 0x805A962C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805A962C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x805A9638
    r0 = *(0x18 + r3); // lhz @ 0x805A963C
    /* clrlwi. r0, r0, 0x1f */ // 0x805A9640
    if (==) goto 0x0x805a9664;
    r3 = r4;
    r4 = r5 + 8; // 0x805A964C
    /* li r5, 8 */ // 0x805A9650
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x805A9658
    /* srwi r3, r0, 5 */ // 0x805A965C
    /* b 0x805a9668 */ // 0x805A9660
    /* li r3, 0 */ // 0x805A9664
    r0 = *(0x14 + r1); // lwz @ 0x805A9668
}