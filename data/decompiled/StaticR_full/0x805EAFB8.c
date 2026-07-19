/* Function at 0x805EAFB8, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EAFB8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r8, 0 */ // 0x805EAFC0
    *(0x14 + r1) = r0; // stw @ 0x805EAFC8
    /* li r7, 0 */ // 0x805EAFCC
    r0 = r6 | 0x4a0; // 0x805EAFD0
    r8 = r8 + 0; // 0x805EAFD4
    *(0xc + r1) = r31; // stw @ 0x805EAFD8
    r31 = r3;
    *(0 + r3) = r8; // stw @ 0x805EAFE0
    *(8 + r3) = r7; // sth @ 0x805EAFE4
    *(0xc + r3) = r7; // stw @ 0x805EAFE8
    *(0x24 + r3) = r4; // stw @ 0x805EAFEC
    *(0x28 + r3) = r7; // stw @ 0x805EAFF0
    *(0x3c + r3) = r7; // stw @ 0x805EAFF4
    *(0x40 + r3) = r7; // stw @ 0x805EAFF8
    *(0x44 + r3) = r5; // stw @ 0x805EAFFC
    *(0x48 + r3) = r7; // stw @ 0x805EB000
    *(0x14 + r3) = r7; // stw @ 0x805EB004
    *(0x1c + r3) = r7; // stw @ 0x805EB008
    *(0x18 + r3) = r7; // stw @ 0x805EB00C
    *(0x20 + r3) = r7; // stw @ 0x805EB010
    *(4 + r3) = r0; // stw @ 0x805EB014
    if (==) goto 0x0x805eb214;
    /* andi. r0, r0, 0x320 */ // 0x805EB01C
    if (==) goto 0x0x805eb1e0;
    /* li r3, 0 */ // 0x805EB028
    if (==) goto 0x0x805eb03c;
    if (==) goto 0x0x805eb048;
    /* b 0x805eb054 */ // 0x805EB038
    /* lis r3, 0 */ // 0x805EB03C
    r3 = *(0 + r3); // lwz @ 0x805EB040
    /* b 0x805eb054 */ // 0x805EB044
    /* lis r3, 0 */ // 0x805EB048
    r3 = r3 + 0; // 0x805EB04C
    r3 = *(4 + r3); // lwz @ 0x805EB050
    r4 = *(0x10 + r3); // lwz @ 0x805EB054
    /* li r3, 8 */ // 0x805EB058
    /* li r5, 4 */ // 0x805EB05C
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805eb1dc;
    /* lis r4, 0 */ // 0x805EB06C
    /* lis r5, 1 */ // 0x805EB070
    r4 = *(0 + r4); // lwz @ 0x805EB074
    r0 = r5 + -1; // 0x805EB078
    /* li r5, 0 */ // 0x805EB07C
    /* cmpwi cr1, r4, 0 */
    *(4 + r3) = r0; // sth @ 0x805EB084
    if (<=) goto 0x0x805eb1d0;
    r7 = r4 + -8; // 0x805EB090
    if (<=) goto 0x0x805eb19c;
    /* li r8, 0 */ // 0x805EB098
    if (<) goto 0x0x805eb0b4;
    /* lis r6, -0x8000 */ // 0x805EB0A0
    r0 = r6 + -2; // 0x805EB0A4
    if (>) goto 0x0x805eb0b4;
}