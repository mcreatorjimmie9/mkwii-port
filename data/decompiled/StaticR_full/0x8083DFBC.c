/* Function at 0x8083DFBC, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083DFBC(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x8083DFC4
    /* li r6, 4 */ // 0x8083DFC8
    *(0x14 + r1) = r0; // stw @ 0x8083DFCC
    *(0xc + r1) = r31; // stw @ 0x8083DFD0
    r31 = r5;
    /* li r5, -1 */ // 0x8083DFD8
    r3 = *(0 + r3); // lwz @ 0x8083DFDC
    FUN_805A6434(r5); // bl 0x805A6434
    /* extsh. r0, r3 */ // 0x8083DFE4
    if (<) goto 0x0x8083e00c;
    /* lis r3, 0 */ // 0x8083DFEC
    r3 = *(0 + r3); // lwz @ 0x8083DFF0
    /* lbzx r0, r3, r0 */ // 0x8083DFF4
    if (==) goto 0x0x8083e00c;
    *(0 + r31) = r0; // stb @ 0x8083E000
    /* li r3, 1 */ // 0x8083E004
    /* b 0x8083e010 */ // 0x8083E008
    /* li r3, 0 */ // 0x8083E00C
    r0 = *(0x14 + r1); // lwz @ 0x8083E010
    r31 = *(0xc + r1); // lwz @ 0x8083E014
    return;
}